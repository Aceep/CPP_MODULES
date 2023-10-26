#!/bin/sh
FILENAME=result
if [ -n "$1" ] && [ "$1" = "1" ]; then
    OPT=$1
elif [ -n "$1" ] && [ "$1" = "clean" ]; then
    if [ -z result ]; then
        rm result
    fi
elif [ -n "$1" ] && [ $1 -ne 0 ] && [ $1 -ne 1 ]; then
    echo "Usage: ./ex02_eval_diff.sh [1]"
    echo "1: keep result file"
    echo "0: delete result file"
    exit 1
else 
    OPT=0
fi
echo "Create a script that displays the difference between two files."
echo "\033[31mCompiling...\033[0m"
make -C ../ex02 re > /dev/null
echo "\033[32mCompiling done\033[0m"
echo "\033[31mRunning...\033[0m"
../ex02/account > output
echo "\033[32mRunning done, it's in output file\033[0m"
echo "\033[31mExtracting second column (so without dates)...\033[0m"
awk '{print $2}' output > mine
echo "\033[32mExtracting done, it's in mine file\033[0m"
echo "\033[31mExtracting second column (so without dates) from original\033[0m"
awk '{print $2}' ../ex02/19920104_091532.log > original
echo "\033[32mExtracting done, it's in original file\033[0m"
echo "\033[31mComparing mine with the original...\033[0m"
diff mine original > result
echo "\033[32mComparing done, it's in result file\033[0m"
echo "If result file is empty, it means that the two files are identical."
if [ ! -s "${FILENAME}" ]; then
    echo "File is empty !! Youhou !"
else
    echo "File is not empty, it means that you have to work again :/"
    echo "Here is the diff :"
    cat result
fi
echo "\033[31mCleaning...\033[0m"
make -C ../ex02 fclean > /dev/null
rm output mine original
if [ "$OPT" = "0" ]; then
    rm result
fi
echo "\033[32mCleaning done\033[0m"
echo "If you want to keep the result file, please use make ex02 OPT=1 or make ex02 OPT=2 to remove it"
echo "\033[34mThanks for the evaluation ! :)\033[0m"

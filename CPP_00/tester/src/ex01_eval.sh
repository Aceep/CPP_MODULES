
#!/bin/bash
echo "\033[32mWelcome to the Phonebook\033[0m"
echo "Let's check it !"
echo "\033[31mCompiling...\033[0m"
make -C ../ex01 re > /dev/null
echo "\033[32mCompiling done\033[0m"
echo "\033[31mRunning...\033[0m"
ls src
./src/interact.sh
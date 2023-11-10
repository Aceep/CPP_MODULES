rm *.replace > /dev/null
ex="../../el"


make -C $ex > /dev/null
mv $ex/Sed_is_for_losers . > /dev/null
echo "For ifs file, replace d with test. Result in ifs.replace :"
./Sed_is_for_losers ./ifs d 9
cat ifs.replace | cat -e
echo "\nFor empty file, replace d with test. Result in empty.replace : (should be empty)"
./Sed_is_for_losers ./empty d 9
cat empty.replace | cat -e
echo "\nFor no file, replace d with test. (should be error)"
./Sed_is_for_losers
echo "\nFor no file, replace d with test. (should be error because file doesn't exist)"
./Sed_is_for_losers ./nofile d test

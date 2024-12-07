#Write a sed command to change every occurrence of the string "xyz" to "zyx" on all lines except lines 3-5.
sed '3,5!s/xyz/zyx/g' q1.txt
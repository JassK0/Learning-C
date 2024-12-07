#Write a sed command to surround any string of two or more repeated A characters with double quotes.
#Example:
#Input: abcAbcAAzzzzAAAAzzABCC
#Output: abcAbc"AA"zzzz"AAAA"zzABCC

sed 's/A\{2,\}/"&"/g' q1.txt
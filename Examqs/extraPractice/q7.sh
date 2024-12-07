#Write a sed command to delete the third occurrence of the string "xyz" on every line.

sed 's/\(.*xyz.*xyz.*\)xyz/\1/' q1.txt
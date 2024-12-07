#delete occurances of bash, copy code

sed '/bash/d; /Copy code/d; s/\./\.\n/g' sedNote.txt > newNote.txt 
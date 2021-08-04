#/bin/sh
cat /etc/passwd | grep -v '#' | cut -f 1 -d ":" | sed -n "n;p" | sort -r  | rev |tr "\n:" ", " | cut -d "," -f $FT_LINE1-$FT_LINE2 |sed 's/.$/./'


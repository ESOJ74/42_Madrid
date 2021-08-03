#/bin/sh
cat /etc/passwd | grep -v '#' | cut -f 1 -d ":" | sed -n "n;p" | sort -r  | rev |tr "\n:" ", " | cut -d "," -f 1-2 |sed 's/.$/./'


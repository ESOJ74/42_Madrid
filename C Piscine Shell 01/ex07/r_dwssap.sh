#/bin/sh
cat /etc/passwd | grep -v '#' | cut -f 1 -d "*" | sed -n "n;p" | sort -r | rev | tr "\n:" ", " | sed 's/.$/./' | tr -d '\r\n'

#/bin/sh
basename $(find . -name "*.sh") | sed 's/.\{3\}$//'groups $(printenv FT_USER) | sed 's/ /,/g' | tr -d "\n"

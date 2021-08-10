s#/bin/sh
basename $(find . -name "*.sh") | sed -n 's/\.sh$//p'

echo "ex00"
gcc main00.c && ./a.out
echo "-------------------------------"
echo "ex01"
gcc main01.c  && ./a.out
gcc main01.c  && ./a.out "ee" "ee"
gcc main01.c  && ./a.out "ee"
echo "-------------------------------"
echo "ex02"
gcc main02.c  && ./a.out 
echo "-------------------------------"
echo "ex03"
gcc main03.c  && ./a.out "cosa"
echo "-------------------------------"
echo "ex04"
gcc main041.c ../ex04/*.c && ./a.out
echo "-------------------------------"
gcc main042.c ../ex04/*.c && ./a.out "ff" "ggrt"
echo "-------------------------------"
echo "ex05"
gcc main051.c ../ex05/*.c && ./a.out
echo "-------------------------------"
gcc main052.c ../ex05/*.c && ./a.out "df" "abc"



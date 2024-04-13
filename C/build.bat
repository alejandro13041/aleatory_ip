@echo off
	
echo start compiling proyect.
cd src

gcc -Wall -Wextra -c IP.c
gcc -Wall -Wextra -c count.c 
gcc -Wall -Wextra -c country.c
gcc -Wall -Wextra -c database.c 
gcc -Wall -Wextra -c information.c

gcc -c main.c IP.c count.c country.c database.c information.c -o main.exe 
pause

default : integral.exe integral_random.exe

integral.o : integral.c
	gcc -Wall -c integral.c

integral_random.o : integral_random.c
	gcc -Wall -c integral_random.c

integral.exe : integral.o
	gcc -Wall -o integral.exe integral.o

integral_random.exe : integral_random.o
	gcc -Wall -o integral_random.exe integral_random.o

clean : 
	rm -f integral.exe integral_random.exe *.o
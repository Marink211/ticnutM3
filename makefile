C= gcc
FLAGS= -Wall -g

all: isort txtfind

isort: main.o isort.o
			$(CC) $(FLAGS) -o isort main.o isort.o

txtfind: maint.o txtfind.o
			$(CC) $(FLAGS) -o txtfind maint.o txtfind.o

main.o: main.c  isort.h
			$(CC) $(FLAGS) -c main.c

maint.o: maint.c  txtfind.h
			$(CC) $(FLAGS) -c maint.c

txtfind.o: txtfind.c txtfind.h
			$(CC) $(FLAGS) -fPIC -c txtfind.c

isort.o: isort.c isort.h
			$(CC) $(FLAGS) -fPIC -c isort.c

.PHONY: clean all

clean:
			rm -f *.o *.a *.so isort txtfind


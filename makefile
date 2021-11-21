.PHONY =all clean
AR=ar
CC=gcc
FLAGS= -Wall -g
all: libmylib.a connections
connections: main.o libmylib.a
	$(CC) $(FLAGS) -o connections main.o libmylib.a
libmylib.a:my_mat.o
	$(AR) -rcs libmylib.a my_mat.o
my_mat.o:my_mat.c my_mat.h 
	$(CC) $(FLAG) -c my_mat.c
main.o:main.c my_mat.h 
	$(CC) $(FLAGS) -c main.c 
clean:
	rm -f *.o *.a *.so *.out *.gch connections
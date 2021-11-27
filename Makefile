CC=gcc
AR=ar
OBJECT_MAIN=main.o
OBJECT_LIB=NumClass.o
FLAGS=-Wall -g   

all: mat connections 
 
connections:main.o libclassmymat.a
	$(CC) $(FLAGS) -o connections main.o libclassmymat.a


mat: libclassmymat.a	



libclassmymat.a: my_mat.o   
	$(AR) -rcs -o libclassmymat.a my_mat.o 



my_mat.o : my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 	



main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c   
	
.PHONY: clean all

clean:
		rm -f *.o *.a connections   
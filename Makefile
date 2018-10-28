#HW 3 Makefil

queck : main.o queue.o stack.o
	gcc -Wall -o queck main.o queue.o stack.o
main.o : main.c
	gcc -c -g main.c
queue.o : queue.c queue.h
	gcc -c -g queue.c
stack.o : stack.c stack.h
	gcc -c -g stack.c
recurse : recursive.o
	gcc -Wall -o recurse recursive.o
recursive.o : recursive.c
	gcc -c -g recursive.c
clean :
	rm queck recurse *.o

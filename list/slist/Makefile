test:test.o slist.o
	gcc -o test test.o slist.o -g
test.o:test.c
	gcc -c test.c -o test.o -g
seqlist.o:slist.c
	gcc -c slist.c -o slist.o -g
.PHONY:clean
clean:
	rm -f test test.o slist.o


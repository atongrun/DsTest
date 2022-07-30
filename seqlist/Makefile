test:test.o seqlist.o
	gcc -o test test.o seqlist.o -g
test.o:test.c
	gcc -c test.c -o test.o -g
seqlist.o:seqlist.c
	gcc -c seqlist.c -o seqlist.o -g
.PHONY:clean
clean:
	rm -f test test.o seqlist.o


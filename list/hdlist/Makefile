test:test.o hdlist.o
	gcc -o test test.o hdlist.o
test.o:test.c
	gcc -c -g test.c -o test.o
hdlist.o:hdlist.c
	gcc -c -g hdlist.c -o hdlist.o
.PHONY:clean
clean:
	rm -f test test.o hdlist.o


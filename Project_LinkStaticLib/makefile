vpath %.c src

CC = gcc
CFLAG = -static -I include -L lib -l staticlink

main: main.c
	$(CC) $^ $(CFLAG) -o $@

.PHONY: clean run importLib

clean:
	rm -rf main

run:
	@./main

importLib:
	cp -r ../Project_StaticLib/include .
	cp ../Project_StaticLib/libstaticlink.a lib
	

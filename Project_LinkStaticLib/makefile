vpath %.c src

CC = gcc
CFLAG = -I include -L lib -l staticlink.1.0.0

main: main.c
	$(CC) $^ $(CFLAG) -o $@

.PHONY: clean run importLib

clean:
	rm -rf main

run:
	@./main

importLib:
	cp -r ../Project_StaticLib/include .
	cp ../Project_StaticLib/libstaticlink.1.0.0.a lib
	

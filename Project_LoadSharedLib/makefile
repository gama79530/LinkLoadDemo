vpath %.c src

CC = gcc
CFLAG = -I include -l dl

main: main.c
	$(CC) $^ $(CFLAG) -o $@

.PHONY: clean run importLib

clean:
	rm -rf main

importLib:
	cp -r ../Project_SharedLibForDynamicLoad/include .

run:
	@./main
	
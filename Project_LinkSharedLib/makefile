vpath %.c src

CC = gcc
CFLAG = -I include -L ../SharedLib -l dynamiclink

main: main.c
	$(CC) $^ $(CFLAG) -o $@

.PHONY: clean run importLib

clean:
	rm -rf main

importLib:
	cp -r ../Project_SharedLib/include .

LD_LIBRARY_PATH=$$LD_LIBRARY_PATH:../SharedLib
export LD_LIBRARY_PATH
run:
	@./main
	

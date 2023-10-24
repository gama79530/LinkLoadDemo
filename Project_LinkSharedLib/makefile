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
	mkdir -p ../SharedLib
	cp ../Project_SharedLib/libdynamiclink.so.1.0.0 ../SharedLib
	ln -fs ../SharedLib/libdynamiclink.so.1.0.0 ../SharedLib/libdynamiclink.so.1
	ln -fs ../SharedLib/libdynamiclink.so.1.0.0 ../SharedLib/libdynamiclink.so

LD_LIBRARY_PATH=$$LD_LIBRARY_PATH:../SharedLib
export LD_LIBRARY_PATH
run:
	@./main
	

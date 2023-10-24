vpath %.c src

CC = gcc
CFLAG = -l dl

main: main.c
	$(CC) $^ $(CFLAG) -o $@

.PHONY: clean run importLib

clean:
	rm -rf main

importLib:
	mkdir -p ../SharedLib
	cp ../Project_SharedLibForDynamicLoad/libdynamicload.so.1.0.0 ../SharedLib
	ln -fs ../SharedLib/libdynamicload.so.1.0.0 ../SharedLib/libdynamicload.so
	ln -fs ../SharedLib/libdynamicload.so.1.0.0 ../SharedLib/libdynamicload.so.1

LD_LIBRARY_PATH=$$LD_LIBRARY_PATH:../SharedLib
export LD_LIBRARY_PATH
run:
	@./main
	
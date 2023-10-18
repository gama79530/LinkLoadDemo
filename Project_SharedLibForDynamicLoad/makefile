vpath %.c src
vpath %.o src

CC = gcc
CFLAG = -c

objects = prog1.o prog2.o prog3.o

all: clean $(objects)

%.o: %.c
	$(CC) $^ $(CFLAG) -o src/$@

.PHONY: clean pack deploy

clean:
	rm -rf src/*.o

pack:
	$(CC) $(foreach wrd, $(objects), src/$(wrd)) -shared -Wl,-soname,libdynamicload.so.1 -o libdynamicload.so.1.0.0

deploy:
	mkdir -p ../SharedLib
	cp libdynamicload.so.1.0.0 ../SharedLib
	ln -fs ../SharedLib/libdynamicload.so.1.0.0 ../SharedLib/libdynamicload.so

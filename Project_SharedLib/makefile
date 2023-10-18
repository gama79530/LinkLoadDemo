vpath %.c src
vpath %.o src

CC = gcc
CFLAG = -c -fPIC

objects = prog1.o prog2.o prog3.o

all: clean $(objects)

%.o: %.c
	$(CC) $^ $(CFLAG) -o src/$@

.PHONY: clean pack deploy

clean:
	rm -rf src/*.o

pack:
	$(CC) $(foreach wrd, $(objects), src/$(wrd)) -shared -Wl,-soname,libdynamiclink.so.1 -o libdynamiclink.so.1.0.0

deploy:
	mkdir -p ../SharedLib
	cp libdynamiclink.so.1.0.0 ../SharedLib
	ln -fs ../SharedLib/libdynamiclink.so.1.0.0 ../SharedLib/libdynamiclink.so.1
	ln -fs ../SharedLib/libdynamiclink.so.1.0.0 ../SharedLib/libdynamiclink.so

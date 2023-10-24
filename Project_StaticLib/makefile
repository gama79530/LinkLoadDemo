vpath %.c src
vpath %.o src

CC = gcc
CFLAG = -c

objects = prog1.o prog2.o prog3.o

all: clean $(objects)

%.o: %.c
	$(CC) $^ $(CFLAG) -o src/$@

.PHONY: clean pack

clean:
	rm -rf src/*.o

pack:
	@rm -rf libstaticlink.a
	ar rcs libstaticlink.a $(foreach wrd, $(objects),src/$(wrd))

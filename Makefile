all: main

CC = clang
override CFLAGS += -g -Wno-everything -pthread -lm

main: main.c
	$(CC) $(CFLAGS) main.c -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -O0 $(SRCS) -o "$@"

hello: 1/hello.c
	$(CC) $(CFLAGS) 1/hello.c -lcs50 -o 1/hello

clean:
	rm -f main main-debug 1/hello
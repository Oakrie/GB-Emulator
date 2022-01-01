OUT = gbemu
SRC = $(wildcard src/*/*.c)
MAIN = src/main.c 
OBJ = ${SRC:.c=.o}
CFLAGS = -lSegFault -g

$(info $(OUT))

CC := gcc

$(OUT): $(MAIN) $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c 
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OUT) $(OBJ)

.PHONY: all clean

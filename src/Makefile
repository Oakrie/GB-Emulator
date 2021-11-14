
SRC = $(wildcard */*.c)
OBJ = ${SRC:.c=.o}

$(info $(OUT))

CC := gcc

GB-Emu: main.c defines.h $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
    
$(OUT): $(SRC)
	$(CC) $(filter $(dir $@)%,$^) -o $@ $(LDFLAGS)

clean:
	rm -f $(OUT) $(OBJ)

.PHONY: all clean

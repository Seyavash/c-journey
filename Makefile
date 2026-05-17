CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11 -pedantic
TARGET  = check_sign

all: $(TARGET)

$(TARGET): check_sign.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
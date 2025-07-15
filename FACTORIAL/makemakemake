CC = gcc
CFLAGS = -Wall -Wextra -g
OBJECT = factorial.o factt.o
TARGET = main
all: $(TARGET)
$(TARGET): $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECT) $(TARGET)
.PHONY: all clean

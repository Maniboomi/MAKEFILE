CC = gcc
CFLAGS = -Wall -Wextra -g
OBJECT = prime.o check.o
TARGET = main
all: $(TARGET)
$(TARGET): $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^ -lm
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -lm
clean:
	rm -f $(TARGET) $(OBJECT)
.PHONY:
	all clean



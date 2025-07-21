CC = gcc
CFLAGS = -Wall -Wextra -g
OBJECT = fibonacci.o fibo.o fiboo.o
TARGET = main
all: $(TARGET)
$(TARGET): $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@
clean:
	rm -f $(TARGET) $(OBJECT)
.PHONY:
	all clean


CC = gcc
CFLAGS = -Wall -Wextra -g
OBJECT = math_library.o power.o sqroot.o
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


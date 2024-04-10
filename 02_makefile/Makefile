CC = gcc
CFLAGS = -Wall -Iinclude

SRC_DIR = src
INC_DIR = include
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o) 

TARGET = $(BIN_DIR)/my_program

all: $(TARGET)

$(BIN_DIR):
	mkdir -p $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	rm -f $(BIN_DIR)/*.o $(TARGET)

.PHONY: help
	@echo "Makefile usage:"
	@echo "  make all     - Compile and link all source files."
	@echo "  make clean   - Remove all generated object files and the executable."
	@echo "  make help    - Display this help message."

#Компилятор и флаги
CC = gcc
CFLAGS = -Wall -std=c99

#Целевой исполняемый файл
TARGET = calculator

#Исходники и объектные файлы
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^	

%.o: %.c calc.h
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJ) $(TARGET)

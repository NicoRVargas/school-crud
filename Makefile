CC = g++
CC_FLAGS = -g

C_SOURCE=./src/*.cpp
OUTPUT=./bin/school_crud.exe

allt:
		@ echo "Building target using GCC compiler (MORE_INFO):"
		$(CC) -g -std=c++17 -O2 -Wall $(C_SOURCE) $(CC_FLAGS) -o $(OUTPUT)

all:
		@ echo "Building target using GCC compiler:"
		$(CC) -g $(C_SOURCE) $(CC_FLAGS) -o $(OUTPUT)

run: all
		@ echo "Running $(OUTPUT):"
		./$(OUTPUT)

runt: allt
		@ echo "Running $(OUTPUT) (MORE_INFO):"
		./$(OUTPUT)

clean:
		@ echo "Removing $(OUTPUT):"
		rm -f $(OUTPUT)

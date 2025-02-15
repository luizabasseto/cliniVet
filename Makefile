# Definindo o compilador e as flags
CXX = g++
CXXFLAGS = -g -Wall -Werror -std=c++14

# Diretórios onde os arquivos .cpp estão localizados
SRCS = $(wildcard *.cpp) $(wildcard entidades/*.cpp) $(wildcard daos/*.cpp) $(wildcard managers/*.cpp)
HEADERS = $(wildcard *.hpp) $(wildcard entidades/*.hpp) $(wildcard daos/*.hpp) $(wildcard managers/*.hpp)

# Nome do executável
TARGET = main

# Compilando o executável principal
$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Compilando o executável para debug (sem otimização)
main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o main-debug

# Limpando arquivos de compilação
clean:
	del $(TARGET) main-debug

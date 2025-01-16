# Определение компилятора (gcc для Linux, g++ для Windows)
CXX = g++

# Определение команды удаления и расширение файла в зависимости от ОС
ifeq ($(OS),Windows_NT)
    RM = del
    EXT = .exe
else
    RM = rm
    EXT = 
endif

# Имя выходного файла
TARGET = L409_137$(EXT)

# Исходные файлы
SRCS = L409_137test.cpp L409_137.cpp

# Объектные файлы
OBJS = $(SRCS:.cpp=.o)

# Правило по умолчанию для сборки исполняемого файла
all: $(TARGET)

# Правило для создания исполняемого файла
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

# Правило для компиляции .cpp в .o
%.o: %.cpp 
	$(CXX) -c $< -o $@


.PHONY: clean
clean:
	$(RM) $(OBJS) $(TARGET)
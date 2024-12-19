# Указываем компилятор
CXX = g++
# Указываем флаги компиляции
CXXFLAGS = -Wall -g
# Имя выходного файла
TARGET = L403_133
# Исходные файлы
SRCS =  L403_133test.cpp L403_133.cpp L402_132.cpp
# Объектные файлы
OBJS = $(SRCS:.cpp=.o)

# Правило по умолчанию
all: $(TARGET) clean

# Правило для создания исполняемого файла
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Правило для компиляции .cpp в .o
%.o: %.cpp$(CXX) $(CXXFLAGS) -c $< -o $@

# Правило для очистки
clean:
	del /Q $(OBJS) $(TARGET)

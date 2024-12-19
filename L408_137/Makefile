# Указываем компилятор
CXX = g++
# Указываем флаги компиляции
CXXFLAGS = -Wall -g
# Имя выходного файла
TARGET = L408_137
# Исходные файлы
SRCS =  L408_137test.cpp L408_137.cpp L402_132.cpp L403_133.cpp
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

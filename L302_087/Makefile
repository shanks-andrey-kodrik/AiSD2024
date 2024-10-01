# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++

# Определение команды удаления и расширение файла в зависимости от ОС
ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l302087o=L302_087.o L302_087test.o
L302087.exe: $(l302087o)
	$(CXX) -o L302087.exe $(l302087o)

L302_087.o: L302_087.c
	$(CXX) -c L302_087.c

L302_087test.o: L302_087test.c L302_087.h
	$(CXX) -c L302_087test.c

.PHONY: clean
clean:
	$(RM) $(objects) $(l302087o) m.exe L302087.exe
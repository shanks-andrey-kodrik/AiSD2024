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


l303088o=L303_088.o L303_088test.o
L303088.exe: $(l303088o)
	$(CXX) -o L303088.exe $(l303088o)

L303_088.o: L303_088.c
	$(CXX) -c L303_088.c

L303_088test.o: L303_088test.c L303_088.h
	$(CXX) -c L303_088test.c

.PHONY: clean
clean:
	$(RM) $(objects) $(l303088o) m.exe L303088.exe
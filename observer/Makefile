CXX=g++
CXXFLAGS=-Wall -g
OBJ_FOLDER=obj
EXEC=main

.PHONY: mkdir

build: mkdir main
	
run: build
	./main

clean: 
	rm -rf $(OBJ_FOLDER)
	rm main

mkdir: $(OBJ_FOLDER)

$(OBJ_FOLDER):
	mkdir -p $(OBJ_FOLDER)

main: $(OBJ_FOLDER)/subject.o $(OBJ_FOLDER)/observer.o $(OBJ_FOLDER)/subscriber.o $(OBJ_FOLDER)/main.o
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ_FOLDER)/subject.o $(OBJ_FOLDER)/observer.o $(OBJ_FOLDER)/subscriber.o $(OBJ_FOLDER)/main.o

$(OBJ_FOLDER)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c -o $(OBJ_FOLDER)/main.o main.cpp

$(OBJ_FOLDER)/subject.o: subject.cpp
	$(CXX) $(CXXFLAGS) -c -o $(OBJ_FOLDER)/subject.o subject.cpp

$(OBJ_FOLDER)/observer.o: observer.cpp
	$(CXX) $(CXXFLAGS) -c -o $(OBJ_FOLDER)/observer.o observer.cpp

$(OBJ_FOLDER)/subscriber.o: subscriber.cpp
	$(CXX) $(CXXFLAGS) -c -o $(OBJ_FOLDER)/subscriber.o subscriber.cpp

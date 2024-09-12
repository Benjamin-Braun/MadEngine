osx.compile:
	g++ -Wall src/*.cpp game.cpp -o bin/game -lglut -framework OpenGL -static-libstdc++

osx.compile.run:
	g++ -Wall src/*.cpp game.cpp -o bin/game -lglut -framework OpenGL -static-libstdc++
	bin/game

win.compile:
	g++ -Wall src/*.cpp game.cpp -o bin/game -lglu32 -lglut32 -lopengl32 -static-libstdc++

win.compile.run:
	g++ -Wall src/*.cpp game.cpp -o bin/game -lglu32 -lglut32 -lopengl32 -static-libstdc++
	bin/game

g++ -c -Wall -O2 source-files/main.cpp -I dependencies/sfml/include -o obj/release/main.o
g++ obj/release/main.o -o out/release/sfml-game -L dependencies/sfml/lib -lsfml-graphics -lsfml-window -lsfml-system
START out/release/sfml-game
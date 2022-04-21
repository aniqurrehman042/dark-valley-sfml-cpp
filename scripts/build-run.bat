cd obj/debug
g++ -c -Wall ../../source-files/*.cpp -I ../../dependencies/sfml/include -I ../../header-files
cd ../../out/debug
g++ ../../obj/debug/*.o -o dark-valley -L ../../dependencies/sfml/lib -lsfml-network-d -lsfml-audio-d -lsfml-graphics-d -lsfml-window-d -lsfml-system-d
START dark-valley
cd ../../
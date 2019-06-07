# cmake version
cmake_minimum_required( VERSION 3.0 )

#projeto BANG!
project(BANG!)

# include
include_directories( ./include ./src ./libs/allegro5/include)

# Target
add_executable( binary ./BANG!.cpp ./src/deck.cpp ./src/arma_carabine.cpp ./src/arma_schofield.cpp ./src/arma_winchester.cpp ./src/arma.cpp ./src/bandido.cpp ./src/bang.cpp ./src/carroagem.cpp ./src/carroca.cpp ./src/cartas.cpp ./src/cerveja.cpp ./src/dealer.cpp ./src/delegado.cpp ./src/dinamite.cpp ./src/duelo.cpp ./src/esquiva.cpp ./src/jogador.cpp ./src/metralhadora.cpp ./src/mira.cpp ./src/mustang.cpp ./src/papel.cpp ./src/personagem.cpp ./src/prisao.cpp ./src/renegado.cpp ./src/ ./src/saloon.cpp ./src/xerife.cpp)

# external libs
add_subdirectory( ./libs/allegro5 )
target_link_libraries( binary  allegro_acodec allegro_audio allegro_color allegro_dialog allegro_image allegro_main allegro_memfile allegro_physfs allegro_primitives allegro_ttf allegro_font allegro )

#copy images and sound to the same directory of the binary build
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

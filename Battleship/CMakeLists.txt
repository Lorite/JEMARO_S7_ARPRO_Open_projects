project(battleship)

include_directories(include)

add_executable(battleship
    main.cpp
    include/player.h    src/player.cpp
    include/boat.h
    include/cell.h
    include/utils.h     src/utils.cpp
 )

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

#include <ncurses.h>




int main(void) {

    initscr();

    int screen_width  = getmaxx(stdscr);
    int screen_height = getmaxy(stdscr);

    size_t cursor_x = 0;
    size_t cursor_y = 0;


    bool quit = false;
    while (!quit) {

        move(cursor_y, cursor_x);

        int c = getch();
        switch (c) {
            case 'q': {
                quit = true;
            } break;
        }

        refresh();
        clear();

    }

    endwin();

    return EXIT_SUCCESS;
}

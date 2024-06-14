#include <stdio.h>
#include <conio.h>
int main()
{
    printf("The World is running, press escape to exit\n");
    while (1) {
        if ( kbhit() ) {
            int ch;
            ch = getch();
            if (ch == 0x1B){
                printf("ESC key pressed, exit\n");
                break;
            }
            else
                printf("Key pressed = '%c'\n",ch);
        }
    }
    return 0;
}

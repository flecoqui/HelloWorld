#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <ctype.h>
#include <sys/ioctl.h>
#include <unistd.h>
int kbhit()
{
    int byteswaiting;
    ioctl(STDIN_FILENO, FIONREAD, &byteswaiting);
    return byteswaiting;
}
int getch(void)
{
    int ch;
    ch = getchar();
    return ch;
}
void enable_raw_mode()
{
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~(ICANON | ECHO); // Disable echo as well
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}
void disable_raw_mode()
{
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag |= ICANON | ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}
int main()
{
    char ch;
    printf("The World is running, press escape to exit\n");
    enable_raw_mode();
    while (1) {
        if ( kbhit() ) {
           ch = getch();
            if (ch == 0x1B){
                printf("ESC key pressed, exit\n");
                break;
            }
            else
                printf("Key pressed = '%c'\n",ch);
        }
    }
    disable_raw_mode();
    return 0;
}

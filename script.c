#include <stdio.h>
#include <windows.h>

int main() {
    int actionPerformed = 0;
    while (1) {
        if ((GetAsyncKeyState(VK_SPACE) & 0x8001) && (!actionPerformed)) {
            printf("Hello, World!\n");
            actionPerformed = 1;
        } else if (!(GetAsyncKeyState(VK_SPACE)) & 0x8001) {
            actionPerformed = 0;
        }
    }
    return 0;
}
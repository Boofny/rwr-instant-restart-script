#include <stdio.h>
#include <windows.h>

int main() {
    int actionPerformed = 0;
    printf("The script is ready!\n");
    printf("Press 'ESC' when you want to restart your run.\n");
    while (1) {
        if ((GetAsyncKeyState(VK_ESCAPE) & 0x8001) && (!actionPerformed)) {
            Sleep(1);
            keybd_event(VK_DOWN, 0, 0, 0);
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);

            keybd_event(VK_RIGHT, 0, 0, 0);
            keybd_event(VK_RIGHT, 0, KEYEVENTF_KEYUP, 0);
            actionPerformed = 1;
        } else if (!(GetAsyncKeyState(VK_SPACE)) & 0x8001) {
            actionPerformed = 0;
        }
    }
    return 0;
}
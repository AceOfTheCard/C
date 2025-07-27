#include <stdio.h>
#include <time.h>
#include <string.h>




void printMessage(){
    const char *message = "Hello Stranger.\nWelcome to my CV.\nHere you are going to find really interesting things.\nFeel free to explore and find out what you would like :)!\n";
    struct timespec ts;

    ts.tv_sec = 0;
    ts.tv_nsec = 200 * 300000L;
    for (int i = 0; i < strlen(message); i++) {
        printf("%c", message[i]);
        fflush(stdout); // ensure the output appears immediately
        nanosleep(&ts, NULL); // delay
    }

    printf("\n");

}

int main() {
    printMessage();
    return 0;
}

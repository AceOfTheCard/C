#include <stdio.h>
#include <time.h>
#ifdef _WIN32
    #include <windows.h>
#endif
#include <string.h>

// ANSI escape codes for colorful output
#define RED    "\x1b[31m"
#define GREEN  "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define BOLD   "\x1b[1m"
#define WHITE  "\x1b[37m"
#define UNDERLINE "\x1b[4m"
#define ITALIC "\x1b[3m"




void printHeader(){
    #ifdef _WIN32
        // this was about reading the UTF-8 characters
        SetConsoleOutputCP(CP_UTF8);
    #endif
    printf(GREEN"                ╔════════════════════════════╗                \n");
    printf("                ║   Welcome to Flokshi's CV  ║                \n");
    printf("                ╚════════════════════════════╝                \n"RESET);
}


void typeEffect(const char *text, int delay_ms, const char *style) {
    struct timespec ts = {0, delay_ms * 400000L};
    for (int i = 0; i < strlen(text); i++) {
        printf("%c", text[i]);
        fflush(stdout);
        nanosleep(&ts, NULL);
    }
}

void printMessage(){
    const char *message = BOLD"Olta Bekaj "RESET" Web Developer\n📧 oltabekaj@gmail.com   📞+3552712511\n📍Tirana,Albania         📅 09/08/2004\n  ";
    typeEffect(message,40,WHITE);
}

void profile(){
    printf("\n");
    printf(BOLD UNDERLINE"Profile\n"RESET);
    char* message="I am a driven and versatile individual with a strong foundation in web development and a passion for technology.\nI  have practical experience creating web applications using modern tools and frameworks, delivering clean and  responsive solutions.\nBeyond development, I’m actively involved in cybersecurity, regularly competing in Capture the Flag (CTF) challenges, which have sharpened my analytical thinking, teamwork, and technical problem-solving abilities.\n";
    typeEffect(message,40,WHITE);
}

void education(){
    printf("\n");
    printf(BOLD UNDERLINE "Eductaion\n"RESET);
    printf("09/2022-06/2025 "BOLD"      Bachelors Degree in Business Informatics\n"RESET" Tirana, Albania      Faculty of Economics, University of Tirana");
    
}


void project(){
    printf("Project 1\n");
    printf("Project 2\n");
    printf("Project 3\n");
}


void experience(){
    printf("Experience 1\n");
    printf("Experience 2\n");
    printf("Experience 3\n");
}


void aboutMe(){
    const char* message=" I am Flokshi\n Just Graduated University and now am looking for my next adventure.\n I enjoy learning very much about the computers, Running, Playing Chess and Reading\n You can contact me at \n -email: oltabekaj@gmail.com\n -tel:+355692712511\n -twitter:flokshi\nMy biggest dream is to be part of a ctf team in the future.:)\n If you like my work and want to know more about it, hit me up. I am waiting.";
    typeEffect(message,100, WHITE);

}

int main() {

    printHeader();
    printMessage();
    profile();
    int n;
    char answer='y';
    while(answer=='y'){
        typeEffect("Here are some options you can choose from.\n 1. Projects\n 2. Past Experiences\n 3. About Me\n",40,WHITE);
        scanf("%d",&n);
        switch (n)
        {case 1: education(); break;
         case 2:experience(); break;
         case 3: /**/break; // without break the code below the function continue to execute. 
         case 4: /*project*/ break;
         case 5: /*Languages*/break;
         case 6: /*Interests*/ break;
         case 7: /*certificates*/ break;
         default:
            printf("Not founded as an option :|\n The program is going to terminate itself now.\n");
            return 0;
        }
        printf("Would you like to continue (y/n)");
        scanf(" %c", &answer);
    }    
    return 0;
}

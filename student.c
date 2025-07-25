#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// A dynamic memory collection 

typedef struct Student{
    char* name; // dynamic size rather than fixed size
    int age;
    int id;
}Student;


Student* addStudent(int age, char* name, int id){
    Student* student = (Student*)malloc(sizeof(Student));
    if(!student) return NULL;  
    student->age = age;
    student->id = id;
     
    student->name = (char*)malloc(sizeof(strlen(name)+1)); 
    if(!student->name){
        free(student);
        return NULL;
    }
    strcpy(student->name,name);

    printf("A new student is created");
    return student;
}


int main(){
    Student* student =  addStudent(13,"Anna",1);
    return 0;
}




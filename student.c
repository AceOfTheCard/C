#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#pragma pack(1)
typedef struct Student{
    char* name; // dynamic size rather than fixed size
    int age;
    int id;
}Student;


Student* addStudent(int age, char* name, int id){
    Student* student = (Student*)malloc(sizeof(Student));
    printf("The based address of the student block is %p\n",&student);
    printf("The ending address of the student block is %p\n",((char*)&student +sizeof(student)));
    if(!student) return NULL;  
    student->age = age;
    student->id = id;
     
    student->name = (char*)malloc(sizeof(strlen(name)+1)); 
    if(!student->name){
        free(student);
        return NULL;
    }
    strcpy(student->name,name);

    printf("A new student is created \n");
    return student;
}


int main(){
    Student* student =  addStudent(13,"Anna",1);
    printf("The size of a char pointer is %d ",sizeof(Student));
    return 0;
}




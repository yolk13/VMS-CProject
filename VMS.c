#include<stdio.h>
#include<string.h>
// Declaration of Users
struct admin{
    char user;
    char pass;
}au;
struct Eofficer{
    char user;
    char pass;
    char election;
    int status;
}eo[10];
struct voter{
    int id;
    int status;
    int DOB;
    char area;
}v[5000];
//Declaration of Candidate
struct candidate{
    int id;
    char symbol;
    char rparty;
    char name;
    char postof;
    char area;
    int DOB;
}c[700];

//main Code

int main(){
login();
}

int login(){
printf("====================================\n");
printf("WELCOME TO VOTING MANAGEMENT SYSYEM (VMS)");
}

int admin(){
	
}

int Eofficer(){
	
}

int voter(){
	
}


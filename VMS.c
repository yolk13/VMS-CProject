#include<stdio.h>
#include<string.h>
#include<conio.h>
// Declaration of Users
struct Madmin{
    char user[8];
    char pass[8];
	char DOB[6];
}au = {"admin","admin","010101"};
struct Eofficer{
    char user;
    char pass;
    char election;
    char DOB;
    int status;
}eo[10];
struct Voter{
    int id;
    int status;
    char DOB;
    char area;
}v[5000];
//Declaration of Candidate
struct Candidate{
    int id;
    char symbol;
    char rparty;
    char name;
    char postof;
    char area;
    char DOB;
    int vote;
}can[700];

//main Code

int main(){
//	strcpy(au.user,"admin");
//	strcpy(au.pass,"admin");
//	au.DOB=010101;
		
	login();
}

int login()
{
	struct Madmin madmin;
	struct Eofficer eofficer;
	struct Voter voter;
	struct Candidate candidate;
	printf("=========================================\n \t|WELCOME TO VOTING MANAGEMENT SYSTEM (VMS)");
	printf("\n\n \t|PLEASE LOGIN BEFORE YOU CAN CONTINUE\n");
	printf(" \n\nEnter your ID---:");
	char uid[5];
	scanf("%s",&uid);
	printf(" Enter your DateOfBirth---:");
	char udb[6];
	scanf("%s",&udb);
	int x;
	if((strcmp(au.user,uid)==0)&&(strcmp(au.DOB,udb)==0))
	{
		admin();
	}
	else
	{
		Eofficer();
	}
}

int admin(){
	system("cls");
	printf("=========================================\n \t|WELCOME TO VMS ADMIN PORTAL");
	printf("\n\n");
	printf("1. option a \n2. option b \n");
}

int Eofficer(){
	system("cls");
	printf("WELCOME TO VMS ELECTION OFFICER PORTAL");
}

int voter(){
	system("cls");
	
}


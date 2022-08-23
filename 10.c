#include <stdio.h>
#include<string.h>
struct student
{
 int roll_no;
 char name[50];
 int percentage;
};
int n;
void get_data(struct student s[]);
void putdata(struct student s[]);
void sort(struct student s[]);
void search(struct student s[]);
int main() 
{
 int ch;
 printf("\n Enter number of students in the class : ");
 scanf("%d",&n);
 struct student s[n];
 get_data(s);
 putdata(s);
 do
 {
 printf("\n\n **Menu **");
 printf("\n 1.Sort Student Data\n 2.Search Student Data\n 3.Exit");
 printf("\n Enter you choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 sort(s);
 printf("\n The sorted data is : ");
 putdata(s);
 break;
 case 2: 
 search(s);
 break;
 case 3:
 return 0;
 default: printf("\n Invalid choice.Try again.");
 
 }
 }while(1);
 return 0;
 
}
void get_data(struct student s[])
{
int i;
 printf("\n Enter %d students Data ",n);
 for(i=0; i<n; i++)
 {
 printf("\n Enter student %d data",i+1);
 printf("\n Enter Roll no : ");
 scanf("%d",&s[i].roll_no);
 printf(" Enter Name : ");
 scanf("%s",&s[i].name);
 printf(" Enter percentage : ");
 scanf("%d",&s[i].percentage);
 }
 
}
void putdata(struct student s[])
{
 int i;
 printf("\n\n ** Student Data **");
 printf("\n Roll No\t Name\t Percentage");
 for(i=0; i<n; i++)
 {
 printf("\n %d\t%s\t%d",s[i].roll_no, s[i].name, s[i].percentage);
 
 }
}
void sort(struct student s[])
{
 int temp1, temp2[50], i, j;
 int temp3;
 for(i=1 ;i<n ;i++)
 {
 for(j=0; j<n-i; j++)
 {
 if( s[j].percentage < s[j+1].percentage)
 {
 temp1 = s[j].roll_no;
 s[j].roll_no = s[j+1].roll_no;
 s[j+1].roll_no = temp1;
 temp3 = s[j].percentage;
 s[j].percentage = s[j+1].percentage;
 s[j+1].percentage = temp3;
 strcpy(temp2, s[j].name);
 strcpy(s[j].name, s[j+1].name);
 strcpy(s[j+1].name, temp2);
 }
 }
 }
}
void search(struct student s[])
{
int i, rn, flag = 0;
 printf("\n Enter Roll No you want to search: ");
 scanf("%d",&rn);
 for(i=0; i<n; i++)
 {
 if(rn == s[i].roll_no)
 {
 flag = 1;
 break;
 }
 }
 if( flag ==1)
 {
 printf("\n Roll No\t Name\t Percentage");
 printf("\n %d\t%s\t%d",s[i].roll_no, s[i].name, s[i].percentage);
 }
 else
 {
 printf("\n Data not found.");
 }
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#define PI 3.14159265
int clock1(void);
void showNote(int mm);
int getDayNumber(int day,int mon,int year);
char *getDay(int dd,int mm,int yy);
void increase_month(int *mm,  int *yy);
void SetColor(int ForgC);
void ClearConsoleToColors(int ForgC, int BackC);
void print_date(int mm, int yy);
int getDayNumber(int day,int mon,int year);
int checkNote(int dd, int mm);
void SetColorAndBackground(int ForgC, int BackC);
void decrease_month(int *mm,  int *yy);
void printMonth(int mon,int year,int x,int y);
int getNumberOfDays(int month,int year);
int check_leapYear(int year);
void gotoxy (int x, int y);
char *getName(int day);
void AddNote();
int cal(void);
int calc(void);
int clock2();
int clock3();
float sine(float x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x,float y);

struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

struct Remainder{
    int dd;
    int mm;
    char note[50];
};
struct Remainder R;

int main()
{system("cls");;
ClearConsoleToColors(14,4);
SetConsoleTitle("C Project - Section K");
int ch1;int cho;
COORD xy = {0, 0};

printf("Enter your choice -  1.Scientific Calculator, 2.Calendar, 3.Clock\n\n");
scanf("%d",&ch1);
if(ch1==1)
{calc();
}
else if(ch1==2)
{
cal();
}
else
{
printf("Press 1 to get the Time, 2 for Timer, 3 for Time in different time zones\n\n");
scanf("%d",&cho);
if(cho==1)
clock1();
else if(cho==2)
clock2();
else
clock3();
}
return(0);
}

int calc(void)
{ClearConsoleToColors(5,14);
int choice, i, a, b;
float x, y, result;
system("cls");;

printf("\nSelect your operation (0 to exit):\n");
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
printf("12. 10 ^ X\n13. X!\n14. Percentage\n15. log10(x)\n16. Modulus\n");
printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
printf("21. Cot(X)\n22. Sec(X)\n\n");
printf("Choice: ");
scanf("%d", &choice);
switch(choice) {
case 0:
break;
case 1:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x + y;
printf("\nResult: %f", result);
break;
case 2:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x - y;
printf("\nResult: %f", result);
break;
case 3:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x * y;
printf("\nResult: %f", result);
break;
case 4:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x / y;
printf("\nResult: %f", result);
break;
case 5:
printf("Enter X: ");
scanf("%f", &x);
result = sqrt(x);
printf("\nResult: %f", result);
break;
case 6:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, y);
printf("\nResult: %f", result);
break;
case 7:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 2);
printf("\nResult: %f", result);
break;
case 8:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 3);
printf("\nResult: %f", result);
break;
case 9:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, -1);
printf("\nResult: %f", result);
break;
case 10:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
case 11:
printf("Enter X: ");
scanf("%f", &x);
y = 3;
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
case 12:
printf("Enter X: ");
scanf("%f", &x);
result = pow(10, x);
printf("\nResult: %f", result);
break;
case 13:
printf("Enter X: ");
scanf("%f", &x);
result = 1;
for(i = 1; i <= x; i++) {
result = result * i;
}
printf("\nResult: %.f", result);
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = (x * y) / 100;
printf("\nResult: %.2f", result);
break;
case 15:
printf("Enter X: ");
scanf("%f", &x);
result = log10(x);
printf("\nResult: %.2f", result);
break;
case 16:
printf("Enter X: ");
scanf("%d", &a);
printf("\nEnter Y: ");
scanf("%d", &b);
result = a % b;
printf("\nResult: %f", result);
break;
case 17:
printf("Enter X: ");
scanf("%f", &x);
result = sin(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 18:
printf("Enter X: ");
scanf("%f", &x);
result = cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 19:
printf("Enter X: ");
scanf("%f", &x);
result = tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 20:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f", result);
break;
case 21:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 22:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
default:
printf("\nInvalid Choice!");
}
int c;
printf("\nDo you want to continue?(Press -1 to stop\n\n");
scanf("%d",&c);int choice1;int temp;
while(c!=-1)
{
    printf("Enter your choice\n\n");
    scanf("%d",&choice1);
    if(choice1==1||choice1==2||choice1==3||choice1==4||choice1==6||choice1==10||choice1==14)
    {
        
        printf("Enter the second number\n");
        scanf("%f",&y);
        switch(choice1)
        {
            case 1:
            result = result+ y;
            printf("\nResult: %f", result);
            break;
            case 2:
            result = result - y;
            printf("\nResult: %f", result);
            break;
            case 3:
            result = result * y;
            printf("\nResult: %f", result);
            break;
            case 4:
            result = result/ y;
            printf("\nResult: %f", result);
            break;
            case 6:
            result = pow(result, y);
            printf("\nResult: %f", result);
            break;
            case 10:
            result = pow(result, (1/y));
            printf("\nResult: %f", result);
            break;
            case 14:
            result = (result * y) / 100;
            printf("\nResult: %.2f", result);
            default:
            printf("\nInvalid Choice!");

        }

    }
    else
    {

      switch(choice1)
      {
            case 5:
            result = sqrt(result);
            printf("\nResult: %f", result);
            break;
            case 7:
            result = pow(result, 2);
            printf("\nResult: %f", result);
            break;
            case 8:
            result = pow(result, 3);
            printf("\nResult: %f", result);
            break;
            case 9:
            result = pow(result, -1);
            printf("\nResult: %f", result);
            break;
            case 11:
            result = pow(result, (1/y));
            printf("\nResult: %f", result);
            break;
            case 12:
            result = pow(10, result);
            printf("\nResult: %f", result);
            break;
            case 13:
           
            temp=result;
            result = 1;
            for(i = 1; i <= temp; i++)
            {
            result = result * i;
            }
            printf("\nResult: %.f", result);
            break;
            case 15:
            result = log10(result);
            printf("\nResult: %.2f", result);
            break;
            case 17:
            result = sin(result * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
            case 18:
            result = cos(result * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
            case 19:
            result = tan(result * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
            case 20:
            result = 1 / (sin(result * 3.14159 / 180));
            printf("\nResult: %.2f", result);
            break;
            case 21:
            result = 1 / tan(result * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
            case 22:
            result = 1 / cos(result * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
            default:
            printf("\nInvalid Choice!");
      }
    }
    printf("\ndo you want to continue(Press -1 to stop)\n\n");
    scanf("%d",&c);
}

return 0;
}



int clock1() 
{system("cls");
ClearConsoleToColors(0,3); 

    time_t s, val = 1; 
    struct tm* current_time; 
  
     
    s = time(NULL);  
    current_time = localtime(&s); 
  
int x;
if((current_time->tm_hour)>12)
{ x=(current_time->tm_hour);
x=x-12;}
else { x=current_time->tm_hour;}
    printf("\n\t\t\t\t%02d:%02d:%02d\n", 
           x,
           current_time->tm_min, 
           current_time->tm_sec); 
  
    return 0; 
} 

 
int clock2()
{system("cls");;
ClearConsoleToColors(14,3);
int i;
	 	 	 
	 int x_seconds=0;
	int x_milliseconds=0;
	 int count_down_time_in_secs=0,time_left=0;

	clock_t x_startTime,x_countTime;
	printf("Enter how many seconds timer is to be set for\n");
	scanf("%d",&count_down_time_in_secs);

 
    x_startTime=clock();  
    time_left=count_down_time_in_secs; 
	while (time_left>0) 
	{
		x_countTime=clock();
		x_milliseconds=x_countTime-x_startTime;
		x_seconds=(x_milliseconds/(CLOCKS_PER_SEC));		
	 
		time_left=count_down_time_in_secs-x_seconds; 	

		printf("\n\t\t\t\t\%d",time_left);
	}


	printf("\n\n\nTime's out!!!\n\n\n");



return 0;
}

	int clock3()
       {system("cls");;
	ClearConsoleToColors(15,3);
                time_t raw_time;
                struct tm *ptr_ts;

                time (&raw_time);
                ptr_ts = gmtime (&raw_time);
		printf ("Time Argentina: %2d:%02d\n\n",
                     ptr_ts->tm_hour-3, ptr_ts->tm_min);
                printf ("Time Los Angeles: %2d:%02d\n\n",
                     ptr_ts->tm_hour-7, ptr_ts->tm_min);
                printf ("Time Amsterdam: %2d:%02d\n\n",
                     ptr_ts->tm_hour+2, ptr_ts->tm_min);
                printf ("Time France: %2d:%02d\n\n",
                     ptr_ts->tm_hour-10, ptr_ts->tm_min);
                printf ("Time Canada: %2d:%02d\n\n",
                     ptr_ts->tm_hour-4, ptr_ts->tm_min);
                printf ("Time Italy: %2d:%02d\n\n",
                     ptr_ts->tm_hour+2, ptr_ts->tm_min);
                printf ("Time California: %2d:%02d\n\n",
                     ptr_ts->tm_hour-7, ptr_ts->tm_min);
                printf ("Time Brazil: %2d:%02d\n\n",
                     ptr_ts->tm_hour-3, ptr_ts->tm_min);
                printf ("Time Denmark: %2d:%02d\n\n",
                     ptr_ts->tm_hour+2, ptr_ts->tm_min);
                printf ("Time Italy: %2d:%02d\n\n",
                     ptr_ts->tm_hour+2, ptr_ts->tm_min);
                printf ("Time Australia: %2d:%02d\n\n",
                     ptr_ts->tm_hour+10, ptr_ts->tm_min);
                printf ("Time South Africa: %2d:%02d\n\n",
                     ptr_ts->tm_hour+2, ptr_ts->tm_min);
                printf ("Time Switzerland: %2d:%02d\n\n",
                     ptr_ts->tm_hour+2, ptr_ts->tm_min);
                printf ("Time India: %2d:%02d\n\n",
                     ptr_ts->tm_hour+5, ptr_ts->tm_min+30);
		return 0;
         }





void gotoxy(int x, int y)
{
COORD xy = {0, 0};
        xy.X = x; xy.Y = y; 
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

void SetColor(int ForgC)
{
     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void ClearColor(){
    SetColor(15);
}

void ClearConsoleToColors(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     
     COORD coord = {0, 0};
     DWORD count;

     CONSOLE_SCREEN_BUFFER_INFO csbi;
     SetConsoleTextAttribute(hStdOut, wColor);
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
          SetConsoleCursorPosition(hStdOut, coord);
     }
     return;
}

void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

int check_leapYear(int year){
    if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0))
       return 1;
    return 0;
}

void increase_month(int *mm,  int *yy){
    ++*mm;
    if(*mm > 12){
        ++*yy;
        *mm = *mm - 12;
    }
}

void decrease_month(int *mm,  int *yy){ 
    --*mm;
    if(*mm < 1){
        --*yy;
        if(*yy<1600){
            printf("No record available");
            return;
        }
        *mm = *mm + 12;
    }
}


int getNumberOfDays(int month,int year){ 
   switch(month){                         
      case 1 : return(31);
      case 2 : if(check_leapYear(year)==1)
		 return(29);
	       else
		 return(28);
      case 3 : return(31);
      case 4 : return(30);
      case 5 : return(31);
      case 6 : return(30);
      case 7 : return(31);
      case 8 : return(31);
      case 9 : return(30);
      case 10: return(31);
      case 11: return(30);
      case 12: return(31);
      default: return(-1);
   }
}

char *getName(int day){ 
   switch(day){
      case 0 :return("Sunday");
      case 1 :return("Monday");
      case 2 :return("Tuesday");
      case 3 :return("Wednesday");
      case 4 :return("Thursday");
      case 5 :return("Friday");
      case 6 :return("Saturday");
      default:return("Error");
   }
}

void print_date(int mm, int yy){ 
    printf("---------------------------\n");
    gotoxy(25,6);
    switch(mm){
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    printf(" , %d", yy);
    gotoxy(20,7);
    printf("---------------------------");
}
int getDayNumber(int day,int mon,int year){ //retuns the day number
    int res = 0, t1, t2, y = year;
    year = year - 1600;
    while(year >= 100){
        res = res + 5;
        year = year - 100;
    }
    res = (res % 7);
    t1 = ((year - 1) / 4);
    t2 = (year-1)-t1;
    t1 = (t1*2)+t2;
    t1 = (t1%7);
    res = res + t1;
    res = res%7;
    t2 = 0;
    for(t1 = 1;t1 < mon; t1++){
        t2 += getNumberOfDays(t1,y);
    }
    t2 = t2 + day;
    t2 = t2 % 7;
    res = res + t2;
    res = res % 7;
    if(y > 2000)
        res = res + 1;
    res = res % 7;
    return res;
}

char *getDay(int dd,int mm,int yy){
    int day;
    if(!(mm>=1 && mm<=12)){
        return("Invalid month value");
    }
    if(!(dd>=1 && dd<=getNumberOfDays(mm,yy))){
        return("Invalid date");
    }
    if(yy>=1600){
        day = getDayNumber(dd,mm,yy);
        day = day%7;
        return(getName(day));
    }else{
        return("Please give year greater than 1600");
    }
}

int checkNote(int dd, int mm){
    FILE *fp;
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in Opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.dd == dd && R.mm == mm){
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

void printMonth(int mon,int year,int x,int y){ 
    int nod, day, cnt, d = 1, x1 = x, y1 = y, isNote = 0;
    if(!(mon>=1 && mon<=12)){
        printf("INVALID MONTH");
        getch();
        return;
    }
    if(!(year>=1600)){
        printf("INVALID YEAR");
        getch();
        return;
    }
    gotoxy(20,y);
    print_date(mon,year);
    y += 3;
    gotoxy(x,y);
    printf("S   M   T   W   T   F   S   ");
    y++;
    nod = getNumberOfDays(mon,year);
    day = getDayNumber(d,mon,year);
    switch(day){ 
        case 0 :
            x=x;
            cnt=1;
            break;
        case 1 :
            x=x+4;
            cnt=2;
            break;
        case 2 :
            x=x+8;
            cnt=3;
            break;
        case 3 :
            x=x+12;
            cnt=4;
            break;
        case 4 :
            x=x+16;
            cnt=5;
            break;
        case 5 :
            x=x+20;
            cnt=6;
            break;
        case 6 :
            x=x+24;
            cnt=7;
            break;
        default :
            printf("INVALID DATA!");
            return;
    }
    gotoxy(x,y);
    if(cnt == 1){
        SetColor(12);
    }
    if(checkNote(d,mon)==1){
            SetColorAndBackground(15,12);
    }
    printf("%02d",d);
    SetColorAndBackground(15,1);
    for(d=2;d<=nod;d++){
        if(cnt%7==0){
            y++;
            cnt=0;
            x=x1-4;
        }
        x = x+4;
        cnt++;
        gotoxy(x,y);
        if(cnt==1){
            SetColor(12);
        }else{
            ClearColor();
        }
        if(checkNote(d,mon)==1){
            SetColorAndBackground(15,12);
        }
        printf("%02d",d);
        SetColorAndBackground(15,1);
    }
    gotoxy(8, y+2);
    SetColor(14);
    printf("Press 'n' for Next month, Press 'p' for Previous month and 'q' to Quit");
    gotoxy(8,y+3);
    printf("Red Background indicates the NOTE, Press 's' to see note: ");
    ClearColor();
}

void AddNote(){
    FILE *fp;
    fp = fopen("note.dat","ab+");
    system("cls");
    gotoxy(5,7);
    printf("Enter the date(DD/MM): ");
    scanf("%d%d",&R.dd, &R.mm);
    gotoxy(5,8);
    printf("Enter the Note(50 character max): ");
    fflush(stdin);
    scanf("%[^\n]",R.note);
    if(fwrite(&R,sizeof(R),1,fp)){
        gotoxy(5,12);
        puts("Note is saved sucessfully");
        fclose(fp);
    }else{
        gotoxy(5,12);
        SetColor(12);
        puts("\aFailed to save!!\a");
        ClearColor();
    }
    gotoxy(5,15);
    printf("Press any key............");
    getch();
    fclose(fp);
}

void showNote(int mm){
    FILE *fp;
    int i = 0, isFound = 0;
    system("cls");
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.mm == mm){
            gotoxy(10,5+i);
            printf("Note %d Day = %d: %s", i+1, R.dd,  R.note);
            isFound = 1;
            i++;
        }
    }
    if(isFound == 0){
        gotoxy(10,5);
        printf("This Month contains no note");
    }
    gotoxy(10,7+i);
    printf("Press any key to back.......");
    getch();

}

int cal(){
    ClearConsoleToColors(15, 1);
    int choice;
    char ch = 'a';
    while(1){
        system("cls");
        printf("1. Find Out the Day\n");
        printf("2. Print all the day of month\n");
        printf("3. Add Note\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        system("cls");
        switch(choice){
            case 1:
                printf("Enter date (DD MM YYYY) : ");
                scanf("%d %d %d",&date.dd,&date.mm,&date.yy);
                printf("Day is : %s",getDay(date.dd,date.mm,date.yy));
                printf("\nPress any key to continue......");
                getch();
                break;
            case 2 :
                printf("Enter month and year (MM YYYY) : ");
                scanf("%d %d",&date.mm,&date.yy);
                system("cls");
                while(ch!='q'){
                    printMonth(date.mm,date.yy,20,5);
                    ch = getch();
                    if(ch == 'n'){
                        increase_month(&date.mm,&date.yy);
                        system("cls");
                        printMonth(date.mm,date.yy,20,5);
                    }else if(ch == 'p'){
                        decrease_month(&date.mm,&date.yy);
                        system("cls");
                        printMonth(date.mm,date.yy,20,5);
                    }else if(ch == 's'){
                        showNote(date.mm);
                        system("cls");
                    }
                }
                break;
            case 3:
                AddNote();
                break;
            case 4 :
                exit(0);
        }
    }
    return 0;
}


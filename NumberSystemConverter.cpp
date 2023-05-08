#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>

using namespace std;

void gotoxy (int x, int y)
{HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X=x;
dwCursorPosition.Y=y;
hConsoleOutput=GetStdHandle (STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}


int main()
{
	there:
	int base;
	int x, quo, rem, ctr = 0, arr[100], y, row = 5, row2 = 23, row3, initial;
	int whole, a,b;
	double decimal, pro, init, c;
	char ans;
	system("color 0A");
	
	do{
		cout<<"Whole number [1] Fraction [2]"<<endl;
		cin>>a;	
	}while(a < 0 || a > 2);
	
	
	cout<<endl;
	if (a == 1){
		do{
			cout<<"Decimal to ???"<<endl;
			cout<<"Binary [1] Octal [2] Hexadecimal [3] Any Base [4]"<<endl;
			cin>>b;
			switch(b){
				case 1:
					base = 2;
					system("CLS");
					goto wbinary;
					break;
				case 2:
					base = 8;
					system("CLS");
					goto woctal;
					break;
				case 3:
					base = 16;
					system("CLS");
					goto whexa;
					break;
				case 4:
					system("CLS");
					goto wanybase;
					break;
			}
		}while(b < 0 || b > 4);
		
		
	}
	else if (a == 2){
		
		do{
			cout<<"Decimal to ???"<<endl;
			cout<<"Binary [1] Octal [2] Hexadecimal [3] Any Base [4]"<<endl;
			cin>>b;
			switch(b){
				case 1:
					base = 2;
					system("CLS");
					goto fbinary;
					break;
				case 2:
					base = 8;
					system("CLS");
					goto foctal;
					break;
				case 3:
					base = 16;
					system("CLS");
					goto fhexa;
					break;
				case 4:
					system("CLS");
					goto fanybase;
					break;
			}	
		}while (b < 0 || b > 4);
		
	}

	
	wbinary:
	gotoxy(20,2);printf("Decimal to Binary Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Quotient");
	gotoxy(52,4);printf("Remainder");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>x;
	gotoxy(0,5); cout<<"                                           ";
	initial = x;
	while (x != 0){
		quo = x / base;
		rem = x % base;	
		
		arr[ctr] = rem;
		ctr += 1;
		gotoxy(7,row);  cout<<x;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<quo;
		gotoxy(52,row); cout<<rem;
		x = quo;
		row += 1;
		
	}
	
	
	
	row2 = row + 2;
	row3 = row + 3;
	y = ctr -1;
	gotoxy(7, row2);
	cout<<"Input Number: "<<initial;
	gotoxy(7, row3);
	cout<<"Binary: ";
	gotoxy(15,row3);
	for (int i = y; i >= 0; i--){
		cout<<arr[i];
	}
	
	cout<<endl;

	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	
	
	woctal:
	gotoxy(20,2);printf("Decimal to Octal Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Quotient");
	gotoxy(52,4);printf("Remainder");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>x;
	gotoxy(0,5); cout<<"                                           ";
	initial = x;
	while (x != 0){
		quo = x / base;
		rem = x % base;	
		
		arr[ctr] = rem;
		ctr += 1;
		gotoxy(7,row);  cout<<x;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<quo;
		gotoxy(52,row); cout<<rem;
		x = quo;
		row += 1;
		
	}
	
	
	
	row2 = row + 2;
	row3 = row + 3;
	y = ctr -1;
	gotoxy(7, row2);
	cout<<"Input Number: "<<initial;
	gotoxy(7, row3);
	cout<<"Octal: ";
	gotoxy(15,row3);
	for (int i = y; i >= 0; i--){
		cout<<arr[i];
	}
	
	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	whexa:
	gotoxy(20,2);printf("Decimal to Hexadecimal Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Quotient");
	gotoxy(52,4);printf("Remainder");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>x;
	gotoxy(0,5); cout<<"                                           ";
	initial = x;
	while (x != 0){
		quo = x / base;
		rem = x % base;	
		
		
		arr[ctr] = rem;	
		
		
		
		ctr += 1;
		gotoxy(7,row);  cout<<x;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<quo;
		gotoxy(52,row); cout<<rem;
		x = quo;
		row += 1;
		
	}
	
	
	
	row2 = row + 2;
	row3 = row + 3;
	y = ctr -1;
	gotoxy(7, row2);
	cout<<"Input Number: "<<initial;
	gotoxy(7, row3);
	cout<<"Hexadecimal: ";
	gotoxy(20,row3);
	for (int i = y; i >= 0; i--){
		if (arr[i]>=10){
			switch(arr[i]){
				case 10:
					cout<<"A";
					break;
				case 11:
					cout<<"B";
					break;
				case 12:
					cout<<"C";
					break;
				case 13:
					cout<<"D";
					break;
				case 14:
					cout<<"E";
					break;
				case 15:
					cout<<"F";
					break;
				
			}
		}
		else {
			cout<<arr[i];
		}
	}

	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	wanybase:
	gotoxy(20,2);printf("Decimal to Any Base Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Quotient");
	gotoxy(52,4);printf("Remainder");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>x;
	here:
	gotoxy(0,5);printf("                                           ");
	gotoxy(0,5);
	cout<<"Input Base: ";
	cin>>base;
	if (base == 2 || base == 8 || base == 10 || base == 16 || base == 1 || base == 0){
		system("color 04");
		sleep(1);
		system("color 0A");
		goto here;
	}
	gotoxy(0,5); cout<<"                                           ";
	initial = x;
	while (x != 0){
		quo = x / base;
		rem = x % base;	
		
		arr[ctr] = rem;
		ctr += 1;
		gotoxy(7,row);  cout<<x;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<quo;
		gotoxy(52,row); cout<<rem;
		x = quo;
		row += 1;
		
	}
	
	
	
	row2 = row + 2;
	row3 = row + 3;
	y = ctr -1;
	gotoxy(7, row2);
	cout<<"Input Number: "<<initial;
	gotoxy(7, row3);
	cout<<"Conversion: ";
	gotoxy(20,row3);
	for (int i = y; i >= 0; i--){
		cout<<arr[i];
	}
	
	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	fbinary:
	gotoxy(20,2);printf("Fractions to Binary Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Product");
	gotoxy(52,4);printf("Integer");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>c;
	gotoxy(0,5); cout<<"                                           ";
	init = c;
	whole = c;
	decimal = c - whole;
	while (ctr < 6){
		pro = c * base;
		whole = pro;
		decimal = pro - whole;
		
		
		arr[ctr] = whole;
		ctr += 1;
		gotoxy(7,row);  cout<<c;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<pro;
		gotoxy(52,row); cout<<whole;
		c = decimal;
		if (decimal == 0){
			goto here1;
		}
		row += 1;
		
	}
	
	
	here1:
	row2 = row + 2;
	row3 = row + 3;
	
	gotoxy(7, row2);
	cout<<"Input Number: "<<init;
	gotoxy(7, row3);
	cout<<"Binary: ";
	gotoxy(15,row3);cout<<".";
	gotoxy(16,row3);
	for (int i = 0; i < ctr; i++){
		
		cout<<arr[i];
	}
	
	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	foctal:
	gotoxy(20,2);printf("Fractions to Octal Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Product");
	gotoxy(52,4);printf("Integer");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>c;
	gotoxy(0,5); cout<<"                                           ";
	init = c;
	whole = c;
	decimal = c - whole;
	while (ctr < 6){
		pro = c * base;
		whole = pro;
		decimal = pro - whole;
		
		
		arr[ctr] = whole;
		ctr += 1;
		gotoxy(7,row);  cout<<c;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<pro;
		gotoxy(52,row); cout<<whole;
		c = decimal;
		if (decimal == 0){
			goto here2;
		}
		row += 1;
		
	}
	
	
	here2:
	row2 = row + 2;
	row3 = row + 3;
	
	gotoxy(7, row2);
	cout<<"Input Number: "<<init;
	gotoxy(7, row3);
	cout<<"Octal: ";
	gotoxy(14,row3);cout<<".";
	gotoxy(15,row3);
	for (int i = 0; i < ctr; i++){
		
		cout<<arr[i];
	}
	
	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	fhexa:
	gotoxy(20,2);printf("Fractions to Hexadecimal Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Product");
	gotoxy(52,4);printf("Integer");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>c;
	gotoxy(0,5); cout<<"                                           ";
	init = c;
	whole = c;
	decimal = c - whole;
	while (ctr < 6){
		pro = c * base;
		whole = pro;
		decimal = pro - whole;
		
		
		arr[ctr] = whole;
		ctr += 1;
		gotoxy(7,row);  cout<<c;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<pro;
		gotoxy(52,row); cout<<whole;
		c = decimal;
		if (decimal == 0){
			goto here3;
		}
		row += 1;
		
	}
	
	
	here3:
	row2 = row + 2;
	row3 = row + 3;
	
	gotoxy(7, row2);
	cout<<"Input Number: "<<init;
	gotoxy(7, row3);
	cout<<"Hexadecimal: ";
	gotoxy(20,row3);cout<<".";
	gotoxy(21,row3);
	for (int i = 0; i < ctr; i++){
		if (arr[i]>=10){
			switch(arr[i]){
				case 10:
					cout<<"A";
					break;
				case 11:
					cout<<"B";
					break;
				case 12:
					cout<<"C";
					break;
				case 13:
					cout<<"D";
					break;
				case 14:
					cout<<"E";
					break;
				case 15:
					cout<<"F";
					break;
				
			}
		}
		else {
			cout<<arr[i];
		}
	}
	
	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	fanybase:
	gotoxy(20,2);printf("Fractions to Any Base Converter");
	gotoxy(7,4);printf("Number");
	gotoxy(22,4);printf("Base");
	gotoxy(35,4);printf("Product");
	gotoxy(52,4);printf("Integer");
	
	gotoxy(0,5);
	cout<<"Input: ";
	cin>>c;
	here5:
	gotoxy(0,5);cout<<"                                                ";
	gotoxy(0,5); cout<<"Input Base: ";
	cin>>base;
	if (base == 2 || base == 8 || base == 10 || base == 16 || base == 1 || base == 0){
		system("color 04");
		sleep(1);
		system("color 0A");
		goto here5;
	}
	gotoxy(0,5); cout<<"                                           ";
	init = c;
	whole = c;
	decimal = c - whole;
	while (ctr < 6){
		pro = c * base;
		whole = pro;
		decimal = pro - whole;
		
		
		arr[ctr] = whole;
		ctr += 1;
		gotoxy(7,row);  cout<<c;
		gotoxy(22,row); cout<<base;
		gotoxy(35,row); cout<<pro;
		gotoxy(52,row); cout<<whole;
		c = decimal;
		if (decimal == 0){
			goto here4;
		}
		row += 1;
		
	}
	
	
	here4:
	row2 = row + 2;
	row3 = row + 3;
	
	gotoxy(7, row2);
	cout<<"Input Number: "<<init;
	gotoxy(7, row3);
	cout<<"Conversion: ";
	gotoxy(19,row3);cout<<".";
	gotoxy(20,row3);
	for (int i = 0; i < ctr; i++){
		
		cout<<arr[i];
	}
	
	cout<<endl;
	do{
		gotoxy(7, row3+3);
		cout<<"Do you want to continue? [Y/N]";
		ans = toupper(getch());
		if (ans == 'Y'){
			system("CLS");
			goto there;
		}
		else if (ans == 'N'){
			exit (0);
		}
	}while (!(ans == 'Y'|| ans == 'N'));
	
	
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    cout<<"problem 1\n";
    int Num;
    cout<<"Enter a number: "<<endl;
    cin>>Num;
    if (Num>=0){
        cout<<"Positive"<<endl;
    } else{
        cout<<"Negative"<<endl;
    }


    cout<<"problem 2\n";
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if (num>=0 && num%2==0){
        cout<<"The number is positive and even"<<endl;
    } else if (num>=0 && num%2==01){
        cout << "The number is positive and odd" << endl;
    } else if (num<0 && num%2==0){
        cout << "The number is negative and even" << endl;
    } else{
        cout << "The number is negative and odd" << endl;
    }


    cout<<"problem 3\n";
    int num1, num2, num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1>num3){
        cout<<num1<<" is the largest"<<endl;
    } else if (num2>num1 && num2>num3) {
        cout<<num2<<" is the largest"<<endl;
    } else if (num3>num1 && num3>num2){
        cout<<num3<<" is the largest"<<endl;
    }


    cout<<"problem 4\n:";
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    if (a%b==0){
        cout<<a<<" is divisible by "<<b<<endl;
    } else{
        cout<<a<<" is not divisible by "<<b<<endl;
    }

    cout<<"problem 5\n";
    int Year;
    cout<<"Enter the year: "<<endl;
    cin>>Year;
    if (Year%100==0 && Year%400==0){
        cout<<Year<<" is a leap year"<<endl;
    } else{
        cout<<Year<<" is not a leap year"<<endl;
    }


    cout<<"problem 6\n";
    float A, B, C, D, x1, x2;
    cout<<"Enter the coefficients of a, b, c: "<<endl;
    cin>>A>>B>>C;
    D=(B*B)-(4*A*C);
    x1=((-B)-sqrt(D))/(2*A);
    x2=((-B)+sqrt(D))/(2*A);
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;

    cout<<"problem 7\n";
    float A1, A2, A3, Total;
    cout<<"Enter three angles of triangle: "<<endl;
    cin>>A1>>A2>>A3;
    Total=A1+A2+A3;
    if (Total==180){
        cout<<"The triangle is valid"<<endl;
    } else{
        cout<<"The triangle is not valid"<<endl;
    }

    cout<<"problem 8\n";
    char character;
    cout << "Enter a character: ";
    cin >> character;
    if (character >= 'a' && character <= 'z') {
        cout << "Lowercase alphabet" << endl;
    } else if (character >= 'A' && character <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    } else {
        cout << "It is not an alphabet" << endl;
    }

    cout<<"problem 9\n";
    float speed;
    cout<<"Enter the speed"<<endl;
    cin>>speed;
    if (20>=speed){
        cout<<"too slow"<<endl;
    } else if(speed>=80){
        cout<<"too fast"<<endl;
    } else{
        cout<<"just right"<<endl;
    }

    cout<<"problem 10\n";
    float X, Y, Distance;
    cout<<"Enter x and y coordinates of the point: "<<endl;
    cin>>X>>Y;
    Distance = sqrt((0-X)*(0-X)+(0-Y)*(0-Y));
    if (Distance>10){
        cout<<"Point ("<<X<<","<<Y<<") is not in circle"<<endl;
    } else if(Distance<10){
        cout<<"Point ("<<X<<","<<Y<<") is in circle"<<endl;
    }


    cout<<"problem 11\n";
    float W1, P1, W2, P2, Price1, Price2;
    cout<<"Enter weight and price for package 1: "<<endl;
    cin>>W1>>P1;
    cout<<"Enter weight and price for package 2: "<<endl;
    cin>>W2>>P2;
    Price1=W1/P1;
    Price2=W2/P2;
    if (Price1>Price2){
        cout<<"Package 1 has a better price"<<endl;
    } else if(Price2>Price1){
        cout<<"Package 2 has a better price"<<endl;
    } else{
        cout<<"Two packages have the same price."<<endl;
    }

    cout<<"problem 12\n";
    int NUMBER, FIRST, LAST;
    cout<<"Enter three-digit integer: "<<endl;
    cin>>NUMBER;
    FIRST=NUMBER/100;
    LAST=NUMBER%10;
    if (NUMBER<100 | NUMBER>999){
        cout<<"Number is not three digit"<<endl;
    } else{
        if (FIRST==LAST){
            cout<<NUMBER<<" is a palindrome"<<endl;
        } else{
            cout<<NUMBER<<" is not a palindrome"<<endl;
        }
    }

    cout<<"problem 13\n";
    char command;
    cout<<"Enter a command: "<<endl;
    cin>>command;
    if (command=='g'){
        cout<<"Go!"<<endl;
    } else if (command=='y'){
        cout<<"Get ready!"<<endl;
    } else if (command=='r'){
        cout<<"Stop"<<endl;
    }

    cout<<"problem 14\n";
    int weeknum;
    string weekday;
    string week[7] = {"Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin>>weeknum;
    if(weeknum>7 | weeknum<=0 ){
        cout<<"There is no such a weekday"<<endl;
    } else{
     cout<<week[weeknum-1]<<endl;
    }


    cout<<"problem 15\n";
    int Grade;
    char Scale;
    cout<<"Enter the student's grade: "<<endl;
    cin>>Grade;
    if (Grade>=0 && Grade<60){
        Scale='F';
    } else if (Grade>=60 && Grade<70){
        Scale='D';
    } else if (Grade>=70 && Grade<80){
        Scale='C';
    } else if (Grade>=80 && Grade<90){
        Scale='B';
    } else if (Grade>=90 && Grade<=100){
        Scale='A';
    }
    cout<<Scale<<endl;

    cout<<"problem 16\n";
    int NUM;
    cout<<"Enter a number: "<<endl;
    cin>>NUM;

    cout<<"problem 16\n"<<endl;
    switch (NUM>0){
        case true:
            cout<<"Positive."<<endl;
            break;
        case false:
            switch (NUM<0){
                case true:
                    cout<<"Negative."<<endl;
                    break;
                case false:
                    cout<<"It is zero."<<endl;
                    break;
            }
            break;
    }

    cout<<"problem 17\n";
    char Lan;
    cout<<"Choose the language: u - Uzbek\ne - English\nr - Russian\ng - German\n"<<endl;
    cin>>Lan;

    switch(Lan){
        case 'u':
            cout<<"Salom"<<endl;
            break;
        case 'g':
            cout<<"Hallo"<<endl;
            break;
        case 'r':
            cout<<"Привет"<<endl;
            break;
        case 'e':
            cout<<"Hello"<<endl;
            break;
        default:
            cout<<"I do not know this language:("<<endl;
    }

    cout<<"problem 18\n";
    int weight, cost;
    cout<<"Enter the weight of the package: "<<endl;
    cin>>weight;
    if (0>=weight){
        cout<<"Invalid input."<<endl;
    } else if (weight<=1 && weight>0){
        cout<<"3500";
    } else if (weight<=3 && weight>1){
        cout<<"5500";
    } else if (weight<=10 && weight>3){
        cout<<"8500";
    } else if (weight<=20 && weight>10){
        cout<<"10500";
    } else{
        cout<<"The package cannot be shipped."<<endl;
    }

    int Weight, Cost;
    cout<<"Enter the weight of the package: "<<endl;
    cin>>Weight;

    switch (Weight<=0){
        case true:
            cout<<"Invalid input."<<endl;
            break;
        case false:
            switch (Weight<=1){
                case true:
                    cout<<"3500"<<endl;
                    break;
                case false:
                    switch (Weight<=3){
                        case true:
                            cout<<"5500"<<endl;
                            break;
                        case false:
                            switch (Weight<=10){
                                case true:
                                    cout<<"8500"<<endl;
                                    break;
                                case false:
                                    switch (Weight<=20){
                                        case true:
                                            cout<<"10500"<<endl;
                                            break;
                                        case false:
                                            cout<<"The package cannot be shipped."<<endl;
                                    }
                            }
                    }
            }
    }

    cout<<"problem 19\n";
    int digit;
    cout<<"Enter a digit: ";
    cin>>digit;

    switch (digit){
        case 0:
            cout<<"Zero";
            break;
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
        case 6:
            cout<<"Six";
            break;
        case 7:
            cout<<"Seven";
            break;
        case 8:
            cout<<"Eight";
            break;
        case 9:
            cout<<"Nine";
            break;
        default:
            cout<<"It is not a digit"<<endl;
            break;
    }

    cout<<"problem 20\n";
    int month;
    cout<<"Enter the months number: "<<endl;
    cin>>month;

    switch (month){
        case 1:
            cout<<"In January there is:\n– New Year, 1 January\n- Motherland Defeders’ day 14 January "<<endl;
            break;
        case 3:
            cout<<"In March there is:\n– International Women’s Day, 8 March\n– Navruz, 21 March"<<endl;
            break;
        case 5:
            cout<<"In May there is: \n- Day of Memory and appreciation, 9 May"<<endl;
            break;
        case 9:
            cout<<"In September there is: \n- Independence day, 1 September"<<endl;
            break;
        case 10:
            cout<<"In October there is: \n- Day of teachers and coaches, 1 October"<<endl;
            break;
        case 12:
            cout<<"In  December there is: \n- Day of constitution, 8 December"<<endl;
            break;
        default:
            cout<<"In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change"<<endl;
            break;
    }

    cout<<"problem 21\n";
    srand(time(0));
    int random=rand() ;
    bool even=(random%2==0);
    string guess;
    cout<<"Guess: Odd or even?"<<endl;
    cin>>guess;
    if (guess=="even" && even){
        cout<<"Your guess is correct"<<endl;
    }else if (guess=="odd" && !even){
        cout<<"Your guess is correct"<<endl;
    } else{
        cout<<"Your guess is incorrect! The number was "<<random<<endl;
    }

    cout<<"problem 22\n";
    srand(time(0));
    int CARDNUM=rand()%52+1;
    int rank=(CARDNUM-1)%13+1;
    int suit=(CARDNUM-1)/13;
    switch (rank) {
        case 1:
            cout<<"Ace";
            break;
        case 11:
            cout<<"Jack";
            break;
        case 12:
            cout<<"Queen";
            break;
        case 13:
            cout<<"King";
            break;
        default:
            cout<<rank;
            break;
    }

    cout<<" of ";

    switch (suit) {
        case 0:
            cout<<"Clubs";
            break;
        case 1:
            cout<<"Diamonds";
            break;
        case 2:
            cout<<"Hearts";
            break;
        case 3:
            cout<<"Spades";
            break;
    }

    return 0;
}


/*
#include<iostream>
using namespace std;
int main(){
	int a, b, c, avg;
	cout<< "Enter the numbers: ";
	cin>>a >> b>> c;
	avg= (a+b+c)/ 3;
	cout<< "The avg of 3 no is: "<< avg;
	return 0;
}

// check whether even or odd
#include<iostream>
using namespace std;
int main(){
	int N;
	cout<< "Enter the number: ";
	cin>> N;
	if( N% 2==0){
		cout<< "EVEN" ;
	}
	else{
		cout<< "ODD";	
	}
	return 0;
}

//largest of 3 numbers
#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<< "Enter the numbers: ";
	cin >> a >> b >> c;
	if( a>= b && a>=c){
		cout<< " A is the largest";
	}
	if( b>= a && b>=c){
		cout<< " B is the largest";
	}
	else{
		cout<< "C is largest";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main(){
	int a;
	cout<< "Enter the numbers: ";
	cin >> a ;
	if( a> 0 ){
		cout<< " A is positive, so ans is 1";
	}
	if( a <0){
		cout<< "-1";
	}
	if(a==0){
		cout<< "0";
	}
	return 0;
}

// VALID TRIANGLE
#include<iostream>
using namespace std;
int main(){
	int A,B,C;
	cout<< "Enter the sides of triangle: ";
	cin>> A >> B>> C;
	if( A+B> C || B+C>A || A+C>B){
		cout<< "YES";	
	}
	else{
		cout<<"NO";
	}
	return 0;
}

//Print N numbers
#include<iostream>
using namespace std;
int main(){
	int N;
	cout<< "Enter the value of N: ";
	cin >> N;
	for(int i=1; i<= N; i++) {
		cout<< i;
		}
	
	return 0;
}

//check prime
#include <iostream>
using namespace std;

int main()
{
    // variable definition and initialization    
    int n, i, c = 0;
    
    /* Get user input 
    
    cout << "Enter any number n: "; cin>>n; 
    
    logic
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << "n is a Prime number" << endl;
    }
    else
    {
         cout << "n is not a Prime number" << endl; 
    }
    return 0;    
}


// find product
#include<iostream>
using namespace std;
int main(){
	int n, fact= 1;
	cout<<"Enter the  value of n: ";
	cin>> n;
	for(int i=1; i<=n; i++){
		
			fact = fact*i;
		}
		cout<<" Factorial of the number is: ";
		cout<< fact<< endl;
	
	return 0;
}
//find factorial of number
#include<iostream>
using namespace std;
int main(){
	int n, fact= 1;
	cout<<"Enter the  value of n: ";
	cin>> n;
	for(int i=1; i<=n; i++){
		
			fact = fact*i;
		}
		cout<<" Factorial of the number is: ";
		cout<< fact<< endl;
	
	return 0;
}

//print even numbers
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the  value of n: ";
	cin>> n;
	for(int i=1; i<=n; i++){
		if(i %2==0){
			cout<<i << endl;
		}
		}
		
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int A,B,C;
	cout<< "Enter the sides of triangle: ";
	cin>> A >> B>> C;
	if(A==B && B==C && A==C){
		cout<< "EQUILATERAL, SO 1";	
	}
	else if(A==B || B==C || A==C){
		cout<<"ISOSCELES, SO 0";
	}
	else{
		cout<<" Scalene, so -1";
		
	}
	return 0;
}

//prime or not
#include<iostream>
using namespace std;
int main(){
	int n, i, flag=0;
	cout<<"Enter the value of n: ";
	cin>> n;
	for(i=2; i< n/2; i++){
		if(n%i==0){
			flag=1;
			break;
		}
}
	if(flag==0){
		cout<<"Prime";
	}	
	else{
			cout<<"Not primee";
		}
	
	return 0;
}

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,b,c;
    cout<<"Enter the value of a,b and c: ";
    cin>> a ;
    cin>>b;
    cin>>c;
    if(a==b && b==c && a==c){
        cout<<"Triangle is equilateral\n";
        cout<<"1";
    }
    if(a!= b && b!=c && a!=c){
        cout<<"Triangle is Scalene\n";
        cout<<"-1";
    }
    else{
        cout<<"Triangle is Isosceles\n";
        cout<<"0";
    }
    

    return 0;
}
//sum of evens
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n, sum=0;
    cout<<"Enter the number: ";
    cin>> n;
    for(int i=0; i<=n; i++){
        if(i%2==0){
            sum= sum+i;
        }
        else{
            sum= sum;
        }
    }
    cout<< "sum of evens is: "<< sum;

    return 0;
}
// Find GCD
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,b, gcd=1;
    cout<<" Enter value of a and b: ";
    cin>> a;
    cin>> b;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd= i;
        }
        
    }
    cout<< "GCD of a and b is: " << gcd;
    

    return 0;
}

//Member of Fibonacci
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int N;
    int a=0, b=1; 
    cout<<" Enter the number we want to check in sequence: ";
    cin>> N;
    if(a<N){
        int c= a+b;
        a=b;
        b=c;
    }
    else{
        if(a==N){
            cout<<" True";
        }
        else{
            cout<<" False";
        }
    }

    return 0;
}
// sequence of fibonacci
#include<iostream>
using namespace std;
int main(){
	int n, n1=0,n2=1, n3;
	cout<<"Enter the value of n: ";
	cin>> n;
	cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
	n3= n1+n2;
	for(int i=2; i<n; i++){
		n3= n1+n2;
		n1=n2;
		n2=n3;
	}
	return 0;
	
	
}

//Bigger of two number
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the numbbers: "<< endl;
	cin>> a >> b;
	if(a==b){
		cout<<"Both a and b are equal";
	}
	
	
	else{
		if(a>b){
		cout<<"A is bigger than B";
		}
		else{
			cout<<"B is bigger";
		}
	}
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	char ch;
	cout<<"Enter the character: ";
	cin>> ch;
	if(ch>=65 && ch<=90){
		cout<<"character is an uppercase alphabet "<<endl;
		cout<<"1";
	}
	else if(ch>=97 && ch<=122){
		cout<<"character is a lowercase alphabet"<< endl;
		cout<<"0";
	}
	else{
		cout<<"character is not an alphabet"<< endl;
		cout<<"-1";

	}
	return 0;
	
}
//print 1 if A-Z, 0 IF a-z, -1 if not alphabet
#include<iostream>
using namespace std;

int main() {
	char ch;
	//cout<<"Enter the character: ";
	cin>> ch;
	if(ch>='A' && ch<='Z'){
		//cout<<"character is an uppercase alphabet "<<endl;
		cout<<"1";
	}
	else if(ch>='a' && ch<='b'){
		//cout<<"character is a lowercase alphabet"<< endl;
		cout<<"0";
	}
	else{
		//cout<<"character is not an alphabet"<< endl;
		cout<<"-1";

	}
	return 0;
	
}
//using while loop to print number upto n
#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Enter the value of n"<< endl;
	cin>> n;
	while(i<n){
		cout<<i<<endl;
		i= i+1;
	}
	return 0;
		
}

//Prime or not ussing while loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: "<< endl;
	cin>> n;
	
	int i=2;
	bool divided = false;
	while(i<n){
		if(n%i==0){
			cout<<"Not Prime";
			divided = true;
		}
		i= i+1;
	}
	if(!divided){
		cout<<"Prime";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
    
	double S,E, W;
	cout<<"Enter values of S, E, and W in Fahernhiet: ";
	cin>> S>> E>> W;
	
    double F=S, C;
	while(F<= E){
    	C= ((F-32)*5)/9;
    	cout<< F << "\t\t"<< C;
    	F= F+W;
    	//cout<< "Temp in Fahernheit is: " , F, " Celcius is:  ", C;
	}
	//cout<< "Temp in Fahernheit is: " , F, " Celcius is:  ", C;
	return 0;
	
	
}

#include<iostream>
using namespace std;
double FtoC (double F){
	return(F-32)* 5/9;
}

int main(){
	double S,E,W;
	cin>> S>> E>> W;

	double F= E;
	while(F<= E){
		double C= FtoC(F);
		F= F+ W;
		cout<< F<<"\t\t"<< C<< endl;
		F += W;
	}

	return 0;

      
}
#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double startFahrenheit, endFahrenheit, stepSize;

    // Input values from the user
    //cout << "Enter the Start Fahrenheit Value (S): ";
    cin >> startFahrenheit;
    //cout << "Enter the End Fahrenheit Value (E): ";
    cin >> endFahrenheit;
    //cout << "Enter the Step Size (W): ";
    cin >> stepSize;

    // Print the table header
   // cout << "\nFahrenheit\tCelsius" << endl;

    // Convert and print Fahrenheit to Celsius table using while loop
    double fahrenheit = startFahrenheit;
    while (fahrenheit <= endFahrenheit) {
        double celsius = fahrenheitToCelsius(fahrenheit);
        cout << fahrenheit << "\t\t" << celsius << endl;
        fahrenheit += stepSize;
    }

    return 0;
}

//Remark student
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int marks;
    cout<<" Enter marks: ";
    cin>> marks;
    marks = 35;
    if(marks>= 75 && marks<=100){
        cout <<"Distinction";
        }
    else if(marks>= 50 && marks<=75){
        cout <<"Average";
        }
    else(marks>= 35 && marks<=50);{
        cout <<"Below Avrage";
        }
    

    return 0;
}

// sum of evens
#include<iostream>
using namespace std;


int main(){

       int n, sum=0;
	   cin>> n;
	   int i = 2;

	   while(i<=n){
		   
			sum= sum+i;
			i= i+2;
		   
		  
	   }
	   cout<< sum;
	   return 0;
  
}

// Online C++ compiler to run C++ program o
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int  basic_salary, allow;
    float hra, da, pf, total_salary;
    char ch;
    //cout<<"Enter basic Salary: "<< endl;
    cin>> basic_salary >>  ch;
    //cout<<"Enter the character: "<< endl;
    //cin>> ch;
    /*hra   = 20% of basic
    da    = 50% of basic
    allow = 1700 if grade = �A�
    allow = 1500 if grade = �B�
    allow = 1300 if grade = �C' or any other character
    pf    = 11% of basic.
    hra= 0.2*basic_salary;
    da= 0.5*basic_salary;
    pf= 0.11*basic_salary;
    if(ch=='A'){
        allow= 1700;
    }else if(ch=='B'){
        allow= 1500;
    }else if(ch=='C'){
        allow= 1300;
    }else{
        allow= 1300;
    }
    total_salary = basic_salary + hra + da + allow-pf;
    //cout<<" The total salary is: "<< total_salary<< endl;
    int ans = round(total_salary);
    cout<< ans<< endl;
    
    return 0;
}

//Factors
#include<iostream>
using namespace std;
int main(){
    int i, n;
    cin>> n;
    for(i = 2; i<n; i++){
        if(n%i==0){
            cout<< i<< "\t";
        }
        else{
            cout<< -1;
        }
    }
    return 0;
}

//Introduction to Patterns
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no of rows: ";
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<"*";
			j++;
			
		}
		
		cout<< endl;
		i++;
	}
	
	return 0;
}

//Square Pattern
//1
#include<iostream>
using namespace std;


int main(){

    int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n;
			j++;
		}
		cout<< endl;
		i++;
	}
	return 0;
}

//2
#include<iostream>
using namespace std;


int main(){

    int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<j;
			j++;
		}
		cout<< endl;
		i++;
	}
	return 0;
}
//3
#include<iostream>
using namespace std;


int main(){

    int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<i;
			j++;
		}
		cout<< endl;
		i++;
	}
	return 0;
}
//4
#include<iostream>
using namespace std;


int main(){

    int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1;
			j++;
		}
		cout<< endl;
		i++;
	}
	return 0;
}

//TRIANGULAR PATTERNS
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<j;
			j++;
		}
		cout<< endl;
		i++;
		
	}
	return 0;
	
}

//patern-2(
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int  i=1;
	int p=i;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<< p;
			p++;
			j++;
		}
		cout<< endl;
		i++;
		
	}
	return 0;
}

//pattern 3- observe difference between tis  and above  patter, minor difference but whole different pattern!
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int  i=1;
	
	while(i<=n){
		int p=i;
		int j=1;
		while(j<=i){
			cout<< p;
			p++;
			j++;
		}
		cout<< endl;
		i++;
		
	}
	return 0;
}
//pattern 3- reverse pattern
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i-j+1;
			j++;
		}
		cout<< endl;
		i++;
	}
	return 0;

}
//Character Pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i=1;
    while(i<=n ){
        int j=1;
        while(j<=n){
            char ch= 'A'+j-1;
            cout<<ch;
            j++;
        }
        cout<< endl;
        i++;
    }
    return 0;
}
//Pattern 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i=1;
    while(i<=n ){
        int j=1;
        char Sch = 'A'+i-1;      starting character
        while(j<=n){
            char ch= Sch +j-1;
            cout<<ch;
            j++;
        }
        cout<< endl;
        i++;
    }
    return 0;
}
//Alpha Pattern
#include<iostream>
using namespace std;
int main(){
    
   int n;
   cin>> n;
   int i=1;
   while(i<=n){
       int j=1;
       char ch= 'A'+i-1;
       while(j<=i){
           cout<<ch;
           j++;
       }
       cout<< endl;
       i++;
   }
   return 0;
}
//INTRESTING CHARACTERS ****IMPORTANT****
#include<iostream>
using namespace std;


int main(){
    
   int n;
   cin>> n;
   int i=0;
   while(i<n){
       int j=i;
       char Sch= 'A'+n-1;
       while(j>=0){
		   char ch= Sch-j;

           cout<<ch;
           j--;
       }
       cout<< endl;
       i++;
   }
   return 0;
}

//Reverse Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;  //here j represents spaces
        while(j<=n-i){
            cout<<' ';
            j+=1;
        }
        int stars=1;
        while(stars<=i){
            cout<<'*';
            stars+=1;
        }
        cout<< endl;
        i++;
    }
    

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<' ';
            j+=1;
        }
        int stars=1;
        while(stars<=i){
            cout<<stars;
            stars+=1;
        }
        cout<< endl;
        i++;
    }
    

    return 0;
}

//Mirror  pattern or inverted pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int stars=1;
        
        while(stars<=n-i+1){
            cout<<'*';
            stars+=1;
        }
        cout<< endl;
        i++;
    }
    

    return 0;
}

//ISOSCELES TRIANGLE PATTERN
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        
        while(j<=i){
            cout<<j;
            j+=1;
        }
        j=i-1;
        while(j>=1){
            cout<< j;
            j=j-1;
        }
        cout<< endl;
        i++;
    }
    

    return 0;
}
//Triangles of Number
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        int p=i;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        
        while(j<=i){
            cout<<p;
            p++;
            j+=1;
        }
        p -= 2; // Decrement p by 2 to get the correct descending numbers
        while (j > 2) {
            cout << p;
            p--;
            j--; // Decrement j
        }
        cout<< endl;
        i++;
    }
    

    return 0;
}
//Diamond of stars
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    int i = 1;
    while (i <= n) {
        int spaces = (n - i) / 2;
        int stars = i;
        
        int j = 0;
        while (j < spaces) {
            cout << " ";
            j++;
        }
        
        j = 0;
        while (j < stars) {
            cout << "*";
            j++;
        }
        
        cout << endl;
        i += 2;
    }

    i = n - 2;
    while (i >= 1) {
        int spaces = (n - i) / 2;
        int stars = i;
        
      
        int j = 0;
        while (j < spaces) {
            cout << " ";
            j++;
        }
        
        
        j = 0;
        while (j < stars) {
            cout << "*";
            j++;
        }
        
        cout << endl;
        i -= 2;
    }

    return 0;
}*
//BITWISE OPERATORS
#include<iostream>
using namespace std;
int main(){
	int ror= 15|30;  //result of or
	int rand= 15&30;  //result of and
	int rnot= ~15;   //result of not
	int rxor= 15^30;	//result of xor 
	int rls= 15<<2;		//result of right shift
	int rrs= 15>>2;		//result of left shift
	
	cout<< ror<<endl;  //30 me 1 add
	cout<<rand<<endl;  //15 me i minus
	cout<<rnot<<endl;  //changd to negative, last bit turned 
	cout<<rxor<<endl;  //same bits 0, different bits pr 1
	cout<<rls<<endl;
	cout<<rrs<<endl;
	return 0;
}
//Pattern using break statemnet
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< j;
            j++;
        if(j>i){
            break;
        }
        }
        cout<< endl;
        i++;
    }

    return 0;
}//Continue statement
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i==7){
            i++;
            continue;
        }
        cout<< i<< endl;
        i++;
        
}
    return 0;
}
//Using for loop
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    //int i=1;
    for(int j=1;j<=n; j++){
        if(j==7){
            continue;
        }
        cout<< j<< endl;
    }
    return 0;
}
####"break" is used to exit from the current loop.
####"return" statement is used to exit from the current function.
####"continue" is used to skip the current iteration of a loop and continue with the next iteration.

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i = 1;
    while(i < 5) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
    i++;
}

    return 0;
}
//Scope of variables
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i=10;
    cout<<i<<endl;
    if(i==10){
        int j=12;
        cout<<j<<endl;
    }
    //cout<< j<< endl; // yh j access hi n hga qki usk scope sirf upr tk hi tha parenthesis tk
    return 0;
}
//cin vs cin.get()
#include <iostream>
using namespace std; 
int main() {
    char c;
    //cin>> c;
    c= cin.get();
    int count =0;
    while(c!= '$'){
        count++;
        //cin>> c;
        c= cin.get();
    }
    cout<< count<< endl;
    return 0;
   
}
//Number of characters, digits or others
#include <iostream>
using namespace std; 
int main() {
    char ch;
    
    //cin>> c;
    ch= cin.get();
    //i = cin.get();
    //d= cin.get();
    int countc =0;
    int counti= 0;
    int counts=0;
    while (cin.get(ch) && ch != '$') {
        if (islower(ch))
            countc++;
        else if (isdigit(ch))
            counti++;
        else if (ch == ' ' || ch == '\t' || ch == '\n')
            counts++;
    }
    cout<< countc<<" "<< counti<< " "<< counts<< endl;
    return 0;
   
}
//print 1 for sum and 2 for product
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int c, n;
    int sum=0;int fact=1;
    //cout<<"Enter the value of n: ";
    cin>> n;
    //cout<<"Enter the choice between  sum or product: ";
    cin>>c;
    if(c==1){
        //int sum=0;
        for(int i=0; i<=n; i++){
            sum= sum+i;
            
        }
        cout<< sum<< endl;
    }
    else if(c==2){
        //int fact=1;
        for(int i=1; i<=n;i++){
            fact= fact*i;
            
        }
        cout<< fact<< endl;
    }
    else{
        cout<< -1;
    }
    //cout<< sum<< endl;
    //cout<< fact<< endl;

    return 0;
}
//Terms of AP
#include<iostream>
using namespace std;

int main() {
	int x; 
	cin>> x;
	
	int count =0;
	int n=1;
	
	for(int i=0; count < x;++i){
		int ans= 3 * n + 2;
		if(ans%4==0){
		    n++;
		    continue;
		    
		}
		cout<< ans<< " ";
		count++;
		n++;
	}
	return 0;
}
//reverse of a number
n	   n != 0	remainder	reverse
2345	true	5	        0 * 10 + 5 = 5
234	    true	4	        5 * 10 + 4 = 54
23		true	3			54 * 10 + 3 = 543
2		true	2			543 * 10 + 2 = 5432
0		false	-			Loop terminates.

#include<iostream>
using namespace std;
int main(){
	int n, remainder, reverse;
	cin>> n;
	while(n!=0){
		remainder= n%10;
		reverse= reverse*10+ remainder;
		n/=10;
	}
	cout<< reverse;
	return 0;
}
//Method 2- inbuilt function stio
#include <iostream>
using namespace std;
 
int main()
{
  string binaryNumber;
    cin >> binaryNumber;
    
    // format stoi(binary_in_string_format, 0, base_value)
    cout << stoi(binaryNumber, 0, 2);
 
    return 0;
}
//decimal to binary
n   n%2    n/2
13	1		6
6	0		3
3	1		1
1	1		0
0	-		-
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary[100];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary representation: ";
    if (i == 0) {
        cout << "0";
    } else {
        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }

    return 0;
}
//Calculaate nCr

#include<iostream>
using namespace std;
int main(){
	int n,r;
	cin>> n>> r;
	
	int fact_n=1;
	int i=1;
	while(i<=n){
		//int i=1;
		fact_n= fact_n * i;
		i++;
	}
	int  fact_r=1;
	while(i<=r){
		fact_r= fact_r * i;
		i++;	
	}
	int fact_n_r= 1;
	while(i<=n-r){
		fact_n_r= fact_n_r * i;
		i++;	
	}
	int a= fact_n/(fact_r * fact_n_r);
	cout<< a;
	return 0;
}

//we see that we have to repeat excuting the same block of code again and again, this increases the debugging effort, making our 
//code bulky and also reducing readibility!
// so we use functions, in this we write a block of coe to perform a action certain number of times, by giving it inputs as argument!
#include<iostream>
using namespace std;
int factorial(int n){
	int ans=1;
	int i=1;
	while(i<=n){
		ans= ans* i;
		i++;
	}
	return ans;
}
int main(){
	int output= factorial(5);
	cout<< output;
}

// the code reduced to half the length, by using  the function
#include<iostream>
using namespace std;
int factorial(int n){
	int ans=1;
	int i=1;
	while(i<=n){
		ans= ans* i;
		i++;
	}
	return ans;
}
int main(){
	int n, r;
	cin>>n>>r;
	int fact_n= factorial(n);
	int fact_r= factorial(r);
	int fact_n_r= factorial(n-r);
	cout<< fact_n/(fact_r* fact_n_r);
	//cout<< output;
}

//Prime or not using Functions
#include<iostream>
using namespace std;
bool isPrime(int n){ //output in bool is 0 or 1
	int d=2;
	while(d<n){
		if(n%d==0){
			return false;
		}
		d++;
	}
	return true;
}
int main(){
	bool ans = isPrime(31);
	cout<< ans<< endl;
}

//Print 1 to n using Functions
#include<iostream>
using namespace std;
void print_1_to_n(int n){
	for(int i=0; i<=n;i++){
		cout<< i<< endl;
	}
}
int main(){
	print_1_to_n(10);
}

//Multiply 2 numbers
#include<iostream>
using namespace std;
int multiply (int n, int  m){
	return n*m;
}
int main(){
	int ans= multiply(10,20);
	cout<< ans;
}

#include<iostream>
using namespace std;
void func (int a, int b){
      cout << (a + b);
 }

int main() {
    int a = 7;
    func(a, 12);
}

//Print all Prime numbers using 'Functions'
#include<iostream>
using namespace std;
bool isPrime(int n){
	int d=2;
	while(d< n){
		if(n%d==0){
			return false;
		}
		d++;
	}
	return true;
}
int main(){
	int n;
	cin>> n;
	for(int i=2; i<=n; i++){
		if(isPrime(i)){
			cout<< i<< endl;
		}
	}
	return 0;
}
//Print Order
#include<iostream>
using namespace std;

void B(){
	cout<< 5<< endl;
}

void A(){
	cout<< 1<< endl;
	B();
	cout<< 2<< endl;
}
int main(){
	int n=10;
	A();
	cout<< 5<< endl;
	cout<< n<< endl;
	return 0;
}
// the output will b printed as per main function call, or call stack

// Pass by Value
#include <iostream>
using namespace std;
int increment(int a){
    //a= 10;
    a = a+1;
    return 0;
}

int main() {
    int a= 10 ;
    //cin>> a;
    increment(a);
    cout<< a << endl;
    
}
/*It will not increment the value because we are just copy pasting one value from one location to another. The reason your code is not 
returning the incremented value (11) is because you are passing the variable a to the increment function by value. This means that a copy of
the value of a is created inside the function, and any changes made to that copy won't affect the original variable a in the main function.
In C++, when you pass a variable by value to a function, any changes made to that variable inside the function are confined to the 
local scope of the function and won't affect the variable outside the function.
To achieve the desired behavior of incrementing the value of a in the main function, you need to pass the variable by reference. 
You can do this by modifying the function signature and parameter accordingly

// If we rerun the same code using pass by reference, we will recieve 11
#include <iostream>
using namespace std;
int increment(int &a){
    //a= 10;
    a = a+1;
    return 0;
}

int main() {
    int a= 10 ;
    //cin>> a;
    increment(a);
    cout<< a << endl;
    
}

//-----------ARRAYSSS------------------
#include<iostream>
#include<climits>
using namespace std;
int main(){
	//Take input from user to define size of array
	
	int n;
	cin>> n;
	
	//define an array
	//int input[n];
	// we will never use this approach, we will never declare an array of variable size, we will always declare an array of constant size!
	int input[100];
	
	for(int i=0; i<n; i++){
		cin>> input[i];
	}
	for(int i=0; i<n; i++){
		cout << input[i]<< " ";
	}
	//Largest of all element
	int max  = INT_MIN ;
	for(int i=0; i<n; i++){
		if(input[i]> max){
			max = input[i];
		}
	}
	cout<< "\n Max is: " << max<< endl;
	return 0;
}

#include<iostream>
using namespace std;

int main(){
   int n = 4;
   int arr[5] = {n};
   for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
   }
}

//MINIMUM ELEMENT
#include<iostream>
#include <climits>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>> n;
	
	int input[100];
	
	for(int i=0; i<n; i++){
		cin>> input[i];
	}
	for(int i=0; i<n; i++){
		cout << input[i]<< " ";
	}
	//smallest of all element
	int min  = INT_MAX ;
	for(int i=0; i<n; i++){
		if(input[i]< min){
			min= input[i];
		}
	}
	cout<<"\n"<< min<< endl;
	return 0;
}

//Sum of Arrays
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
   int array[10000];
   for(int i=0; i<n; i++){
       cin>> array[i];
   }
   //for(int i=0; i<n; i++){
       //cout<< array[i]<< " ";
   //}
   for(int i=0; i<n; i++){
       
       sum = sum + array[i];
       
	   }
	cout<<sum;   
   return 0;

}

//Arrays to Functions
#include<iostream>
using namespace std;
void printArray(int input[]){
	cout << "Functions: " << sizeof(input)<< endl; // we will get ans 8, bcz, it only create memory for 0th element.
	// we can;t identify the sie o an arrray by its name, so we hav to explicitly pass the  size of array
}
int main(){
	int n;
	cin>> n;
	int input[100];
	for(int i=0; i<n; i++){
		cin>> input[i];
	}
	for(int i=0; i<n; i++){
		cout<< input[i];
	}
	cout << "Main Functions: " << sizeof(input)<< endl;  // we will get 400 bcz 4*100
	printArray(input);
	return 0;
}

#include<iostream>
using namespace std;
void printArray(int input[], int n){
	cout << "\n Print : "<< endl;
	for(int i=0; i< n;i++){
		cout << input[i]<< endl;
	}
	cout<<  endl;
	}
int main(){
	int n;
	cin>> n;
	int input[100];
	for(int i=0; i<n; i++){
		cin>> input[i];
	}
	//for(int i=0; i<n; i++){
		//cout<< input[i]<< " ";
	//}
	//cout << "Main Functions: " << sizeof(input)<< endl;  // we will get 400 bcz 4*100
	printArray(input, n);
	return 0;
}

//print Reverse
#include <iostream>
using namespace std;

void printArray(int arr[], int n){
	cout << "\n Print : "<< endl;
	for(int i=0; i< n;i++){
		cout << arr[i]<< endl;
	}
	cout<<  endl;
	}
void PrintReverse(int arr[], int n)
{
    
    int i= 0;
	int j= n-1;
	while(i<j){
		int temp = arr[i];
		arr[i]= arr[j];
		arr[j]= temp;
		i++;
		j--;
	}
}


int main() {
    int arr[5]= {1,2,3,4,5};
    
    
    PrintReverse(arr, 5);
    printArray(arr, 5);
    
}
//sum of corresponding elements
#include <iostream>
using namespace std;
void correspondingPairSum(int arr[],int n,int output[]){
    //Write your code here
    for(int i = 0; i< n/2; i++){
    	output[i]= arr[i]+ arr[n-i-1];
	}
}
int main(){
    int n;
    cin>>n;
    int arr[2000];
    int output[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    correspondingPairSum(arr,n,output);
    for(int i = 0;i<n/2;i++){
        
        cout<<output[i];
        if(i!=(n/2)-1){
            cout<<" ";
        }
    }
    
    return 0;
    }
// Reverse Alternates
#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
   for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
	}
int main()
{
		int size;
		cin >> size;
		int arr[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	
}
//ANother approch for above question
int i = 0;
int j = i + 1;

while (i < size - 1) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    i = i + 2;
    j = i + 1; // Update j based on the new value of i
}
//sum of two arrays
#include<iostream>
using namespace std;

void sumOfTwoArrays(int arr1[],int arr2[],int n,int arr3[]){
    for(int i=0; i<n; i++){
        arr3[i]= arr1[i] + arr2[i];
    }
}
int main(){

    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    sumOfTwoArrays(arr1,arr2,n,arr3);
    for(int i = 0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}
//Prefix Sum
#include<iostream>
using namespace std;

void prefixSum(int arr[],int n,int output[]){
    //Write your code here
    output[0]= arr[0];
    for(int i=0; i< n; i++){
        
        output[i] =  output[i-1] + arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}

//Find Unique
#include <iostream>
using namespace std;
int uniquenumber(int arr[], int size){
	int number = 0; 
	for(int i=0; i< size; i++){
		number ^= arr[i];
	}
	return number;
}
int main(){
	int size;
	cin >> size;
	int arr[size];
	for(int i=0; i< size; i++){
		cin >> arr[i];
	}
	cout<< uniquenumber(arr,size)<< endl;
	return 0;
}
//MAX CANDIES
#include<iostream>
using namespace std;
void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
    int maxCandies = 0;

    // Find the maximum number of candies among all children
    for (int i = 0; i < n; i++) {
        maxCandies = max(maxCandies, arr[i]);
    }

    // Determine if each child can have the most candies with extra candies
    for (int i = 0; i < n; i++) {
        if (arr[i] + extraCandies >= maxCandies) {
            output[i] = true;
        }
        else{
            output[i] = false;
        }
    }
}


int main(){
    int n,extraCandies;
    cin>>n>>extraCandies;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool output[n];
    
    maximum_candy(n,arr,extraCandies,output);

    for(int i = 0;i<n;i++){
        if(output[i]){
            cout<<"True ";
        }
        else{
            cout<<"False ";
        }
    }
}

//SEARCHING AND SORTING
//BINARY SEARCH
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter number of elment in array: ";
	cin>> n;
	int arr[100];
	cout<<"Enter array elements: ";
	for(int i=0; i<=n-1; i++){
		
		cin>> arr[i];
	}
	cout<<"Elements are: ";
	for(int i=0; i<=n-1; i++){
		cout<< arr[i]<< endl;
	}
	int x;
	cout<<"Enter the element to b searched: "<<endl;
	cin>> x;
	int start= 0;
	int end= n-1;
	while(start<=end){
		
		
		int mid= start+(end-start)/2;
		
	
		if(arr[mid]==x){
			cout << "Element is present at index: " << mid << endl;
			break;
		}
		else if(x< arr[mid]){
			end= mid-1; 
		}
		else{
			start= mid+1;
		
	}
	}
	if(start> end ){
		cout<<"element not found: " << endl;
	}
	return 0;
}
//closest index
#include<iostream>
using namespace std;

int binarySearchClosest(int arr[], int left, int right, int target) {
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (target < arr[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    // Return the index of the closest element
    if (mid > 0 && abs(arr[mid] - target) > abs(arr[mid - 1] - target)) {
        return mid - 1;
    }
    return mid;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int ans = binarySearchClosest(arr, 0, n - 1, target);
    cout << "Index of closest element: " << ans << endl;
    return 0;
}

//Selection Sort
#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n){
	for(int i=0; i< n-1; i++){
	
	//find minimum element
	
	int min= arr[i]; int minindex= i;
	for(int j=i+1; j<=n;j++){
		if(arr[j]< min){
			min = arr[j];
			minindex= j;
		}
	}
	//Swap
	int temp = arr[i];
	arr[i ]= arr[minindex];
	arr[minindex]= temp;
}
}

int main(){
	int n;
	cout<<"Enter number of elment in array: ";
	cin>> n;
	int arr[100];
	cout<<"Enter array elements: ";
	for(int i=0; i<=n-1; i++){
		
		cin>> arr[i];
	}
	SelectionSort(arr, n);
	cout<<"sorted Elements are: ";
	for(int i=0; i<=n-1; i++){
		cout<< arr[i]<< endl;
	}
	return 0;
	
}

//Bubble sort
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        for(int j= 0; j< n-i-1; j++){
            
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

#include <iostream>
using namespace std;

long long countInversions(int arr[], int n) {
    long long inversions = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }

    return inversions;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long inversions = countInversions(arr, N);
    cout << inversions << endl;

    return 0;
}
//kth smallest element
#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    //Write your code here
    int min = arr[0];
    for (int i = 0; i < n - 1; i++) {
      
      if(arr[i]< min){
          min = arr[i];
      }
    }
    return min;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int kth_smallest = kthSmallest(arr, n, k);
    cout << kth_smallest << endl;
    return 0;
}
//Merge two sorted arrays
#include <iostream>
using namespace std;



int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1+size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;

	}
}
//character arrays
#include<iostream>
using namespace std;
int length(char input[]){
    int count= 0;
    for(int i=0; input[i]!= '\0'; i++){
        count++;
    }
    return count;
}

int main() {
    char name[100];
    cout<<"enter your name: ";
    cin>>name;
    
    cout<< name<< endl;
    cout<<"length of string is: "<< length(name);
}
//Palindrome in character array
#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    
    // Write your code here
    int size = strlen(str);
    for(int i=0; i< size/2; i++){
        int j= size-i-1;       
            if(str[i]!= str[j]){
                return false;
            }
    }
    return true;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
//Replace Character
#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    int size = strlen(input);
    for (int i = 0; i < size; i++) {
        if (input[i] == c1) {
            input[i] = c2; 
        }
    }
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
//cin.getline
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char input[100];
    cin.getline(input, 100); //cin.getline(string_name, len)
    cout<< input<< endl;
} 

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char input[100];
    cin.getline(input, 100, 'o'); //cin.getline(string_name, len, delimiter)
    cout<< input<< endl;
} 
//Reverse String
#include <iostream>
#include <cstring>
using namespace std;
void ReverseString(char input[]){
    int len = strlen(input);
    int i=0; int j= len-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]= temp;
        i++;
        j--;
    } }
int main() {
    char input[100];
    cin.getline(input, 100);
    ReverseString(input);
    cout<< input<< endl;
    
} 
//trim spaces
#include <iostream>
#include <cstring>
using namespace std;
int trimSpaces(char input[]) {
    
    int len = strlen(input);
    int newIdx = 0; // Index for the new string

    for (int i = 0; i < len; i++) {
        if (input[i] != ' ') {
            input[newIdx] = input[i];
            newIdx++;
        }
    }

    input[newIdx] = '\0'; // Add null terminator to the new string
    
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
//strings in-built functions
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char input[10];
    cin>> input;
    cout<< input<< endl;
    
    //in-built function strlen
    int len = strlen(input);
    cout<< len<< endl;
     char input2[100];
     cin>> input2;
     
     bool comp= strcmp(input, input2); //it gives 0 for equal and 1 for non-equal
     //it returns us zero bcz when we compre to strings or array we actually compare their ascii value, which is being substracted and give us zero
     //abc- abc(97-97=0) hence equal
     cout<< comp<< endl;
     // strcopy
     
     
     strcpy(input, input2, 2);
     strncpy(input, input2, 2); // to copy first few letters of word
     cout<< input<< endl;
}  

//Print all sub- strings
#include<iostream>
#include <cstring>
using namespace std;

void PrintPrefixes(char input[]){
	for(int i=0; input[i]!= '\0'; i++){ //i for end, j for start
		for(int j=0; j<=i; j++){
			cout<< input[j];
			
		}
		cout<< endl;
	}
	
}
int main(){
	char input[1000];
	cin>> input;
	PrintPrefixes(input);
	
}
//print all sub strings
#include <iostream>
#include<cstring>
using namespace std;
void PrintSubstring(char str[]){
    for(int i=0; str[i]!= '\0'; i++){
        for(int j=0; j<=i; j++){
            cout<< str[j];
        }
        cout<< endl;
    }
}


int main() {
    int size;
    cin>> size;
    char str[size];
    cin>> str;
    PrintSubstring(str);

    return 0;
}*/
//2-D Array
#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	cout<< "entre values of m and n: ";
	int m,n;
	cin>> m>> n;
	 //for row-wise
	 cout<< "entre values of rows and cols: ";
	 for(int i=0; i<m; i++){
	 
	 for(int j=0; j<n; j++){
	 	cin>> a[i][j]; //row fixed, that is zero, but multiple cols
	 }
	}
	for(int i=0; i<m; i++){
	 
	 for(int j=0; j<n; j++){
	 	cout<< a[i][j]<<" "; //row fixed, that is zero, but multiple cols
	 }
	 cout<< endl;
	}
	
	//for column-wise
	/*
	 cout<< "entre values of rows and cols: ";
	 for(int j=0; j<n; j++){
	 
	 for(int i=0; i<m; i++){
	 	cin>> a[j][i]; //row fixed, that is zero, but multiple cols
	 }
	}
	for(int j=0; j<n; j++){
	 
	 for(int i=0; i<m; i++){
	 	cout<< a[j][i]<<" "; //row fixed, that is zero, but multiple cols
	 }
	 cout<< endl;
	}
	
	
return 0;
}
//Column-Wise Sum
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[1000][1000];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        int column_sum = 0;
        for (int i = 0; i < m; i++) {
            column_sum += a[i][j];
        }
        cout << column_sum << " ";
    }

    return 0;
}
//2-D Array: a[R][C] In thiss, we usually usually array in single block, so if we are to place a value on location arr[2][2](a[i][j] we use  
//the formula C*i+j

#include<iostream>
using namespace std;
void Print2D(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
	 
	 for(int j=0; j<n; j++){
	 	cout<< a[i][j]<<" "; //row fixed, that is zero, but multiple cols
	 }
	 cout<< endl;
	}
	}
int main(){
	
	int a[100][100];
	cout<< "entre values of m and n: ";
	int m,n;
	cin>> m>> n;
	 //for row-wise
	 cout<< "entre values of rows and cols: ";
	 for(int i=0; i<m; i++){
	 
	 for(int j=0; j<n; j++){
	 	cin>> a[i][j]; //row fixed, that is zero, but multiple cols
	 }
	}
	Print2D(a, m, n);	
	
return 0;
}
//Permutation of each other
#include <iostream>
#include <cstring>
using namespace std;


bool isPermutation(char input1[], char input2[]) {
    // Sort both strings
    sort(input1, input1 + strlen(input1));
    sort(input2, input2 + strlen(input2));

    // Compare the sorted strings
    return strcmp(input1, input2) == 0;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
//Wave-Like Print
#include <iostream>
using namespace std;

void wavePrint(int input[][1001], int nRows, int mCols)
{
	int j;
   if( j==0 || j%2==0){
    for( j=0; j< nRows; j++){
      for (int i = 0; i < mCols; i++) {
        cin >> input[i][j];
      }
    }
   }
   else{
       for(int j=nRows; j>0; j--){
      for (int i = mCols; i >0; i--) {
        cin >> input[i][j];
      }
    }
   }
}
int main()
{
	int row, col;
	cin >> row >> col;
	int input[row][1001];
	for (int i = 0; i < row; i++)
	{
			
		for (int j = 0; j < col; j++)
		{
			cin >> input[i][j];
			}
		}
	wavePrint(input, row, col);
	cout << endl;
	
}
//Transpose of Matrix
#include<iostream>
using namespace std;

void transpose(int row,int col,int input[][1001]) {
    for(int i=0; i< row; i++){
        for(int j=0; j< col; j++){
            cout<< input[j][i];
        }
    }
}
int main(){
    int row,col;
    cin>>row>>col;
    int input[row][1001];

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            
            cin>>input[i][j];
        }
    }
    transpose(row,col,input);
}
//SUM OF DIAGONALS AND BOUNDARIES
#include <iostream>
using namespace std;

int totalSum(int matrix[][501], int N)
{
    //Write your code here
    int sum = 0;

    // Sum of elements on both diagonals
    for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        if(i==0 || i==N-1 ||j==0 || j==N-1 || i==j || i+j==N-1){
            sum+=matrix[i][j];
        }
    
        }
    }

    return sum;
    

}

int main()
{
	
		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 
	
}
//Strings
*#include<iostream>
using namespace std;
int main(){
	int age;
	string name;
	cin>> age;
	//cin.ignore(1); //if we ill not add this, the input buffer willl consider end of line(\n) and will not print rest of the part
	getline(cin, name);
	cout<< name<<" "<< age;
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	
	string a, b;
	cin>> a>> b;
	string name = "Mehak";
	cout<< name.at(1); //will tell the  range of letter fr this name, I have 0 to 4 if i try to access 5th element by passing index 5 it will 
	//throw me out of range error.
	
	for(int i=0; i< name.size(); i++){
		cout<< name.at(i);
	}
	if(a==b) cout<<"Equal";
	else cout<<"Not Equal";
	
	if(a<b) cout<<"a<b";
	else cout<<"a>b";
	return 0;
}
#include<iostream>
using namespace std;

void removeAllOccurrencesOfChar(string input, char c) 
{
    string result= "";
    for(char ch: input){
        if(ch!= c){
            result+=ch;
        }
    }
    cout<< result;
}
int main(){
	string input,c;
	cin>> input>>c;
	removeAllOccurrencesOfChar(input,c)
	return 0;
}
//check Palindrome
#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string str) {
    int n= str.size();
    bool flag = true;
    for(int i=0; i<n; i++){
        if(str[i]!= str[n-i-1]){
            flag= false;
            break;
        }
    }
    return flag;
    
}


int main(){
    string a;
    cin>>a;
    cout << (checkPalindrome(a) ? "Palindrome" : "Not a Palindrome");
}
//Count Words
#include <string>
using namespace std;

int countWords(string str) {
	// Write your code here
	int count=0;
	bool inword= false; 
	for(int i=0; str[i]!= '\0'; i++){
		if(str[i]!= ' '){
                  if (!inword) {
                    count += 1;
                    inword= true;
                  }
				  
                }
				else{
					inword = false;
				}
        }
	return count;

}
int main() {
    string str;
    getline(cin, str);
    cout << countWords(str);
}



 
       
       
    









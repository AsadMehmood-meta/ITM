#include <iostream>
#include<cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char *argv[]) {
	
//	int Age1=28;
//	int Age2=29;
//	float Salary=300000;
//	char Alp='a';
//	printf("Name		:	Asad Mehmood\n");
//	printf("Institute	:	Usman Institute of Technology\n");
//	printf("Shift	 	:	Evening\n");
//	printf("Class	 	:	Fundamentals of programming\n");
//	printf("Age is %d and Salary is %f",Age2,Salary);

//int x=2;
//int y=3;
// x=x*y;
// y=x/y;
// x=x/y;
//printf("x: %d and y: %d",x,y);

//int x=5;
//int y=3;
//int add=x+y;
//int sub=x-y;
//int mode=x%y;
//printf("x : 5 , y : 3\nAdd : %d , sub : %d and mode : %d",add,sub,mode);

//Quadratic equation
//	float a,b,c,d,d1,x1,x2;
//	cout<<"Enter value of a: ";
//	cin>>a;
//	cout<<"Enter value of b: ";
//	cin>>b;
//	cout<<"Enter value of c: ";
//	cin>>c;
//	d=(b*b)-(4*a*c);
//	if (d<0){
//		cout<<"Imaginary number in square root";
//	} else{
//			d1=sqrt(d);
//	x1=(b*d1)/(2*a);
//	x2=(-b*d1)/(2*a);
//	cout<<"Value of x1 & x2 :"<<x1<<"  "<<x2;
//	}


//4 digit number split.
//	int x,x1,x2,x3,A1,A2,A3;
//	cout<<"Enter 4 digit number: ";
//	cin>>x;
//	if (x>9999||x<1000){
//		cout<<"Amount is not 4 digit number.";
//	} else{
//		x1=x%1000;
//		A1=(x-x1)/1000;
//		x2=x1%100;
//		A2=(x1-x2)/100;
//		x3=x2%10;
//		A3=(x2-x3)/10;
//		cout<<"Thousands: "<<A1<<".	Hundreds: "<<A2<<".	Tens: "<<A3<<".	Units: "<<x3;
//	}
	
//	int x;
//	cout<<"Enter number (1-4)";
//	cin>>x;
//	switch(x){
//		case 1:{
//			cout<<"One";
//			break;
//		}
//		case 2:
//			{
//			cout<<"Two";		
//			}
//			break;
//		case 3:{
//			cout<<"three";	
//			break;
//		}
//		case 4:{
//			cout<<"four";	
//			break;
//		}
//		default : cout<<"Invalid";
//	}
	

//Basic calculator	
//	int n1,n2,o1;
//	char o;
//	cout<<"Enter First number: ";
//	cin>>n1;
//	cout<<"Enter second number: ";
//	cin>>n2;
//	cout<<"Enter operation (+,-,*,/): ";
//	cin>>o;
//	switch (o){
//		case '+' :{
//		o1=n1+n2;
//		cout<<o1;
//			break;
//		}
//		case '-' :{
//		o1=n1-n2;
//		cout<<o1;
//			break;
//		}
//		case '*' :{
//		o1=n1*n2;
//		cout<<o1;
//			break;
//		}
//		case '/' :{
//		o1=n1/n2;
//		cout<<o1;
//			break;
//		}
//		default : "Invalid operation";
//	}
	
//Bill Calculation	
//	float unit,charges200,charges400,charges600,charges700,total,totals,surcharge,id;
//	cout<<"Enter units: ";
//	cin>>unit;
//	id = 1001;
//
//	if (unit<0){
//		cout<<"Invalid unit";
//	} else if (unit>0||unit<200){
//		charges200=unit*1.2;
//		if (charges200<100){
//			cout<<"Customer IDNO : 1001\nCustomer Name: James\nUnit Consumed: "<<unit<<"\nAmount Charges @Rs1.20 per unit: "<<charges200<<"\nTotal Bill: 100Rs";
//		} else {
//			cout<<"Customer IDNO : 1001\nCustomer Name: James\nUnit Consumed: "<<unit<<"\nAmount Charges @Rs1.20 per unit: "<<charges200<<"\nTotal Bill: "<<charges200;
//		}
//	} else if (unit>=200||unit<400){
//		charges200=199*1.2;
//		charges400=(unit-199)*1.5;
//		total=charges200+charges400;
//		surcharge=total*0.15;
//		totals=total+surcharge;
//		if (total<=400){
//			cout<<"Customer IDNO : 1001\nCustomer Name: James\nUnit Consumed: "<<unit<<"\nAmount Charges @Rs1.20 per unit: "<<charges200<<"\nAmount Charges @Rs1.50 per unit: "<<charges400<<"\nTotal Bill: "<<total;
//		} else {
//			cout<<"Customer IDNO : 1001\nCustomer Name: James\nUnit Consumed: "<<unit<<"\nAmount Charges @Rs1.20 per unit: "<<charges200<<"\nAmount Charges @Rs1.50 per unit: "<<charges400<<"\nSurcharge Amount: "<<surcharge<<"\nNet Amount: "<<totals;
//		}
//	} else if (unit>=400||unit<600){
//		charges400=400*1.5;
//		charges600=(unit-400)*1.8;
//		total=charges400+charges600;
//		surcharge=total*0.15;
//		totals=total+surcharge;
//		if (total<=400){
//			cout<<"Customer IDNO : 1001/nCustomer Name: James/nUnit Consumed: "<<unit<<"/nAmount Charges @Rs1.20 per unit: "<<charges200<<"/nAmount Charges @Rs1.50 per unit: "<<charges400<<"/nTotal Bill: "<<total;
//		} else {
//			cout<<"Customer IDNO : 1001\nCustomer Name: James\nUnit Consumed: "<<unit<<"\nAmount Charges @Rs1.50 per unit: "<<charges400<<"\nAmount Charges @Rs1.80 per unit: "<<charges600<<"\nSurcharge Amount: "<<surcharge<<"\nNet Amount: "<<totals;
//		}
//	} else {
//		charges600=600*1.8;
//		charges700=(unit-600)*2;
//		total=charges400+charges600;
//		surcharge=total*0.15;
//		totals=total+surcharge;
//		if (total<=400){
//			cout<<"Customer IDNO : 1001/nCustomer Name: James/nUnit Consumed: "<<unit<<"/nAmount Charges @Rs1.20 per unit: "<<charges200<<"/nAmount Charges @Rs1.50 per unit: "<<charges400<<"\nTotal Bill: "<<total;
//		} else {
//			cout<<"Customer IDNO : 1001\nCustomer Name: James\nUnit Consumed: "<<unit<<"\nAmount Charges @Rs1.80 per unit: "<<charges600<<"\nAmount Charges @Rs2.00 per unit: "<<charges600<<"\nSurcharge Amount: "<<surcharge<<"\nNet Amount: "<<totals;
//		}
//	}

//Fibonaci Series
//	int num1,i,l;
//	cout<<"enter limit: ";
//	cin>>l;
//	num1=1;
//	for (i=0 ; i<=l ; i+=num1){
//		num1+=i;
//		cout<<i<<endl<<num1<<endl;
//	}


//Fictorial
//	int i,f,l;
//	cout<<"Enter Fictorial number: ";
//	cin>>l;
//	f=1
//	for (i ; i>=l ; i++){
//		f
//		cout<<i<<endl;
//		
//	}


//first 100 integers
//	int i,x;
//	cout<<"Enter Limit: ";
//	cin>>x;
//	for (i=1 ; i<=x ; i++ ){
//		cout<<i<<endl;
//	}

//Differentiate odd and even number
//	int i,x,m;
//	cout<<"enter limit: ";
//	cin>>x;
//	for ( i=1 ; i<=x ; i++){
//		m=i%2;
//		if (m==1){
//			cout<<i<<" : Odd number"<<endl;
//		} else {
//			cout<<i<<" : Even number"<<endl;
//		}
//	}




	
	return 0;
}

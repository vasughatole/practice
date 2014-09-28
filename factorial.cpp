/*question asked to find the number of zeroes after the factorial of a given number*/

#include<iostream>
using namespace std;
/*int factorial(int num){
	long double answer=1;
	if(num==0){return 1;}
	else{
		for(int i=2;i<=num;i++){
		answer=answer*i;
		}
	return answer;	
	}
}
int numberOfZeroes=0;

void checkForMultiplePowerOfFive(int num){
	if(num%5==0){
		numberOfZeroes++;
		checkForMultiplePowerOfFive(num/5);	
	}
}

int main(){
	int x=1,n=0,t=1;
	cin>>t;
	while(t--){
	numberOfZeroes=0;
	cin>>n;
	//cout<<factorial(n)<<endl;
	//cout<<numberOfZeroes<<endl;
	for(int i=1;i<=n;i++){
		//cout<<"I IS "<<i<<endl; 
		if(i%5==0){
			//numberOfZeroes+=1;
			//while(x!=1){
			//	x=i/5;
			//	if(x%5==0){numberOfZeroes++;}
			checkForMultiplePowerOfFive(i);
			}
		}
		cout<<numberOfZeroes<<endl;
		}
	}
*/

int main(){
	int numberOfTestCases=0;
	int number=0;
	int temp=0;
	cin>>numberOfTestCases;
	while(numberOfTestCases--){
		cin>>number;
		int answer=0;
		do{
			number=number/5;
			answer+=number;		
		}while(number>0);
		cout<<answer<<endl;
	}
}

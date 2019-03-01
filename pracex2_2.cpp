#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	float a[20]={};
	string s[]={};
	ifstream source("W:\\tw\\pracex\\pracex2_2107302964161380\\score3.txt");
	string line;
	for(int i=0;i<20;i++){
		getline(source,line);
		a[i]=0.0+atof(line.c_str());
		
		
	}

	sort(a,20);
	
	for(int i=0;i<20;i++){
		if(a[i]==a[i-1]){
			int x,t;
			for(int x=0;x<i;x++)
				if(a[i]==a[x]){
					t=x;
					break;
			}
			cout<<a[i]<<"="<<t+1<<" \n";
		}
		else{
			cout<<a[i]<<"="<<i+1<<" \n";
		
		}
	}
	ofstream dest("W:\\tw\\pracex\\pracex2_2107302964161380\\rank.txt");
	for(int i=0;i<20;i++){
		if(a[i]==a[i-1]){
			int x,t;
			for(int x=0;x<i;x++)
				if(a[i]==a[x]){
					t=x;
					break;
			}
			dest<<a[i]<<"="<<t+1<<" \n";
		}
		else{
			dest<<a[i]<<"="<<i+1<<" \n";
		
		}
	}
	dest.close();
	//Write your code here
	
	return 0;
}


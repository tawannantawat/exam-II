#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomAlphabet(){
	for(int k=0;k<8;k++){
		for(int l=0;l<8;l++){
			alphabet[k][l] ='a'+rand()%26;

		}
	}
}


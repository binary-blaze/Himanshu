#include <assert.h>
#include <bits/stdc++.h>
using namespace std;


class Pieces {
  int x_cord,y_cord;
  string color;
	public:
		int getXCord() {
			return x_cord;
		}
		int getYCord() {
			return y_cord;
		}

};

class Black: public Pieces {
	string color = "BLACK";
};
class White: public Pieces {
	string color = "WHITE";
};


class Board {
	private:
		int xCord, yCord;
		string grid[8][8];
	public:
		void printBoard(){
			for(int i=1; i<=9; i++) {
				if (i!=9){					
					for (int j=1; j<=9; j++) {
						if (j==1){
							cout << i << " ";
						} else {
							cout << "  ";
						}
					}
				} else {
					for (int j=1; j<=9; j++){
						if (j==1)
							cout << "  ";
						if (j>1){
							int asciiVal = 'A';
							cout << char(asciiVal+(j-2)) << " ";
						}
					}
				}
				cout << "\n";
			}
		}

};
 

int main() {
	Board board;
	board.printBoard();
}

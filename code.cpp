// Камень-ножницы-бумага

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int bot_ans() {
	srand(time(NULL));
	return (rand() % 3 + 1);
	// 1=r, 2=p, 3=s
}

int main() {
	int hum, pc;
	string hum_win, pc_win;
	cout << "Input r = 1,  s = 2, p = 3" << "\n";
	cin >> hum;
	pc = bot_ans();

	hum_win = "You win!";
	pc_win = "Tou lose :c";
	cout << "Your turn: " << hum << "\n";
	cout << "Bot turn: " << pc << "\n";
	if (hum == pc) {
		cout << "Draw";
	}
	else if (hum == 1 and pc == 2) {
		cout << hum_win;
	}
	else if (hum == 1 and pc == 3) {
		cout << pc_win;
	}
	else if (hum == 2 and pc == 1) {
		cout << pc_win;
	}
	else if (hum == 2 and pc == 3) {
		cout << hum_win;
	}
	else if (hum == 3 and pc == 1) {
		cout << hum_win;
	}
	else if (hum == 3 and pc == 2) {
		cout << pc_win;
	}
	return 0;
}
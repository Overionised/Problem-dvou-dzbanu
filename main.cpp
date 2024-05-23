#include <iostream>
#include <stdexcept>
#include <cstdlib>

// credit to Repo owner and Miroslav Klasna

using namespace std;

int kapacita[2];
int dzban[2];

void print(){
	if (dzban[0]<10){
	cout << "dzban1 = 0" << dzban[0] << "          " << "dzban2 = " << dzban[1] <<"  \n";
	}
	else{
        cout << "dzban1 = " << dzban[0] << "          " << "dzban2 = " << dzban[1] <<"  \n";
        }
}

void nalit() {
    dzban[0] += kapacita[0];
    print();
}

void vylit() {
    dzban[1] = 0;
    print();
}

void prelit() {
    if ((dzban[1] + dzban[0]) > kapacita[1]) {
        dzban[0] = (dzban[0] + dzban[1] - kapacita[1]);
        dzban[1] = kapacita[1];
    } else {
        dzban[1] += dzban[0];
        dzban[0] = 0;
    }
    print();
}

int main(int argc, char* argv[]) {
    if (argc != 3 || string(argv[1]) == "-h" || string(argv[2]) == "-h") {
        cerr << "usage: " << argv[0] << " [velikost dzbanu1] [velikost dzbanu2]" << endl;
        return 1;
    }


    try {
        kapacita[0] = std::stoi(argv[1]);
        kapacita[1] = std::stoi(argv[2]);
    } catch (const std::invalid_argument& e) {
        cerr << "prosím poskytněte čísla" << endl;
        return 2;
    } catch (const std::out_of_range& e) {
        cerr << "zadané číslo je mimo rozsah" << endl;
        return 2;
    }
    if (kapacita[0] > kapacita[1]){
    	swap(kapacita[0], kapacita[1]);
    }

	
    if ((kapacita[0] == 0) || (kapacita[1] == 0) || (kapacita[1]<0) || (kapacita[0]<0) || (kapacita[0] %2 == 0)|| (kapacita[1] %2 == 0)||(kapacita[0] %kapacita[1] == 0)){
    	cout<<"kapacity musí být liché, nesoudělné a nebýt 0 \n";
	return 3;
    }

    while (true) {
        nalit();
        prelit();
        if (dzban[1] == kapacita[1]) {
            vylit();
        }
        if (dzban[0] == 1) {
            break;
        }
    }

    return 0;
}

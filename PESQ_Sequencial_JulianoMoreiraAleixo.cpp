/**************************************************
 *                                                *
 *             Algoritmos de Pesquisa             *
 *               Pesquisa Sequencial              *
 *                                                *
 **************************************************
 *                                                *
 *  Autor: Juliano Moreira Aleixo                 *
 *  Disciplina: C03                               *
 *  Professor: Jonas Lopes de Vilas Boas          *
 *  Data: 09/03/2024                              *
 *                                                *
 **************************************************/

#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int index = 0;
    int inputNumber;
    int numberToSearch;
    int searchIndex;
    bool found = false;

    while(true) {
        cout << "Write a number for the array, '-1' ends the array: " << endl;
        cin >> inputNumber;
        if(inputNumber == -1) {
            break;
        }
        arr[index] = inputNumber;
        index++;
    }

    cout << "Now, write a number to search in array: " << endl;
    cin >> numberToSearch;

    for(searchIndex = 0; searchIndex < index; searchIndex++) {
        if (arr[searchIndex] == numberToSearch) {
            cout << "Number " << numberToSearch << " found in index: " << searchIndex << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Number " << numberToSearch << " not found in array." << endl;
    }

    return 0;
}
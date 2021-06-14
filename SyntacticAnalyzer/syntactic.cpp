#include "syntactic.h"

using namespace std;

Syntactic::Syntactic(){
    cout << "Constructor syntactic" << endl;
    tableFile.open(TABLE_FILE, ios::in);
    if(!tableFile.is_open()){
        ofstream tableFile(TABLE_FILE);
        tableFile.open(TABLE_FILE, ios::in);
    }
    rulesFile.open(RULES_FILE, ios::in);
    if(!rulesFile.is_open()){
        ofstream rulesFile(RULES_FILE);
        rulesFile.open(RULES_FILE, ios::in);
    }
}

Syntactic::~Syntactic(){
    tableFile.close();
    rulesFile.close();
}

void Syntactic::fillArrays(){
    for(int i(0); i < TABLE_ROWS; i++){
        for (int j(0); j < TABLE_COLS; j++){
            tableFile >> table[i][j];
        }
    }

    for(int i(0); i < RULES_ROWS; i++){
        for (int j(0); j < RULES_COLS; j++){
            rulesFile >> rules[i][j];
        }
    }
}

bool Syntactic::analyze(string code){
    Automatum automatum;
    list<Analyzer> aux;
    vector<int> numbers;
    stack<int> testStack;
    int num, numTest, rule;
    bool isAccepted = false;

    aux = automatum.automata(code);
    fillArrays();
    if(!aux.empty()){
       for(std::list<Analyzer>::iterator ite = aux.begin(); ite != aux.end(); ite++){
            stringstream ss(ite->getNum());
            ss >> num;
            numbers.push_back(num);
        }
    }

    testStack.push(0);
    for(int i (0); i < numbers.size();i++){
        numTest = table[testStack.top()][numbers[i]];

        if(numTest > 0){//positive
            testStack.push(numbers[i]);
            testStack.push(numTest);
        }
        else if(numTest < 0){// negative == rule
            if(numTest == -1){
                isAccepted = true;
                break;
            }

            numTest= (numTest*-1);
            numTest = numTest -1;

            if((rule = rules[numTest][NUM_POPS]) == 0){
                //no pops
            }
            else{// pop
                rule*=2;
                for(int k(0); k < rule; k++){
                    testStack.pop();
                }
            }
            numTest = table[testStack.top()][rule = rules[numTest][RULE]];
            testStack.push(rule);
            testStack.push(numTest);
            i--;
        }
        else{// not defined
            break;
        }
    }
    while(!testStack.empty()){
        testStack.pop();
    }
    return isAccepted;

}





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

}

bool Syntactic::analyze(string code){

}





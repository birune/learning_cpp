#include <iostream>
using namespace std;

int main(void){
    // \oo で8進数の文字コードを表す(ooは8進数の数字)
    cout << "8進数101の文字コードを持つ文字は " << '\101' << " です\n" ;
    // \xoo で16進数の文字コードを表す(ooは0~9とA~Fの文字)
    cout << "16進数61の文字コードを持つ文字は " << '\x61' << " です\n" ;

    // 0oo で8進数を10進数で表す(ooは8進数の数字)
    cout << "8進数で\"20\"は10進数では\"" << 020 << "\"と表される\n" ;
    // 0xoo で16進数を10進数であらわす(ooは16進数の数字)
    cout << "16進数で\"20\"は10進数では\"" << 0x20 << "\"と表される\n" ;


    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ
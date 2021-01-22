// 051_Class_CopyConstructor.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>

class Customer {
public:
    int number;
    std::string name;
    Customer(int n);
    Customer(const Customer& obj);
    ~Customer();
};

Customer::Customer(int n) {
    number = n;
    name = "未設定";
    std::cout << "コンストラクタが呼び出されました。\n";  
}

Customer::Customer(const Customer& obj) {
    number = obj.number + 1;
    name = obj.name;
    std::cout << "コピーコンストラクターが呼び出されました。\n";
}

Customer::~Customer() {
    std::cout << "デストラクターが呼び出されました。\n";
}

void Disp(Customer obj);

int main()
{
    Customer taro(100);
    taro.name = "たろー。";
    Disp(taro);
}

void Disp(Customer obj) {
    std::cout << "顧客番号：" << obj.number << std::endl;
    std::cout << "氏名：" << obj.name << std::endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します

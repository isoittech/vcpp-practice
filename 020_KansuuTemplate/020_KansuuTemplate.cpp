﻿// 020_KansuuTemplate.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;

template <typename T> T calc(T dt1, T dt2) {
	return dt1 + dt2;
}


int main1()
{
	int par1, par2, add1;
	double par3, par4, add2;

	cout << "整数値を2回入力してください。\n";
	cin >> par1 >> par2;
	add1 = calc(par1, par2);
	cout << "合計値：" << add1 << "\n";

	cout << "実数値を2回入力してください。\n";
	cin >> par3 >> par4;
	add2 = calc(par3, par4);
	cout << "合計値：" << add2 << "\n";

	return 0;
}



template <typename N1, typename N2> string calc2(N1 dt1, N2 dt2, string successMsgBase) {

	N1 dt = dt1 + dt2;
	string retStr = successMsgBase + to_string(dt);
	return retStr;
}


int main2()
{
	int par1;
	double par2;
	string result;

	cout << "整数値と実数値を入力してください。\n";
	cin >> par1 >> par2;
	result = calc2(par1, par2, "成功？やったね");
	cout << result << "\n";

	return 0;

}

int main()
{
	main2();

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

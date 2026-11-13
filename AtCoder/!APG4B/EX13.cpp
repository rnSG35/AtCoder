#include "bits/stdc++.h"
using namespace std;
int main()
{
	//人数
	int People;
	cin >> People;

	//点数を入れる配列
	vector<int> Point(People);

	//人数分ループ、点数入力
	for (int i = 0; i < People; i++)
	{
		cin >> Point.at(i);
	}

	int Avg;
	int tmp = 0;

	//人数分ループ、tmpに点数をすべて足す
	for (int i = 0; i < People; i++)
	{
		tmp += Point.at(i);
	}

	//平均
	Avg = tmp / People;


	//出力
	for (int i = 0; i < People; i++)
	{
		if (Avg < Point.at(i))
		{	//平均点より点数のほうが高い場合
			cout << Point.at(i) - Avg << endl;
		}
		else
		{	//平均点より点数のほうが低い場合
			cout << Avg - Point.at(i) << endl;
		}
	}

}

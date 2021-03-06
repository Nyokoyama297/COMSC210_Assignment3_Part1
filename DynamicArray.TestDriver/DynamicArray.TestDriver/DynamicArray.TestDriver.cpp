// DynamicArray.TestDriver.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"

// Student;s name: Naoyuki Yokoyama
// Student's ID: 1635297
#include <iostream>
#include <string>
using namespace std;

#include <cassert>
#include "DynamicArray.h"
#include "DynamicArray.h"


const int SIZE = 2;
int main()
{
  DynamicArray<int> int1;
  
  //DynamicArray::DynamicArray
  cout << endl << "Testing DynamicArray<int>::DynamicArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(int1[i] == int());
  }
  cout << "Pass" << endl;

  //DynamicArray::capacity
  cout << endl << "Testing DynamicArray<int>::capacity" << endl;
  cout << "Expected Value: 2" << endl;
  cout << "Actual Value: " << int1.capacity() << endl;
  assert(2 == int1.capacity());
  cout << "Pass" << endl;

  //DynamicArray::operator[] getter
  cout << endl << "Testing StaticArray<int>::operator[] getter" << endl;
  const DynamicArray<int> int2 = int1;
  for (int i = 0; i < int2.capacity(); i++) {
	assert(int1[i] == int2[i]);
  }
  cout << "Pass" << endl;

  //DynamicArray::operator[] setter
  cout << endl << "Testing DynamicArray<int>::operator[] setter" << endl;
  int1[6] = 123456;
  int1[7] = 7654321;
  cout << "Expected Value: 123456" << endl;
  cout << "Actual Value: " << int1[6] << endl;
  assert(int1[6] == 123456);
  cout << "Expected Value: 7654321" << endl;
  cout << "Actual Value: " << int1[7] << endl;
  assert(int1[7] == 7654321);
  int1[-1000] = 123;
  cout << "Expected Value: 123" << endl;
  cout << "Actual Value: " << int1[-1000] << endl;
  assert(int1[-1000] == 123);
  assert(int1[-10] == 123);
  //assert(int1[1000] == 123);
  assert(int1[0] != 123);
  assert(int1[5] != 123);
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const DynamicArray<int> int3;
  assert(int3.capacity());
  assert(int3[0] == int3[0]);
  assert(int3[-1] == int3[-1]);
  cout << "Pass" << endl;

  //Object copy test
  cout << endl << "Object copy test" << endl;
  DynamicArray<int> int4 = int1;
  assert(int1.capacity() == int4.capacity());
  for (int i = 0; i < int1.capacity(); i++) {
	assert(int1[i] == int4[i]);
  }
  cout << "Pass" << endl;

  //Object Assignment test
  cout << endl << "Object assignment test" << endl;
  DynamicArray<int> int5;
  int5 = int1;
  assert(int5.capacity() == int1.capacity());
  for (int i = 0; i < int1.capacity(); i++ ) {
	assert(int1[i] == int5[i]);
  }
  cout << "Pass" << endl;

  DynamicArray<double> double1;

  //DynamicArray::DynamicArray
  cout << endl << "Testing DynamicArray<double>::DynamicArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(double1[i] == double());
  }
  cout << "Pass" << endl;

  //DynamicArray::capacity
  cout << endl << "Testing DynamicArray<double>::capacity" << endl;
  cout << "Expected Value: 2" << endl;
  cout << "Actual Value: " << double1.capacity() << endl;
  assert(2 == double1.capacity());
  cout << "Pass" << endl;

  //DynamicArray::operator[] getter
  cout << endl << "Testing StaticArray<double>::operator[] getter" << endl;
  const DynamicArray<double> double2 = double1;
  for (int i = 0; i < double2.capacity(); i++) {
	assert(double1[i] == double2[i]);
  }
  cout << "Pass" << endl;

  //DynamicArray::operator[] setter
  cout << endl << "Testing DynamicArray<double>::operator[] setter" << endl;
  double1[6] = 1.23456;
  double1[7] = 7.654321;
  cout << "Expected Value: 1.23456" << endl;
  cout << "Actual Value: " << double1[6] << endl;
  assert(double1[6] == 1.23456);
  cout << "Expected Value: 7.654321" << endl;
  cout << "Actual Value: " << double1[7] << endl;
  assert(double1[7] == 7.654321);
  double1[-1000] = 1.23;
  cout << "Expected Value: 1.23" << endl;
  cout << "Actual Value: " << double1[-1000] << endl;
  assert(double1[-1000] == 1.23);
  assert(double1[-10] == 1.23);
  //assert(int1[1000] == 123);
  assert(double1[0] != 1.23);
  assert(double1[5] != 1.23);
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const DynamicArray<double> double3;
  assert(double3.capacity());
  assert(double3[0] == double3[0]);
  assert(double3[-1] == double3[-1]);
  cout << "Pass" << endl;

  //Object copy test
  cout << endl << "Object copy test" << endl;
  DynamicArray<double> double4 = double1;
  assert(double1.capacity() == double4.capacity());
  for (int i = 0; i < double1.capacity(); i++) {
	assert(double1[i] == double4[i]);
  }
  cout << "Pass" << endl;

  //Object Assignment test
  cout << endl << "Object assignment test" << endl;
  DynamicArray<double> double5;
  double5 = double1;
  assert(double5.capacity() ==double1.capacity());
  for (int i = 0; i < double1.capacity(); i++ ) {
	assert(double5[i] == double1[i]);
  }
  cout << "Pass" << endl;

  DynamicArray<char> char1;

  //DynamicArray::DynamicArray
  cout << endl << "Testing DynamicArray<char>::DynamicArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(char1[i] == char());
  }
  cout << "Pass" << endl;

  //DynamicArray::capacity
  cout << endl << "Testing DynamicArray<char>::capacity" << endl;
  cout << "Expected Value: 2" << endl;
  cout << "Actual Value: " << char1.capacity() << endl;
  assert(2 == char1.capacity());
  cout << "Pass" << endl;

  //DynamicArray::operator[] getter
  cout << endl << "Testing StaticArray<char>::operator[] getter" << endl;
  const DynamicArray<char> char2 = char1;
  for (int i = 0; i < char2.capacity(); i++) {
	assert(char1[i] == char2[i]);
  }
  cout << "Pass" << endl;

  //DynamicArray::operator[] setter
  cout << endl << "Testing DynamicArray<char>::operator[] setter" << endl;
  char1[6] = 'a';
  char1[7] = 'b';
  cout << "Expected Value: a" << endl;
  cout << "Actual Value: " << char1[6] << endl;
  assert(char1[6] == 'a');
  cout << "Expected Value: b" << endl;
  cout << "Actual Value: " << char1[7] << endl;
  assert(char1[7] == 'b');
  char1[-1000] = 'c';
  cout << "Expected Value: c" << endl;
  cout << "Actual Value: " << char1[-1000] << endl;
  assert(char1[-1000] == 'c');
  assert(char1[-10] == 'c');
  //assert(int1[1000] == 123);
  assert(char1[0] != 'c');
  assert(char1[5] != 'c');
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const DynamicArray<char> char3;
  assert(char3.capacity());
  assert(char3[0] == char3[0]);
  assert(char3[-1] == char3[-1]);
  cout << "Pass" << endl;

  //Object copy test
  cout << endl << "Object copy test" << endl;
  DynamicArray<char> char4 = char1;
  assert(char1.capacity() == char4.capacity());
  for (int i = 0; i < char1.capacity(); i++) {
	assert(char1[i] == char4[i]);
  }
  cout << "Pass" << endl;

  //Object Assignment test
  cout << endl << "Object assignment test" << endl;
  DynamicArray<char> char5;
  char5 = char1;
  assert(char1.capacity() == char5.capacity());
  for (int i = 0; i < char1.capacity(); i++) {
	assert(char1[i] == char5[i]);
  }
  cout << "Pass" << endl;

  DynamicArray<string> string1;

  //DynamicArray::DynamicArray
  cout << endl << "Testing DynamicArray<string>::DynamicArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(string1[i] == string());
  }
  cout << "Pass" << endl;

  //DynamicArray::capacity
  cout << endl << "Testing DynamicArray<string>::capacity" << endl;
  cout << "Expected Value: 2" << endl;
  cout << "Actual Value: " << string1.capacity() << endl;
  assert(2 == string1.capacity());
  cout << "Pass" << endl;

  //DynamicArray::operator[] getter
  cout << endl << "Testing StaticArray<string>::operator[] getter" << endl;
  const DynamicArray<string> string2 = string1;
  for (int i = 0; i < string2.capacity(); i++) {
	assert(string1[i] == string2[i]);
  }
  cout << "Pass" << endl;

  //DynamicArray::operator[] setter
  cout << endl << "Testing DynamicArray<string>::operator[] setter" << endl;
  string1[6] = "abcdef";
  string1[7] = "fedcba";
  cout << "Expected Value: abcdef" << endl;
  cout << "Actual Value: " << string1[6] << endl;
  assert(string1[6] == "abcdef");
  cout << "Expected Value: fedcba" << endl;
  cout << "Actual Value: " << string1[7] << endl;
  assert(string1[7] == "fedcba");
  string1[-1000] = "abc";
  cout << "Expected Value: abc" << endl;
  cout << "Actual Value: " << string1[-1000] << endl;
  assert(string1[-1000] == "abc");
  assert(string1[-10] == "abc");
  //assert(int1[1000] == 123);
  assert(string1[0] != "abc");
  assert(string1[5] != "abc");
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const DynamicArray<string> string3;
  assert(string3.capacity());
  assert(string3[0] == string3[0]);
  assert(string3[-1] == string3[-1]);
  cout << "Pass" << endl;

  //Object copy test
  cout << endl << "Object copy test" << endl;
  DynamicArray<string> string4 = string1;
  assert(string1.capacity() == string4.capacity());
  for (int i = 0; i < string1.capacity(); i++) {
	assert(string1[i] == string4[i]);
  }
  cout << "Pass" << endl;

  //Object Assignment test
  cout << endl << "Object assignment test" << endl;
  DynamicArray<string> string5;
  string5 = string1;
  assert(string1.capacity() == string5.capacity());
  for (int i = 0; i < string1.capacity(); i++) {
	assert(string1[i] == string5[i]);
  }
  cout << "Pass" << endl;
  return 0;

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

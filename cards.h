#pragma once
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;
int fillandshowcards(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 13 + 1;
		cout << arr[i] << " | ";
	}
	return *arr;
}
int fillandshowsuits(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 4 + 1;
		cout << arr[i] << " | ";
	}
	return *arr;
}

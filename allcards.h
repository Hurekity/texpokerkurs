#pragma once
#include <iostream>
#include <time.h>
using namespace std;
int fillallcards(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 13 + 1;
	}
	return *arr;
}
int fillallsuits(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 4 + 1;
	}
	return *arr;
}
void showallcardsftime(int* arr)
{
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " | ";
	}
}
void showallsuitsftime(int* arr)
{
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " | ";
	}
}
void showallcardsstime(int* arr)
{
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " | ";
	}
}
void showallsuitsstime(int* arr)
{
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " | ";
	}
}
void showallcardsttime(int* arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " | ";
	}
}
void showallsuitsttime(int* arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " | ";
	}
}

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <Windows.h>
using namespace std;

void normalSorting();

void bubbleSort(int arrayToSort[], int arraySize);

void printBubbleSort();

void swap(int indexOne, int indexTwo, int arrayToSwap[]);

int tenArray[10];
int hundredArray[100];
int thousandArray[1000];

void normalSorting()
{
	clock_t startTen, startHundred, startThousand, endTen, endHundred, endThousand;

	int tenNormalArray[10];
	int hundredNormalArray[100];
	int thousandNormalArray[1000];

	for (int i = 0; i < 10; i++)
	{
		tenNormalArray[i] = tenArray[i];
	}

	for (int i = 0; i < 100; i++)
	{
		hundredNormalArray[i] = hundredArray[i];
	}

	for (int i = 0; i < 1000; i++)
	{
		thousandNormalArray[i] = thousandArray[i];
	}

	cout << endl;

	int ten = sizeof(tenNormalArray) / sizeof(tenNormalArray[0]);
	int hundred = sizeof(hundredNormalArray) / sizeof(hundredNormalArray[0]);
	int thousand = sizeof(thousandNormalArray) / sizeof(thousandNormalArray[0]);

	startTen = clock();
	sort(tenNormalArray, tenNormalArray + ten);
	endTen = clock();

	startHundred = clock();
	sort(hundredNormalArray, hundredNormalArray + hundred);
	endHundred = clock();

	startThousand = clock();
	sort(thousandNormalArray, thousandNormalArray + thousand);
	endThousand = clock();

	cout << "Ten Array Sorted using Normal sort algorithm" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << tenNormalArray[i] << " ";
	}

	cout << endl;

	cout << "Hundred Array Sorted using Normal sort algorith" << endl;

	for (int i = 0; i < 100; i++)
	{
		cout << hundredNormalArray[i] << " ";
	}

	cout << endl;

	cout << "Thousand Array Sorted using Normal sort algorith" << endl;

	for (int i = 0; i < 1000; i++)
	{
		cout << thousandArray[i] << " ";
	}

	cout << endl;

	cout << "Times: " << endl;

	cout << "Ten: " << (endTen - startTen) << " Milliseconds" << endl;

	cout << "Hundred: " << (endHundred - startHundred)  << " Milliseconds" << endl;

	cout << "Thousand: " << (endThousand - startThousand) << " Milliseconds" << endl;

}

void bubbleSort(int arrayToSort[], int arraySize)
{
	bool swapped = false;
	do
	{
		swapped = false;

		for (int i = 0; i < arraySize - 1; i++)
		{
			int leftElement = arrayToSort[i];
			int rightElement = arrayToSort[i + 1];
			if (leftElement > rightElement)
			{
				swap(i, i + 1, arrayToSort);
				swapped = true;

				cout << leftElement << " " << rightElement << " " << swapped << " " << i << endl;
			}
		}

	} while (swapped);
}

void printBubbleSort()
{
	clock_t startTen, startHundred, startThousand, endTen, endHundred, endThousand;

	int tenBubbleArray[10];
	int hundredBubbleArray[100];
	int thousandBubbleArray[1000];

	for (int i = 0; i < 10; i++)
	{
		tenBubbleArray[i] = tenArray[i];
	}

	for (int i = 0; i < 100; i++)
	{
		hundredBubbleArray[i] = hundredArray[i];
	}

	for (int i = 0; i < 1000; i++)
	{
		thousandBubbleArray[i] = thousandArray[i];
	}

	startTen = clock();
	bubbleSort(tenBubbleArray, 10);
	endTen = clock();

	startHundred = clock();
	bubbleSort(hundredBubbleArray, 100);
	endHundred = clock();

	startThousand = clock();
	bubbleSort(thousandBubbleArray, 1000);
	endThousand = clock();

	cout << endl;

	cout << "Ten Array Sorted using Bubble sort algorithm" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << tenBubbleArray[i] << " ";
	}

	cout << endl;

	cout << "Hundred Array Sorted using Bubble sort algorith" << endl;

	for (int i = 0; i < 100; i++)
	{
		cout << hundredBubbleArray[i] << " ";
	}

	cout << endl;

	cout << "Thousand Array Sorted using Bubble sort algorith" << endl;

	for (int i = 0; i < 1000; i++)
	{
		cout << thousandBubbleArray[i] << " ";
	}

	cout << endl;

	cout << "Times: " << endl;

	cout << "Ten: " << (endTen - startTen) << " Milliseconds" << endl;

	cout << "Hundred: " << (endHundred - startHundred) << " Milliseconds" << endl;

	cout << "Thousand: " << (endThousand - startThousand) << " Milliseconds" << endl;
}

void selectionSort(int arrayToSort[], int arraySize)
{
	
	for (int i = 0; i < arraySize - 1; i++)
	{
		int lowestNumber = arrayToSort[i];
		int lowestIndex = i;
		for (int j = i; j < arraySize; j++)
		{
			if (arrayToSort[j] < lowestNumber)
			{
				lowestNumber = arrayToSort[j];
				lowestIndex = j;
			}
		}

		if (lowestIndex != i)
		{
			swap(i, lowestIndex, arrayToSort);
		}
	}
}

void printSelectionSort()
{
	clock_t startTen, startHundred, startThousand, endTen, endHundred, endThousand;

	int tenSelectionArray[10];
	int hundredSelectionArray[100];
	int thousandSelectionArray[1000];

	for (int i = 0; i < 10; i++)
	{
		tenSelectionArray[i] = tenArray[i];
	}

	for (int i = 0; i < 100; i++)
	{
		hundredSelectionArray[i] = hundredArray[i];
	}

	for (int i = 0; i < 1000; i++)
	{
		thousandSelectionArray[i] = thousandArray[i];
	}

	startTen = clock();
	selectionSort(tenSelectionArray, 10);
	endTen = clock();

	startHundred = clock();
	selectionSort(hundredSelectionArray, 100);
	endHundred = clock();

	startThousand = clock();
	selectionSort(thousandSelectionArray, 1000);
	endThousand = clock();

	cout << endl;

	cout << "Ten Array Sorted using Bubble sort algorithm" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << tenSelectionArray[i] << " ";
	}

	cout << endl;

	cout << "Hundred Array Sorted using Bubble sort algorith" << endl;

	for (int i = 0; i < 100; i++)
	{
		cout << hundredSelectionArray[i] << " ";
	}

	cout << endl;

	cout << "Thousand Array Sorted using Bubble sort algorith" << endl;

	for (int i = 0; i < 1000; i++)
	{
		cout << thousandSelectionArray[i] << " ";
	}

	cout << endl;

	cout << "Times: " << endl;

	cout << "Ten: " << (endTen - startTen) << " Milliseconds" << endl;

	cout << "Hundred: " << (endHundred - startHundred) << " Milliseconds" << endl;

	cout << "Thousand: " << (endThousand - startThousand) << " Milliseconds" << endl;
}

void swap(int indexOne, int indexTwo, int arrayToSwap[])
{
	int one = arrayToSwap[indexOne];

	arrayToSwap[indexOne] = arrayToSwap[indexTwo];

	arrayToSwap[indexTwo] = one;
}

int main()
{
	srand(time(0));

	int choice;

	bool exit = false;

	cout << "Ten Array" << endl;

	for (int i = 0; i < 10; i++)
	{
		tenArray[i] = (rand() % 1000);
		cout << tenArray[i] << " ";
	}

	cout << endl;

	cout << "Hundred Array" << endl;

	for (int i = 0; i < 100; i++)
	{
		hundredArray[i] = (rand() % 1000);
		cout << hundredArray[i] << " ";
	}

	cout << endl;

	cout << "Thousand Array" << endl;

	for (int i = 0; i < 1000; i++)
	{
		thousandArray[i] = (rand() % 1000);
		cout << thousandArray[i] << " ";
	}

	while (!exit)
	{

		cout << "How would you like to sort?" << endl;
		cout << "1: Standard" << endl;
		cout << "2: Bubble" << endl;
		cout << "3: Selection" << endl;
		cout << "4: Exit" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			normalSorting();
			break;
		}
		case 2:
		{
			printBubbleSort();
			break;
		}
		case 3:
		{
			printSelectionSort();
			break;
		}
		case 4:
		{
			exit = true;
			break;
		}
		}
		cin.ignore();
	}

}
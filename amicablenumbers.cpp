#include <iostream>
#include <cmath>
using namespace std;
int outCountDivs, outSumDivs;
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);




int main()
{
	int num = 2,M=0;
	cout << "Please enter a positive integer: ";
	cin >> M;
	for (num=2; num < M; num++)
	{
		outCountDivs = 0;
		outSumDivs = 0;
		//cout << "Num: " << num << endl;
		analyzeDividors(num, outCountDivs, outSumDivs);
		if (isPerfect(num))
		{
			cout << num << " is Perfect\n";
			//cout << "outSumDivs: " << outSumDivs << endl;
		}
		//cout << "Number of Divs:" << outCountDivs << " Sum of Divs:" << outSumDivs << endl;
		for (int j=num+1; j <=M; j++)

		{
			int outCountDivs2 = 0;
			int outSumDivs2 = 0;
			//cout << "Num: " << num << endl;
			analyzeDividors(j, outCountDivs2, outSumDivs2);
			if (outSumDivs2==num && outSumDivs==j)
			{
				cout << endl << j << " and " <<  num << " are an amicable pair. "  ;
			}
			//cout << "Number of Divs:" << outCountDivs << " Sum of Divs:" << outSumDivs << endl;
		
		}
	}
	return 0;
}
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs)

{
	int i = 1;
	for (int i = 1; i <= sqrt(num); ++i)
	{
		int num1 = num % i;
		int num2 = num / i;
		int root = sqrt(num);
		if (num1 == 0 && i*i != num)
		{
			//cout << i  << " ";
			outCountDivs++;
			outSumDivs += i;


		}
	}
	for (int i = 1; i <= sqrt(num); ++i)
	{
		int num1 = num % i;
		int num2 = num / i;
		int root = sqrt(num);


		if (num % 1 == 0 && i*i == num)
		{
			//cout << i << " ";
			outCountDivs++;
			outSumDivs+= i;
		}


	}
			for (int i = sqrt(num); i > 0; --i)
			{ 
				int num1 = num % i;
				int num2 = num / i;
				int root = sqrt(num);
			if (num1 == 0 && i*i != num &&num2 !=num)
			{
			//	cout << num2 << " ";
				outCountDivs++;
				outSumDivs+=num2;
			}

	}
		

			



	
}
bool isPerfect(int num)
{
	if (outSumDivs == num)
		return true;
	else return false;
}

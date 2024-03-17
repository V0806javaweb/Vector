#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[3] = { 2,14,999 };
	vector<int> iiva, iva, ivb = { 3,1,2 }, ivc({ 77,12,0 }), tvd(arr, arr + 2);//2,14
	iva.push_back(99);
	iva.push_back(100);
	iiva = iva;
	//vector<int>::iterator it = auto it
	for (vector<int>::iterator it = ivb.begin(); it != ivb.end(); ++it)
		cout << *it << " ";
	cout << endl;

	ivc.resize(5, 7);//沒有初值的才會填入7
	for (auto& v : ivc)
		cout << v << " ";
	cout << endl;

	auto it = tvd.begin();
	for (it; it != tvd.end(); ++it)
		cout << *it << " ";
	cout << endl;
	cout << ivb.size()<<" "<<ivb[0];
}
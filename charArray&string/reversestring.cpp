#include <bits/stdc++.h>
using namespace std;

string reverseStr(string& temp){
	int len = temp.length();
	int n = len - 1;
	int i = 0;
	while(i<=n) {
		swap(temp[i++], temp[n--]);
	}
	return temp;
}

void checkSpace(string& str)
{
	//T.C is O(n)
	//S.C is O(1)

	string wtemp;//word temp
	string mtemp;//main temp
	for(int i=0; i<=str.length(); i++) {
		if(str[i] != ' '){
			wtemp.push_back(str[i]);
		}
		if(str[i]==' '){
			string qtemp = reverseStr(wtemp);
			mtemp.append(qtemp);
			mtemp.push_back(' ');
			wtemp.clear();
		}
		if(str[i]=='\0'){
			string qtemp = reverseStr(wtemp);
			mtemp.append(qtemp);
		}
	}
	str = mtemp;
}

int main()
{
	string str = "My name is kishan";
	cout << "input is:- " << str << endl;
	checkSpace(str);
	cout << "output is:- " << str << endl;
	return 0;
}
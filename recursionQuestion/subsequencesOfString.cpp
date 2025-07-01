#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
	//base case
	if(index >= str.length()) {
		if(output.length() > 0) {
			ans.push_back(output);
			cout << "if ans:- ";
			for(string i:ans) {
				cout << i << " ";
			}cout << endl;
		}
		return ;
	}

	//exclude
	cout << "o/p:- before 1st " << output << ' '  << index << endl;
	solve(str, output, index+1, ans);

	cout << "o/p:- after 1st rc & before 2nd" << output << ' ' << index << endl;

	//include
	char element = str[index];
	output.push_back(element);
	solve(str, output, index+1, ans);

	cout << "o/p:- after 2nd " << output << ' ' << index << endl;
	cout << "ans:- ";
	for(string i:ans) {
		cout << i << " ";
	}cout << endl;
}

vector<string> subsequences(string str){

	vector<string> ans;
	string output = "";
	int index = 0;
	solve(str, output, index, ans);
	return ans;
	
}

int main() {
	string str = "abc";
	vector<string> ans = subsequences(str);

	cout << "\n final ans:-\t";
	for(string i:ans) {
		cout << i << " ";
	}cout << endl;
	
	cout << ans.size() << endl;
	return 0;
}
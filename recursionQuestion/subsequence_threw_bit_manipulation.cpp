// https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16&leftPanelTabValue=SUBMISSION

vector<string> subsequences(string str){
	int n = str.length();
	vector<string> ans;
	int power = pow(2,n);

	for(int i=0 ; i<power ; i++){
		string output = "";
		int temp = i;

		// Mapping Bits with Index of String
		for(int j=0 ; j<n ; j++){
			if(temp & 1){
				output.push_back(str[j]);
			}
			temp = temp >> 1;
		}

		if(output.length() > 0){
			ans.push_back(output);
		}
	}
	
	return ans;
}

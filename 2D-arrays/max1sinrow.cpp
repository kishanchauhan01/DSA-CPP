class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int r = 0;
	    int c = m-1;
	    int index = -1;
	    
	    while(r<n && c>=0) {
	        if(arr[r][c] == 1) {
	            index = r;
	            c--;
	        }
	        else{
	            r++;
	        }
	    }
	    return index;
	}

};
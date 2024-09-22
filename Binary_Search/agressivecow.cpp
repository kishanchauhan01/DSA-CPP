    bool ispossble(vector<int> &stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<stalls.size(); i++) {
        if(stalls[i]-lastPos >= mid) {
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;

}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int ans = -1;
    int maxi = -1;
    for(int i=0; i<stalls.size(); i++) {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;

    int mid = s + (e-s)/2;

    while(s<=e) {
        if(ispossble(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
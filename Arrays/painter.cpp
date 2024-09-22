bool isPossible(vector<int> &boards, int k, int mid) {
    int sumboard = 0;
    int painter = 1;

    for(int i=0; i<boards.size(); i++) {
        if(sumboard + boards[i] <= mid)
        {
            sumboard += boards[i];
        }
        else{
            painter++;
            if(painter > k || boards[i] > mid){
                return false;
            }
            sumboard = boards[i];
        }
    }
    return true;

}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for(int i=0; i<boards.size(); i++) {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(isPossible(boards, k, mid)) 
        {
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
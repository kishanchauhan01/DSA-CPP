bool isPossible(vector<int> &boards, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < boards.size(); i++)
    {
        if (boards[i] + pageSum < mid)
        {
            pageSum += boards[i];
        }
        else
        {
            studentCount++;
            if (studentCount > k || boards[i] > mid)
            {
                return false;
            }   
            pageSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{

    int s = 0, sum = 0, ans = -1;

    for (int i = 0; i < boards.size(); i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(boards, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}


    //base case
    if(i == arr.size()-1)
        return true;
    
    if(painterCount > k || arr[i] > mid)
        return false;
    
    //Recursive call
    if(arr[i] + boardSum < mid) {
        boardSum += arr[i];
        return isPossible(arr, k, mid, painterCount, boardSum, i+1);
    }
    else{
        boardSum = arr[i];
        return isPossible(arr, k, mid, painterCount+1, boardSum, i+1);
    }
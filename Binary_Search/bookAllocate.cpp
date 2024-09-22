// https://www.naukri.com/code360/problems/allocate-book_1090540

bool isPossible(vector<int>& arr, int n, int m, int mid) {

  int studentCount = 1;
  int pageSum = 0;

  for(int i=0; i<n; i++) {
    if(pageSum + arr[i] <= mid)
    {
      pageSum += arr[i];
    }
    else{
      studentCount++;
      if(studentCount > m || arr[i] > mid) {//because if 2 student than not give the page no. to the third and if page no. > mid e.g- 30>20. then condtion wrong
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}

int findPages(vector<int>& arr, int n, int m) {
  int s = 0;
  int sum = 0;
  for(int i=0; i<n; i++) {
    sum += arr[i];
  }
  int e = sum;
  int ans = -1;
  int mid = s + (e-s)/2;

  while(s<=e) {
    if(isPossible(arr, n, m, mid))
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
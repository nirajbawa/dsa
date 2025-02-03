
bool isPossible(vector<int>& arr, int n, int m, int mid)
{
	int st = 1;
	int sum = 0;

	for(int i = 0; i<n; i++)
	{
		sum += arr[i];
		if(sum>mid)
		{
			st++;
			sum = arr[i];
		}
	}

	return st<=m;
}


int findPages(vector<int>& arr, int n, int m) {
    int s = INT_MIN;
	int sum = 0;

	for(int i = 0; i<n; i++)
	{
		s = max(s, arr[i]);
	}


	for(int i = 0; i<n; i++)
	{
		sum += arr[i];
	}
	int e = sum;
	int ans = -1;
	int mid = s+(e-s)/2;

	if(m>n)
	{
		return -1;
	}

	while(s<=e)
	{
		if(isPossible(arr, n, m, mid))
		{
			ans = mid;
			e = mid-1;
		}
		else{
			s = mid+1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
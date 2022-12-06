/*Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array.

If the key is not present, return [-1, -1].*/

vector<int> searchRange(vector<int> &arr, int key)
{
	 int first = -1,last = -1;
	 for (int i = 0; i < arr.size(); i++)
	 {
	    if (first == -1)
		{
			if(arr[i] == key)
		   {
	          first = i;
	       }
		}
	    if (arr[i] == key) 
		{
	       last = i;
	    }
	 }
	 vector<int> index = {first, last};
	 return index;
}
/*Given a sorted array containing distinct integers and a number 'key', find the index of the key in the array.
If the key is not present, return the index at which it would be inserted considering that we need to maintain the sort order.*/

int getInsertPosition(vector<int> &arr, int key)
{
    int i ,c =-1;
    for(i=0; i< arr.size(); i++)
    {
        if(arr[i] == key)
        {
           return i;
           
        }
        if(key > arr[i])
        {
           c= i;
        }
    }
	return c+1; 
}
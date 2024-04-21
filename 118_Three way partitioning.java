//User function Template for Java

class Solution{
    public void swap(int arr[],int i,int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    public void threeWayPartition(int array[], int a, int b)
    {
        int l  = 0;
        int mid = 0;
        int h = array.length-1;
        while(mid <= h){
            if(array[mid] < a){
                swap(array,l,mid);
                l++;
                mid++;
            }else if(array[mid] > b){
                swap(array,h,mid);
                h--;
            }else mid++;
        }
    }
}

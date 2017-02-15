/*
Lena developed a sorting algorithm described by 
the following pseudocode:

lena_sort(array nums) {
    if (nums.size <= 1) {
        return nums;
    }
    pivot = nums[0];
    array less;
    array more;
    for (i = 1; i < nums.size; ++i) {
    	// Comparison
        if (nums[i] < pivot) {
            less.append(nums[i]);
        }
        else {
            more.append(nums[i]);
        }
    }
    sorted_less = lena_sort(less);
    sorted_more = lena_sort(more);
    ans = sorted_less + pivot + sorted_more;
    
    return ans;
}

We consider a comparison to be any time some nums[i] 
is compared with pivot.

You must solve q queries where each query i consists 
of some len_i and c_i. 
For each query, construct an array of len_i distinct elements in the
 inclusive range between 1 and 10^9 that will be sorted by 
 lena_sort in exactly c_i comparisons, 
 then print each respective element of the unsorted array as
  a single line of len_i space-separated integers; 
  if no such array exists, print -1 instead.

*/



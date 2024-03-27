int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {};///全部補0
    int best = 0;///出現最多次數的是best次
    for(int i = 0;i<numsSize;i++){

        int now=nums[i];
        a[now] ++;
        if(a[now]>best) best=a[now];

    };
    int ans = 0;
    for(int i=1; i<=100;i++){

        if(a[i]==best) ans +=a[i];

    };
    return ans;
}
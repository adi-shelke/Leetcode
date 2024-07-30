/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums:number[]) {
    let sum =0
    let max =-Infinity;
    for(let num of nums){
        sum+=num;
        max = Math.max(max,sum)
        if(sum<0) sum =0
    }
    return max
};
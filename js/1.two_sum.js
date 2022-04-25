/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var twoSum = function(nums, target) {
     /*
    let map = new Map();
    for (let i = 0; i < nums.length; i++) {
        if (map.has(target - nums[i]))
            return [map.get(target - nums[i]), i];
        else
            map.set(nums[i], i);
    }
	return [];
    */
   let map = {};
   for (let i = 0; i < nums.length; i++) {
       if (map[target - nums[i]] !== undefined)
           return [map[target - nums[i]], i];
       else
           map[nums[i]] = i;
   }
   return [];
};

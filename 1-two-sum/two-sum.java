import java.util.HashMap;
import java.util.Map;


class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> index = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int compliment = target - nums[i];

            if(index.containsKey(compliment)){
                return new int[]{index.get(compliment),i};
            }

            index.put(nums[i],i);
        }
        return new int[]{};
        

    }
}
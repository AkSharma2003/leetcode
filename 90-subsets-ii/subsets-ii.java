class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        findSubsets(0, nums, new ArrayList<>(), result);
        return result;
    }

    public void findSubsets(int start, int[] nums, List<Integer> list,List<List<Integer>> result) {
        result.add(new ArrayList<>(list));
        for (int i = start; i < nums.length; i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }
            list.add(nums[i]);
            findSubsets(i + 1, nums, list, result);
            list.remove(list.size() - 1);
        }
    }
}
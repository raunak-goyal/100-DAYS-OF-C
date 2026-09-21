class Solution {
    public int[] searchRange(int[] nums, int target) {

        int first = -1;
        int last = -1;

        // Find FIRST occurrence
        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;       // keep searching LEFT
            }
            else if (nums[mid] < target) {
                left = mid + 1;        // target is RIGHT
            }
            else {
                right = mid - 1;       // target is LEFT
            }
        }

        // Find LAST occurrence
        left = 0;
        right = nums.length - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;        // keep searching RIGHT
            }
            else if (nums[mid] < target) {
                left = mid + 1;        // target is RIGHT
            }
            else {
                right = mid - 1;       // target is LEFT
            }
        }

        return new int[]{first, last};
    }
}
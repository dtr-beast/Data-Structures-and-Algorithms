impl Solution {
    pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
        let mut lo: usize = 0;
        let mut hi: usize = nums.len() as usize;
        let mut mid: usize = 0;
        while lo < hi {
            mid = lo + (hi - lo) / 2;
            if nums[mid] == target {
                mid as i32;
            } else if nums[mid] > target {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        lo as i32
    }
}
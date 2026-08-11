class Solution(object):
    def missingInteger(self, nums):

        max_sequence = 0
        temp = 0

        for i, num in enumerate(nums):

            # No previous number
            if i != 0:

                # Condition to check if it is sequential
                if num - nums[i - 1] == 1:
                    temp += num

                else:
                    break  

            else: # i == 0
                temp += num

        max_sequence = max(max_sequence, temp)

        greater_or_equal_max = []
        for num in nums:
            if num >= max_sequence:
                greater_or_equal_max.append(num)

        result = max_sequence
        while True:
            if result not in greater_or_equal_max:
                return result
            result += 1

# Tests
sol = Solution()
print(sol.missingInteger([3,4,5,1,12,14,13]))


        
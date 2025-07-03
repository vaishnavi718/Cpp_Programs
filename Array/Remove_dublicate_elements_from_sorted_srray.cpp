#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution solution;
    
    // Example input
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    // Call the function
    int k = solution.removeDuplicates(nums);

    // Print output
    cout << "Number of unique elements: " << k << endl;
    cout << "Modified array (first " << k << " elements): ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}


/*
Explanation and dry run
case 1: array with dublicate elements
nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]

You need to:
1)Remove duplicates in-place (modify the same array).
2)Keep only unique elements at the beginning of the array.
3)Return how many unique elements are there (k).

🧠 Idea: Two Pointers
We’ll use:
i: points to the last unique element found.
j: moves through the array checking for new unique elements.

Start with:

i = 0 → position to write next unique number

Loop j from 1 to n-1

Now go through the loop:

j = 1: nums[j] == nums[i] → both are 0, so skip

j = 2: nums[j] = 1, nums[i] = 0 → different!

So move i++ to 1

Write nums[i] = nums[j] → now nums[1] = 1

Array becomes: [0, 1, 1, 1, 1, 2, 2, 3, 3, 4]

j = 3: nums[j] == nums[i] → skip

j = 4: nums[j] == nums[i] → skip

j = 5: nums[j] = 2, nums[i] = 1 → different!

Move i = 2, write nums[2] = 2

Array: [0, 1, 2, 1, 1, 2, 2, 3, 3, 4]

j = 6: duplicate → skip

j = 7: nums[j] = 3, nums[i] = 2 → different!

i = 3, write nums[3] = 3

Array: [0, 1, 2, 3, 1, 2, 2, 3, 3, 4]

j = 8: duplicate → skip

j = 9: nums[j] = 4, nums[i] = 3 → different!

i = 4, write nums[4] = 4

Final array: [0, 1, 2, 3, 4, ...]

✅ Final Result:
i = 4, so return i + 1 = 5

First 5 elements of nums are: [0, 1, 2, 3, 4] (unique)

case 2: No Dublicate

🔁 Step-by-Step Execution:
1. Start:
We check if the array is empty — it’s not.
We initialize:
int i = 0;
This means: the last unique element is at position 0, which is nums[0] = 1.

Now we begin the loop from:
for (int j = 1; j < nums.size(); j++)
So j starts from index 1.

2. First Iteration (j = 1):
nums[j] = 2

nums[i] = 1

They're different → this means 2 is a new unique element.

So we increment i to 1

Set nums[i] = nums[j] → nums[1] = 2

But it's already 2, so nothing changes.

3. Second Iteration (j = 2):
nums[j] = 3

nums[i] = 2

They're different → 3 is a new unique value.

Increment i to 2

Set nums[i] = nums[j] → nums[2] = 3

Already 3 → no change.

4. Third Iteration (j = 3):
nums[j] = 4

nums[i] = 3

Different → 4 is unique.

i = 3

nums[3] = 4 → no change.

5. Fourth Iteration (j = 4):
nums[j] = 5

nums[i] = 4

Different → 5 is unique.

i = 4

nums[4] = 5 → already 5.

✅ End of Loop:
i = 4, so we return i + 1 = 5

This means: there are 5 unique elements.

🟩 Final Result:
nums stays as [1, 2, 3, 4, 5]

Return value: 5



*/
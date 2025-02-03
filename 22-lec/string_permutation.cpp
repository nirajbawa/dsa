class Solution
{
public:
    bool check_equal(int count1[], int count2[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (count1[i] != count2[i])
            {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0};

        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;
        int window_size = s1.length();
        int count2[26] = {0};

        while (i < window_size && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if (check_equal(count1, count2))
        {
            return true;
        }

        while (i < s2.length())
        {
            char new_char = s2[i];
            int index = new_char - 'a';
            count2[index]++;

            char old_char = s2[i - window_size];
            index = old_char - 'a';
            count2[index]--;
            i++;
            if (check_equal(count1, count2))
            {
                return true;
            }
        }
        return false;
    }
};

// https://leetcode.com/problems/permutation-in-string/
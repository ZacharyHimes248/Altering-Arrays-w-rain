class Solution {
public:
    int trap(vector<int>& height)
    {
     int count = 0;
     int i = 0;
     int size = height.size();
      while(i < size)
       {

        if(height[0] == 0)
        {
            i = 2;
        }
        else
        {
          i = 1;
        }

            int last = height[i -1];
            int future = height[i + 1];
            int current = height[i];
            if(current > last)
            {
                i++;
            }
           if(current <= last)
           {
               count++;
               height[current] = last;
               i++;
           }

        }
        return count;
    }
};

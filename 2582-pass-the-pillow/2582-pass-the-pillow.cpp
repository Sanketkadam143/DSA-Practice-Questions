class Solution {
public:
    int passThePillow(int n, int time) {
        int position = 1;
        bool going_right = true;

        for (int i = 0; i < time; i++) {
            if (going_right) {
                position++;
            } else {
                position--;
            }

            if (position == 1 || position == n) {
                going_right = !going_right;
            }
        }

        return position;
    }
};

class Solution {
public:
    bool checkOverlap(int radius, int xC, int yC, int x1, int y1, int x2, int y2) {
        int x = clamp(xC, x1, x2) - xC;
        int y = clamp(yC, y1, y2) - yC;

        return x*x + y*y <= radius*radius;
    }
};
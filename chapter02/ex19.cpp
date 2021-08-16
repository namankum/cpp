#include <iostream>
using namespace std;
#define WIDTH 9
#define HEIGHT 3
int main()
{
    int table[HEIGHT][WIDTH];
    int r, c;
    for (r = 0; r < HEIGHT; r++)  //행이되고
    {
        for (c = 0; c < WIDTH; c++) //안쪽이니까열이되고 
        {
            table[r][c] = (r + 1) * (c + 1);
        }
    }
    for (r = 0; r < HEIGHT; r++)
    {
        for (c = 0; c < WIDTH; c++)
        {
            cout << table[r][c] << ", ";
        }
        cout << endl;
    }
    return 0;

    // 앞에꺼가 높은차원 행이 되고 뒤에꺼 낮은 차원 열이 된다
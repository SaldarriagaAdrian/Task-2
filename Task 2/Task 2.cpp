
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    long long R;
    cout << "Lenght: ";
    cin >> R; 

    long long points{ 0 };

    
    for (long long x = 1; x <= R; ++x) {
        
        long long y_max = sqrt(R * R - x * x);
        points += y_max;
    }
        
    long long total_puntos = points * 4;
        
    total_puntos += (4 * R) + 1;
        
    cout << total_puntos << "\n";

    return 0;
}

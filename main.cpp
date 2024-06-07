#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

namespace Problem1 {
    void fahrenheit_celcius(double& varToConvert) {
        varToConvert = (varToConvert - 32) * 5 / 9;
    }

    void execute() {
        double farenheit{};
        std::cin >> farenheit;
        fahrenheit_celcius(farenheit);
        std::cout << std::setprecision(4) << farenheit << '\n';
    }
}

namespace Problem2 {
    void execute() {
        int num{};
        std::vector<int> nums {};

        while (std::cin >> num) {
            nums.push_back(num);
        }

        for (int i = 0; i < nums.size(); ++i) {
            std::cout << (nums[i] % 2 == 0 ? 2 : 1) << ' ';
        }

        std::cout << '\n';
    }
}

namespace Problem3 {
    void func(int* x, int* y) {
        *y = 7 * (*x) - 5;
    }

    void execute() {
        int x{};
        int y{};

        std::cin >> x;
        func(&x, &y);
        std::cout << x << '\n' << y << '\n';
    }
}

namespace Problem4 {
    void execute() {
        int n{};

        std::cin >> n;

        std::map<int, int> occurences {};

        for (int i = 0; i < n; ++i) {
            int temp{};
            std::cin >> temp;

            if (occurences[temp]) {
                ++occurences[temp];
            } else {
                occurences[temp] = 1;
            }
        }

        int res{};

        std::map<int, int>::iterator it;
        for (it = occurences.begin(); it != occurences.end(); ++it) {
            res += (it->second - 1);
        }

        std::cout << res << '\n';
    }
}

namespace Problem5 {
    void execute() {
        int n{};
        int max1{};
        int max2{};

        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                std::cin >> max1;
            }
            else {
                int temp{};
                std::cin >> temp;
                if (temp > max1) max1 = temp;
            }
        }

        

        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                std::cin >> max2;
            }
            else {
                int temp{};
                std::cin >> temp;
                if (temp > max2) max2 = temp;
            }
        }

        std::cout << max1 * max2 << std::endl;
    }
}

int main() {
    Problem1::execute();
    Problem2::execute();
    Problem3::execute();
    Problem4::execute();
    Problem5::execute();

    return 0;
}

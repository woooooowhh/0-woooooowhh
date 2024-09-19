#include <iostream>
#include <string>

struct Result
{
    int min;
    int mid;
    int max;
};

bool check(const Result &result, int a, int b, int c)
{
    bool correct = result.max >= result.mid && result.mid >= result.min;

    // 判断输出是否来自输入的三个数
    if (result.min == a)
    {
        if (result.max == b)
        {
            correct = correct && result.mid == c;
        }
        else if (result.max == c)
        {
            correct = correct && result.mid == b;
        }
    }
    else if (result.min == b)
    {
        if (result.max == a)
        {
            correct = correct && result.mid == c;
        }
        else if (result.max == c)
        {
            correct = correct && result.mid == a;
        }
    }
    else if (result.min == c)
    {
        if (result.max == a)
        {
            correct = correct && result.mid == b;
        }
        else if (result.max == b)
        {
            correct = correct && result.mid == a;
        }
    }

    return correct;
}

void CompareThreeNumbers(int a, int b, int c, Result &result);

int main(int argc, char *argv[])
{
    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    int c = std::stoi(argv[3]);

    std::cout << "You input three numbers: " << a << ", " << b << ", " << c << std::endl;

    Result result = Result{a, b, c};

    CompareThreeNumbers(a, b, c, result);

    std::cout << "Your result is:" << std::endl;

    std::cout << "  min: " << result.min << std::endl;
    std::cout << "  mid: " << result.mid << std::endl;
    std::cout << "  max: " << result.max << std::endl;

    bool pass = check(result, a, b, c);

    if (pass)
    {
        std::cout << "Congratulations! You pass the test." << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Sorry, you didn't pass the test." << std::endl;
        return 1;
    }
}

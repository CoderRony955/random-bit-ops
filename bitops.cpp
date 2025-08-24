#include "bitops.h"
#include <string>
#include <cmath>

std::vector<std::string> string_to_bool_vector(std::string s)
{
    std::vector<std::string> vec;
    for (char c : s)
    {
        if (c == '1')
        {
            vec.push_back("true");
        }
        else if (c == '0')
        {
            vec.push_back("false");
        }
    }
    return vec;
}

std::vector<int> add_two_in_bit(std::string s)
{
    std::vector<int> v;
    for (char i : s)
    {
        v.push_back((i - '0') + 2);
    }
    return v;
}

std::vector<int> add_num_in_bit(std::string s, int num)
{
    std::vector<int> result;
    for (char i : s)
    {
        result.push_back((i - '0') + num);
    }
    return result;
}

std::vector<int> to_bin(int value)
{
    std::vector<int> binary_rep;
    while (value != 0)
    {
        int bit = value % 2;
        binary_rep.push_back(bit);

        value /= 2;
    }

    // performing reverse loop on binary_rep vector and adding all values in new reversed vector
    std::vector<int> reversed;
    for (int i = binary_rep.size() - 1; i >= 0; i--)
    {
        reversed.push_back(binary_rep[i]);
    }

    return reversed;
}

int ascii(char value)
{
    return (int)value;
}

std::vector<int> digits_ascii_values()
{
    std::vector<int> ascii_values;
    std::string values = "0123456789";
    for (char i : values)
    {
        ascii_values.push_back((int)i);
    }

    return ascii_values;
}

std::vector<std::string> happy_bit(std::string s)
{
    std::vector<std::string> result;
    for (char i : s)
    {
        if (i == '1')
        {
            result.push_back("happy");
        }
        else if (i == '0')
        {
            result.push_back("sad");
        }
    }
    return result;
}

int bin_to_dec(std::string bin)
{
    std::vector<int> sum;
    for (int i = bin.size() - 1; i >= 0; i--)
    {
        char charconv = bin[i];
        sum.push_back((charconv - '0') * (pow(2, bin.size() - 1 - i)));
    }

    int result = 0;
    for (auto j : sum)
    {
        result += j;
    }
    return result;
}
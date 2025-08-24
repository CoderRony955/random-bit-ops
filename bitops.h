#ifndef BITOPS_H
#define BITOPS_H

#include <vector>
#include <string>

std::vector<std::string> string_to_bool_vector(std::string s);
std::vector<int> add_two_in_bit(std::string s);
std::vector<int> to_bin(int value); 
std::vector<int> add_num_in_bit(std::string s, int num);
int ascii(char value);
std::vector<int> digits_ascii_values();
std::vector<std::string> happy_bit(std::string s);
int bin_to_dec(std::string bin);


#endif  
#pragma once

#ifdef REDUCER1_EXPORTS
#define REDUCER1_API __declspec(dllexport)
#else
#define REDUCER1_API __declspec(dllimport)
#endif

#include <string>
#include <unordered_map>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <algorithm> // for std::sort




class REDUCER1_API  Reducer1 {
public:
    Reducer1(const std::string& temp_dir);
    std::unordered_map<std::string, int> reduce();

private:
    std::string temp_dir_;
};
#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUserConsoleVariableBuilds {
    Editor = 0,
    Debug = 1,
    Development = 2,
    Test = 3,
    Shipping = 4,
    EUserConsoleVariableBuilds_MAX = 5,
};
#pragma pack(pop)

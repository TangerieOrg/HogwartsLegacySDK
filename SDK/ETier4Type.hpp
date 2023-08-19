#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETier4Type : uint8_t {
    T4Student = 0,
    T4Townsperson = 1,
    T4DarkWizard = 2,
    T4Goblin = 3,
    T4_Max = 4,
    ETier4Type_MAX = 5,
};
#pragma pack(pop)

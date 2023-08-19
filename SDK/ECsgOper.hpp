#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ECsgOper {
    CSG_Active = 0,
    CSG_Add = 1,
    CSG_Subtract = 2,
    CSG_Intersect = 3,
    CSG_Deintersect = 4,
    CSG_None = 5,
    CSG_MAX = 6,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAblCollisionFilterSort : uint8_t {
    AblFitlerSort_Ascending = 0,
    AblFilterSort_Descending = 1,
    EAblCollisionFilterSort_MAX = 2,
};
#pragma pack(pop)

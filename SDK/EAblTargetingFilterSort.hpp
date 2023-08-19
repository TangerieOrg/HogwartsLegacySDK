#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAblTargetingFilterSort : uint8_t {
    AblTargetFilterSort_Ascending = 0,
    AblTargetFilterSort_Descending = 1,
    AblTargetFilterSort_MAX = 2,
};
#pragma pack(pop)

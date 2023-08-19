#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SkeletonTypeIDs : uint8_t {
    SK_TYPE_ADULTFEMALE = 0,
    SK_TYPE_ADULTMALE = 1,
    SK_TYPE_CHILDFEMALE = 2,
    SK_TYPE_CHILDMALE = 3,
    SK_TYPE_DEATHMINION = 4,
    SK_TYPE_ELFANY = 5,
    SK_TYPE_GOBLINANY = 6,
    SK_TYPE_TROLLANY = 7,
    SK_TYPE_UNKNOWN = 8,
    SK_TYPE_COUNT = 9,
    SK_TYPE_MAX = 10,
};
#pragma pack(pop)

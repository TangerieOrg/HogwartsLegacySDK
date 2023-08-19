#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMissionLine : uint8_t {
    Main = 0,
    Side = 1,
    Assignment = 2,
    Relationship = 3,
    Utility = 4,
    Skip = 5,
    DevelopmentOnly = 6,
    EMissionLine_MAX = 7,
};
#pragma pack(pop)

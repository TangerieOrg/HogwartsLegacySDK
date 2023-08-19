#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESpeedTreeWindType : uint8_t {
    STW_None = 0,
    STW_Fastest = 1,
    STW_Fast = 2,
    STW_Better = 3,
    STW_Best = 4,
    STW_Palm = 5,
    STW_BestPlus = 6,
    STW_MAX = 7,
};
#pragma pack(pop)

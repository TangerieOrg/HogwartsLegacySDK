#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBrewingState : uint8_t {
    None = 0,
    Brewing = 1,
    Brewed = 2,
    EBrewingState_MAX = 3,
};
#pragma pack(pop)

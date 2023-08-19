#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class PanningRule : uint8_t {
    PanningRule_Speakers = 0,
    PanningRule_Headphones = 1,
    PanningRule_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkPanningRule : int32_t {
    Speakers = 0,
    Headphones = 1,
    EAkPanningRule_MAX = 2,
};
#pragma pack(pop)

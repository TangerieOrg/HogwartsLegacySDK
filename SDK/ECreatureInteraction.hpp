#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureInteraction : uint8_t {
    None = 0,
    Pet = 1,
    Play = 2,
    ECreatureInteraction_MAX = 3,
};
#pragma pack(pop)

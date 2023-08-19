#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractionProject : uint8_t {
    Reactions = 0,
    Creatures = 1,
    NPC = 2,
    EInteractionProject_MAX = 3,
};
#pragma pack(pop)

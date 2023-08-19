#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETickSequencerGroup : uint8_t {
    PreActorTick = 0,
    PrePhysics = 1,
    DuringPhysics = 2,
    PostPhysics = 3,
    PostUpdateWork = 4,
    PostActorTick = 5,
    Invalid = 6,
    ETickSequencerGroup_MAX = 7,
};
#pragma pack(pop)

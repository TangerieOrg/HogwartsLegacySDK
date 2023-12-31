#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EActorUpdateOverlapsMethod : uint8_t {
    UseConfigDefault = 0,
    AlwaysUpdate = 1,
    OnlyUpdateMovable = 2,
    NeverUpdate = 3,
    EActorUpdateOverlapsMethod_MAX = 4,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOverlapEffectsHitPoint : uint8_t {
    Default = 0,
    Instigator = 1,
    InstigatorCenter = 2,
    InstigatorBase = 3,
    InstigatorTop = 4,
    Victim = 5,
    VictimCenter = 6,
    VictimBase = 7,
    VictimTop = 8,
    Intersection = 9,
    EOverlapEffectsHitPoint_MAX = 10,
};
#pragma pack(pop)

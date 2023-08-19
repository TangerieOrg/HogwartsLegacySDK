#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOverlapEffectsAttachment : uint8_t {
    Instigator = 0,
    Victim = 1,
    PreferVictimOverInstigator = 2,
    PreferInstigatorOverVictim = 3,
    EOverlapEffectsAttachment_MAX = 4,
};
#pragma pack(pop)

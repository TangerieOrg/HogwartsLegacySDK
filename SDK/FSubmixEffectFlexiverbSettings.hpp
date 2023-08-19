#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubmixEffectFlexiverbSettings {
    float PreDelay; // 0x0
    float DecayTime; // 0x4
    float RoomDampening; // 0x8
    int32_t Complexity; // 0xc
}; // Size: 0x10
#pragma pack(pop)

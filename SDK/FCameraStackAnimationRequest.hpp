#pragma once
#include <cstdint>
class UAnimSequence;
#pragma pack(push, 1)
struct FCameraStackAnimationRequest {
    UAnimSequence* AnimSequence; // 0x0
    char pad_8[0x18];
}; // Size: 0x20
#pragma pack(pop)

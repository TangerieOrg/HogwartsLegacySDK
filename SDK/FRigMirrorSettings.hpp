#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#pragma pack(push, 1)
struct FRigMirrorSettings {
    EAxis::Type MirrorAxis; // 0x0
    EAxis::Type AxisToFlip; // 0x1
    char pad_2[0x6];
    FString OldName; // 0x8
    FString NewName; // 0x18
}; // Size: 0x28
#pragma pack(pop)

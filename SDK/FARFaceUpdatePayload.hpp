#pragma once
#include <cstdint>
#include "FARSessionPayload.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FARFaceUpdatePayload {
    FARSessionPayload SessionPayload; // 0x0
    FVector LeftEyePosition; // 0x18
    FVector RightEyePosition; // 0x24
    FVector LookAtTarget; // 0x30
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)

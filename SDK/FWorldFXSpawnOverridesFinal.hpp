#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FWorldFXSpawnOverridesFinal {
    char pad_0[0x8];
    FVector Position; // 0x8
    FRotator Rotator; // 0x14
    FVector Scale; // 0x20
    FName AttachName; // 0x2c
    FName UniqueAttachTag; // 0x34
    EAttachLocation::Type AttachLocation; // 0x3c
    bool bIsAttached; // 0x3d
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)

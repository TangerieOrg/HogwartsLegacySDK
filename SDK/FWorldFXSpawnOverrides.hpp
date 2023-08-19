#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "FWorldFXSpawnOverrideTransform.hpp"
#pragma pack(push, 1)
struct FWorldFXSpawnOverrides {
    FWorldFXSpawnOverrideTransform WorldTransform; // 0x0
    char pad_28[0x8];
    FWorldFXSpawnOverrideTransform LocalTransform; // 0x30
    FName AttachName; // 0x58
    FName UniqueAttachTag; // 0x60
    EAttachLocation::Type AttachLocation; // 0x68
    bool bOverride_AttachTo; // 0x69
    bool bOverride_AttachName; // 0x6a
    bool bOverride_UniqueAttachTag; // 0x6b
    bool bOverride_AttachLocation; // 0x6c
    char pad_6d[0x3];
}; // Size: 0x70
#pragma pack(pop)

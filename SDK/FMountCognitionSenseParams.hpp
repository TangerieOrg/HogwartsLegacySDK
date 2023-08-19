#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMountCognitionSenseParams {
    float InteractionRange; // 0x0
    float InteractSenseNearHeightDown; // 0x4
    float InteractSenseFarHeightDown; // 0x8
    float FootprintRadius; // 0xc
    float AutoTargetSenseNearHeightDown; // 0x10
    float AutoTargetSenseFarHeightDown; // 0x14
}; // Size: 0x18
#pragma pack(pop)

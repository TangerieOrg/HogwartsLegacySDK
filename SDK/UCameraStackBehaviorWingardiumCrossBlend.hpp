#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorWingardiumCrossBlend : public UCameraStackBehaviorMultiCrossBlendStandalone {
public:
    UCameraStackSecondaryTargetGetter* Target; // 0x368
    float MinTargetHeight; // 0x370
    float MaxTargetHeight; // 0x374
    float ProbeSize; // 0x378
    ECollisionChannel ProbeChannel; // 0x37c
    char pad_37d[0xb];
    static UCameraStackBehaviorWingardiumCrossBlend* StaticClass();
}; // Size: 0x388
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupAdjustBoneFramingState : public UCameraFixupOperationState {
public:
    char pad_40[0x10];
    UTransformProvider* TargetBone; // 0x50
    UTransformProvider* ReferenceBone; // 0x58
    char pad_60[0x60];
    static UCameraFixupAdjustBoneFramingState* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FAnimNode_AssetPlayerBase.hpp"
class UBlendSpaceBase;
#pragma pack(push, 1)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase {
    float X; // 0x38
    float Y; // 0x3c
    float Z; // 0x40
    float PlayRate; // 0x44
    bool bLoop; // 0x48
    bool bResetPlayTimeWhenBlendSpaceChanges; // 0x49
    char pad_4a[0x2];
    float StartPosition; // 0x4c
    UBlendSpaceBase* BlendSpace; // 0x50
    char pad_58[0x88];
    UBlendSpaceBase* PreviousBlendSpace; // 0xe0
}; // Size: 0xe8
#pragma pack(pop)

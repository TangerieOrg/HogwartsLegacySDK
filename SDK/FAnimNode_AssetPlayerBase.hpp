#pragma once
#include <cstdint>
#include "EAnimGroupRole\Type.hpp"
#include "EAnimSyncGroupScope.hpp"
#include "FAnimNode_Base.hpp"
#pragma pack(push, 1)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base {
    FName GroupName; // 0x10
    EAnimGroupRole::Type GroupRole; // 0x18
    EAnimSyncGroupScope GroupScope; // 0x19
    bool bIgnoreForRelevancyTest; // 0x1a
    char pad_1b[0x1];
    float BlendWeight; // 0x1c
    float InternalTimeAccumulator; // 0x20
    char pad_24[0x14];
}; // Size: 0x38
#pragma pack(pop)

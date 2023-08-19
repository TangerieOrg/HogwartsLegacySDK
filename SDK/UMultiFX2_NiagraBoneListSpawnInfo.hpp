#pragma once
#include <cstdint>
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraBoneListSpawnInfo : public UMultiFX2_NiagraSpawnInfoBase {
public:
    int32_t MaxBoneFX; // 0x30
    bool bRandomBone; // 0x34
    bool bUseLR; // 0x35
    char pad_36[0x2];
    TArray<FName> BoneList; // 0x38
    bool bOptimized; // 0x48
    bool bShowBoneList; // 0x49
    char pad_4a[0x6];
    static UMultiFX2_NiagraBoneListSpawnInfo* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

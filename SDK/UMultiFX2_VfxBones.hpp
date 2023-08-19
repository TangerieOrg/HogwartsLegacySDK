#pragma once
#include <cstdint>
#include "UMultiFX2_Vfx.hpp"
#pragma pack(push, 1)
class UMultiFX2_VfxBones : public UMultiFX2_Vfx {
public:
    int32_t MaxBoneFX; // 0x78
    bool bRandomBone; // 0x7c
    char pad_7d[0x3];
    TArray<FName> BoneList; // 0x80
    static UMultiFX2_VfxBones* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

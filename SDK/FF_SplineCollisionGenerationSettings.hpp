#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "FLinearColor.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
struct FF_SplineCollisionGenerationSettings {
    float CheckIntervalDistance_24_4106B6F4424E5DAEF734FCAFD304BAA2; // 0x0
    float MaxAngleDelta_25_D8AE322D4EF5452DF5C872A53E82711C; // 0x4
    float WallWidth_26_D219267E409761BF29AEA7A5790371B1; // 0x8
    float WallHeight_27_37A10F9C4078806375385188A4B93A20; // 0xc
    bool SplineLoops_28_55DF36D54283610345F2FA8E12AB02FE; // 0x10
    bool WallHiddenInGame_29_2E2FC02A4CEB6861BCD66D8A6D58D918; // 0x11
    char pad_12[0x2];
    FLinearColor WallColor_30_A7F1437B4BD79AE0114E808B5CB03629; // 0x14
    char pad_24[0x4];
    UPhysicalMaterial* PhysicalMaterial_31_F26338BC47D3FF94302EC39AAF13E2DF; // 0x28
    bool GenerateOverlapEvents_32_2EA8D769424B12F982B896B47514DE82; // 0x30
    bool UseCollisionProfile_33_BC4C952C4BE800D1C1BC158F2A3C249B; // 0x31
    char pad_32[0x2];
    FName CollisionProfileName_38_15BDDBBA470F493070BDA48DFD90C12A; // 0x34
    ECollisionEnabled::Type CollisionEnabled_35_59D5462441EA4F553E3410B65EA7DDFD; // 0x3c
    ECollisionChannel ObjectType_36_CB6018094312FCBABB48F9B7126A0D0F; // 0x3d
    char pad_3e[0x52];
}; // Size: 0x90
#pragma pack(pop)

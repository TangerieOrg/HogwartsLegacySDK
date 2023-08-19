#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigUnit_PointSimulation_BoneTarget {
    FName Bone; // 0x0
    int32_t TranslationPoint; // 0x8
    int32_t PrimaryAimPoint; // 0xc
    int32_t SecondaryAimPoint; // 0x10
}; // Size: 0x14
#pragma pack(pop)

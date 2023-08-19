#pragma once
#include <cstdint>
#include "FRigUnit_AnimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase {
    float Year; // 0x8
    float Month; // 0xc
    float Day; // 0x10
    float WeekDay; // 0x14
    float Hours; // 0x18
    float Minutes; // 0x1c
    float Seconds; // 0x20
    float OverallSeconds; // 0x24
}; // Size: 0x28
#pragma pack(pop)

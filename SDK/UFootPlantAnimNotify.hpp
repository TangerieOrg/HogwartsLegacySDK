#pragma once
#include <cstdint>
#include "EFootPlantEnum.hpp"
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UFootPlantAnimNotify : public UAnimNotify {
public:
    FName NotifyName; // 0x38
    FName ImpactTypeName; // 0x40
    EFootPlantEnum FootPlant; // 0x48
    bool bRegenerateOnCreatePhaseCurve; // 0x49
    bool bIgnoreFootPlant; // 0x4a
    char pad_4b[0x1];
    float NotifyTime; // 0x4c
    float TimeID; // 0x50
    float AudioMaxDistanceToListener; // 0x54
    char pad_58[0x8];
    static UFootPlantAnimNotify* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "USceneAction_Adaptation.hpp"
#pragma pack(push, 1)
class USceneAction_AdaptationFixed : public USceneAction_Adaptation {
public:
    float AdaptationEV100; // 0x98
    int32_t Affects; // 0x9c
    bool bIncludeBias; // 0xa0
    bool bAllowOutdoorsDayTimeBoostFactor; // 0xa1
    char pad_a2[0x6];
    static USceneAction_AdaptationFixed* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "USceneAction_Adaptation.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class USceneAction_AdaptationCurve : public USceneAction_Adaptation {
public:
    UCurveFloat* AdaptationEV100; // 0x98
    int32_t Affects; // 0xa0
    bool bIncludeBias; // 0xa4
    bool bAllowOutdoorsDayTimeBoostFactor; // 0xa5
    char pad_a6[0x2];
    static USceneAction_AdaptationCurve* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

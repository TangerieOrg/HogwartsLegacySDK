#pragma once
#include <cstdint>
#include "USceneAction_Adaptation.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
class USceneAction_AdaptationExpression : public USceneAction_Adaptation {
public:
    int32_t Affects; // 0x98
    char pad_9c[0x4];
    UExposureExpressionsExposureValue* Expression; // 0xa0
    static USceneAction_AdaptationExpression* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

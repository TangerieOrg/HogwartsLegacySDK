#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraExposureName.hpp"
#include "USceneAction_EmissiveAdaptationExtrasSingleBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class USceneAction_EmissiveAdaptationExtrasExposure : public USceneAction_EmissiveAdaptationExtrasSingleBase {
public:
    FExposureExpressionsExtraExposureName ExposureName; // 0xd8
    UCurveFloat* ExposureCurve; // 0xe8
    float ExposureValue; // 0xf0
    bool bUseCurve; // 0xf4
    char pad_f5[0x3];
    static USceneAction_EmissiveAdaptationExtrasExposure* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)

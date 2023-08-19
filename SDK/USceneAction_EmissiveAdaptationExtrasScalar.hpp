#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraScalarName.hpp"
#include "USceneAction_EmissiveAdaptationExtrasSingleBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class USceneAction_EmissiveAdaptationExtrasScalar : public USceneAction_EmissiveAdaptationExtrasSingleBase {
public:
    FExposureExpressionsExtraScalarName ScalarName; // 0xd8
    UCurveFloat* ScalarCurve; // 0xe8
    float ScalarValue; // 0xf0
    bool bUseCurve; // 0xf4
    char pad_f5[0x3];
    static USceneAction_EmissiveAdaptationExtrasScalar* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ELightAdapatationEVModOp.hpp"
#include "ELightAdapatationEVProperty.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsEVExpression : public UDynamicLightAdaptationModSettingsInterface {
public:
    ELightAdapatationEVProperty ModProperty; // 0x28
    ELightAdapatationEVModOp ModOp; // 0x29
    char pad_2a[0x6];
    UExposureExpressionsExposureValue* Expression; // 0x30
    static UDynamicLightAdaptationModSettingsEVExpression* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

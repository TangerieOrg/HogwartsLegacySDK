#pragma once
#include <cstdint>
#include "EGlobalLightRigModParam.hpp"
#include "ELightParameterSmoothingTimeBase.hpp"
#include "ELightParameterSmoothingTimeSource.hpp"
#include "ELightParameterTimeBlendInput.hpp"
#include "UObject.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ULightParameterSmoothing : public UObject {
public:
    TArray<EGlobalLightRigModParam> ModParamSet; // 0x28
    ELightParameterSmoothingTimeSource TimeSource; // 0x38
    ELightParameterSmoothingTimeBase TimeBase; // 0x39
    char pad_3a[0x6];
    UCurveFloat* TimeBlendCurve; // 0x40
    ELightParameterTimeBlendInput TimeBlendCurveInput; // 0x48
    bool bEnabled; // 0x49
    char pad_4a[0x6];
    static ULightParameterSmoothing* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

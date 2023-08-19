#pragma once
#include <cstdint>
#include "FNamedCurveValue.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCurveSourceInterface : public UInterface {
public:
    static UCurveSourceInterface* StaticClass();
    float GetCurveValue(FName CurveName);
    void GetCurves(TArray<FNamedCurveValue>& OutValues);
    FName GetBindingName();
}; // Size: 0x28
#pragma pack(pop)

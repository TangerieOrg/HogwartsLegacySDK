#pragma once
#include <cstdint>
#include "UMultiFX2_MaterialParameterBase.hpp"
class UCurveBase;
#pragma pack(push, 1)
class UMultiFX2_MaterialParameterCurve : public UMultiFX2_MaterialParameterBase {
public:
    UCurveBase* CurveParameter; // 0x90
    float UpdateRate; // 0x98
    char pad_9c[0x4];
    static UMultiFX2_MaterialParameterCurve* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCurveBase : public UObject {
public:
    char pad_28[0x8];
    static UCurveBase* StaticClass();
    void GetValueRange(float& MinValue, float& MaxValue);
    void GetTimeRange(float& MinTime, float& MaxTime);
}; // Size: 0x30
#pragma pack(pop)

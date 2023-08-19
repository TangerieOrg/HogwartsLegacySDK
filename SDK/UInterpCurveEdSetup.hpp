#pragma once
#include <cstdint>
#include "FCurveEdTab.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UInterpCurveEdSetup : public UObject {
public:
    TArray<FCurveEdTab> Tabs; // 0x28
    int32_t ActiveTab; // 0x38
    char pad_3c[0x4];
    static UInterpCurveEdSetup* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

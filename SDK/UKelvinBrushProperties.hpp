#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UKelvinBrushProperties : public UInteractiveToolPropertySet {
public:
    float FalloffDistance; // 0x60
    float Stiffness; // 0x64
    float Incompressiblity; // 0x68
    int32_t BrushSteps; // 0x6c
    static UKelvinBrushProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

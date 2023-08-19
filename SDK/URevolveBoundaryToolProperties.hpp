#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "URevolveProperties.hpp"
#pragma pack(push, 1)
class URevolveBoundaryToolProperties : public URevolveProperties {
public:
    bool bDisplayOriginalMesh; // 0xb0
    char pad_b1[0x3];
    FVector AxisOrigin; // 0xb4
    float AxisYaw; // 0xc0
    float AxisPitch; // 0xc4
    bool bSnapToWorldGrid; // 0xc8
    char pad_c9[0x7];
    static URevolveBoundaryToolProperties* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)

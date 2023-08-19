#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCogGroupDebug : public UObject {
public:
    char pad_28[0x1];
    bool bDrawTargetFootprint; // 0x29
    char pad_2a[0x2];
    float DrawTesselation; // 0x2c
    float DrawThickness; // 0x30
    float DrawFarThickness; // 0x34
    FColor DrawColorWithoutTargets; // 0x38
    FColor DrawColorWithValidTargets; // 0x3c
    FColor DrawColorWithInvalidTargets; // 0x40
    char pad_44[0x4];
    static UCogGroupDebug* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

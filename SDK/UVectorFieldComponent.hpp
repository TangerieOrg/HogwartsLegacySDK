#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UVectorField;
#pragma pack(push, 1)
class UVectorFieldComponent : public UPrimitiveComponent {
public:
    UVectorField* VectorField; // 0x480
    float Intensity; // 0x488
    float Tightness; // 0x48c
    uint8_t bPreviewVectorField : 1; // 0x490
    uint8_t pad_bitfield_490_1 : 7;
    char pad_491[0x1f];
    static UVectorFieldComponent* StaticClass();
    void SetIntensity(float NewIntensity);
}; // Size: 0x4b0
#pragma pack(pop)

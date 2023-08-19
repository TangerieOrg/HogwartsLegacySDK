#pragma once
#include <cstdint>
#include "EVectorFieldConstructionOp.hpp"
#include "UVectorField.hpp"
class UTexture2D;
class UVectorFieldStatic;
#pragma pack(push, 1)
class UVectorFieldAnimated : public UVectorField {
public:
    UTexture2D* Texture; // 0x48
    EVectorFieldConstructionOp ConstructionOp; // 0x50
    char pad_51[0x3];
    int32_t VolumeSizeX; // 0x54
    int32_t VolumeSizeY; // 0x58
    int32_t VolumeSizeZ; // 0x5c
    int32_t SubImagesX; // 0x60
    int32_t SubImagesY; // 0x64
    int32_t frameCount; // 0x68
    float FramesPerSecond; // 0x6c
    uint8_t bLoop : 1; // 0x70
    uint8_t pad_bitfield_70_1 : 7;
    char pad_71[0x7];
    UVectorFieldStatic* NoiseField; // 0x78
    float NoiseScale; // 0x80
    float NoiseMax; // 0x84
    static UVectorFieldAnimated* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

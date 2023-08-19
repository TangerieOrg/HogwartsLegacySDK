#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UDisplaceMeshCommonProperties;
class UDisplaceMeshPerlinNoiseProperties;
class UDisplaceMeshDirectionalFilterProperties;
class UDisplaceMeshSineWaveProperties;
class UDisplaceMeshTextureMapProperties;
#pragma pack(push, 1)
class UDisplaceMeshTool : public USingleSelectionTool {
public:
    UDisplaceMeshCommonProperties* CommonProperties; // 0x88
    UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties; // 0x90
    UDisplaceMeshTextureMapProperties* TextureMapProperties; // 0x98
    UDisplaceMeshPerlinNoiseProperties* NoiseProperties; // 0xa0
    UDisplaceMeshSineWaveProperties* SineWaveProperties; // 0xa8
    char pad_b0[0x340];
    static UDisplaceMeshTool* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)

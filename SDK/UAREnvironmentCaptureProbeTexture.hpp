#pragma once
#include <cstdint>
#include "EARTextureType.hpp"
#include "FGuid.hpp"
#include "FVector2D.hpp"
#include "UTextureCube.hpp"
#pragma pack(push, 1)
class UAREnvironmentCaptureProbeTexture : public UTextureCube {
public:
    EARTextureType TextureType; // 0x1d0
    char pad_1d1[0x3];
    float Timestamp; // 0x1d4
    FGuid ExternalTextureGuid; // 0x1d8
    FVector2D Size; // 0x1e8
    static UAREnvironmentCaptureProbeTexture* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)

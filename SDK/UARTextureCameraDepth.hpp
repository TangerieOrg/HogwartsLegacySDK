#pragma once
#include <cstdint>
#include "EARDepthAccuracy.hpp"
#include "EARDepthQuality.hpp"
#include "UARTexture.hpp"
#pragma pack(push, 1)
class UARTextureCameraDepth : public UARTexture {
public:
    static UARTextureCameraDepth* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)

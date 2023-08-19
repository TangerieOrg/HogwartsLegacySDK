#pragma once
#include <cstdint>
#include "EARTextureType.hpp"
#include "FGuid.hpp"
#include "FVector2D.hpp"
#include "UTexture.hpp"
#pragma pack(push, 1)
class UARTexture : public UTexture {
public:
    FGuid ExternalTextureGuid; // 0x180
    FVector2D Size; // 0x190
    char pad_198[0x8];
    static UARTexture* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)

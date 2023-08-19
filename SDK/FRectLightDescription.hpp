#pragma once
#include <cstdint>
class UTexture;
#pragma pack(push, 1)
struct FRectLightDescription {
    float SourceWidth; // 0x0
    float SourceHeight; // 0x4
    float BarnDoorAngle; // 0x8
    float BarnDoorLength; // 0xc
    UTexture* SourceTexture; // 0x10
}; // Size: 0x18
#pragma pack(pop)

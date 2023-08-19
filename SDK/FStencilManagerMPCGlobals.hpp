#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStencilManagerMPCGlobals {
    float GlobalBrightnessMod; // 0x0
    float OutdoorsDaytimeBoost_DEPRICATED; // 0x4
    bool bPlayerNearFadeDisable; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)

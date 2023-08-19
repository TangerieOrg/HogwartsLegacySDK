#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UStreamableRenderAsset : public UObject {
public:
    char pad_28[0x18];
    double ForceMipLevelsToBeResidentTimestamp; // 0x40
    int32_t NumCinematicMipLevels; // 0x48
    int32_t StreamingIndex; // 0x4c
    int32_t CachedCombinedLODBias; // 0x50
    uint8_t NeverStream : 1; // 0x54
    uint8_t bGlobalForceMipLevelsToBeResident : 1; // 0x54
    uint8_t bHasStreamingUpdatePending : 1; // 0x54
    uint8_t bForceMiplevelsToBeResident : 1; // 0x54
    uint8_t bIgnoreStreamingMipBias : 1; // 0x54
    uint8_t bUseCinematicMipLevels : 1; // 0x54
    uint8_t pad_bitfield_54_6 : 2;
    char pad_55[0xb];
    static UStreamableRenderAsset* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FCullDistanceSizePair.hpp"
#pragma pack(push, 1)
class ACullDistanceVolume : public AVolume {
public:
    TArray<FCullDistanceSizePair> CullDistances; // 0x280
    uint8_t bEnabled : 1; // 0x290
    uint8_t pad_bitfield_290_1 : 7;
    char pad_291[0x7];
    static ACullDistanceVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)

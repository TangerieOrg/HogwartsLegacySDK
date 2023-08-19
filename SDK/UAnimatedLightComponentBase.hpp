#pragma once
#include <cstdint>
#include "UAnimatedLightClusterComponentAuto.hpp"
#pragma pack(push, 1)
class UAnimatedLightComponentBase : public UAnimatedLightClusterComponentAuto {
public:
    float StartOffset; // 0x250
    float DurationScale; // 0x254
    uint8_t bDeepScanChildren : 1; // 0x258
    uint8_t bEnabled : 1; // 0x258
    uint8_t RandomizeStartOffset : 1; // 0x258
    uint8_t pad_bitfield_258_3 : 5;
    char pad_259[0x3];
    float Time; // 0x25c
    static UAnimatedLightComponentBase* StaticClass();
    void IsAnimatedLightEnabled(bool& bIsEnabled);
    void EnableAnimatedLight(bool bEnable);
    void DisableAnimatedLight();
}; // Size: 0x260
#pragma pack(pop)

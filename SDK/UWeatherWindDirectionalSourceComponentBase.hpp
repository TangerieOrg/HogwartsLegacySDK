#pragma once
#include <cstdint>
#include "UWindSourceComponentBase.hpp"
#pragma pack(push, 1)
class UWeatherWindDirectionalSourceComponentBase : public UWindSourceComponentBase {
public:
    char pad_220[0x8];
    float ExternalBlend; // 0x228
    float ForceBlendOut; // 0x22c
    float OrphanDeathTime; // 0x230
    float OrphanDeathCountdown; // 0x234
    bool bMarkedAsOrphan; // 0x238
    char pad_239[0x7];
    static UWeatherWindDirectionalSourceComponentBase* StaticClass();
}; // Size: 0x240
#pragma pack(pop)

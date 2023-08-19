#pragma once
#include <cstdint>
#include "AInfo.hpp"
class USkyLightComponent;
#pragma pack(push, 1)
class ASkyLight : public AInfo {
public:
    USkyLightComponent* LightComponent; // 0x248
    uint8_t bEnabled : 1; // 0x250
    uint8_t pad_bitfield_250_1 : 7;
    char pad_251[0x7];
    static ASkyLight* StaticClass();
    void OnRep_bEnabled();
}; // Size: 0x258
#pragma pack(pop)

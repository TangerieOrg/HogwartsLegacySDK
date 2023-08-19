#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UAkAuxBus;
class UAkLateReverbComponent;
#pragma pack(push, 1)
class AAkReverbVolume : public AVolume {
public:
    uint8_t bEnabled : 1; // 0x280
    uint8_t pad_bitfield_280_1 : 7;
    char pad_281[0x7];
    UAkAuxBus* AuxBus; // 0x288
    FString AuxBusName; // 0x290
    float SendLevel; // 0x2a0
    float FadeRate; // 0x2a4
    float Priority; // 0x2a8
    char pad_2ac[0x4];
    UAkLateReverbComponent* LateReverbComponent; // 0x2b0
    static AAkReverbVolume* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)

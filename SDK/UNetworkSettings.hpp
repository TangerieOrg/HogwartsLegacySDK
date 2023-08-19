#pragma once
#include <cstdint>
#include "FNetworkEmulationProfileDescription.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UNetworkSettings : public UDeveloperSettings {
public:
    uint8_t bVerifyPeer : 1; // 0x38
    uint8_t bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
    uint8_t pad_bitfield_38_2 : 6;
    char pad_39[0x3];
    int32_t MaxRepArraySize; // 0x3c
    int32_t MaxRepArrayMemory; // 0x40
    char pad_44[0x4];
    TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
    static UNetworkSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

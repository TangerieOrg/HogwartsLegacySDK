#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UMastermindSettings : public UDeveloperSettings {
public:
    char pad_38[0x28];
    float MastermindTickInterval; // 0x60
    char pad_64[0x2c];
    bool bIsActivatedByDefault; // 0x90
    char pad_91[0x3];
    int32_t MastermindTCPPort; // 0x94
    int32_t MaxClientConnections; // 0x98
    char pad_9c[0xc];
    static UMastermindSettings* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameNetworkManagerSettings : public UObject {
public:
    int32_t MinDynamicBandwidth; // 0x28
    int32_t MaxDynamicBandwidth; // 0x2c
    int32_t TotalNetBandwidth; // 0x30
    int32_t BadPingThreshold; // 0x34
    uint8_t bIsStandbyCheckingEnabled : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x3];
    float StandbyRxCheatTime; // 0x3c
    float StandbyTxCheatTime; // 0x40
    float PercentMissingForRxStandby; // 0x44
    float PercentMissingForTxStandby; // 0x48
    float PercentForBadPing; // 0x4c
    float JoinInProgressStandbyWaitTime; // 0x50
    char pad_54[0x4];
    static UGameNetworkManagerSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

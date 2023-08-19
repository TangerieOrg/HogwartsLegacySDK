#pragma once
#include <cstdint>
#include "EUdpMessageFormat.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UUdpMessagingSettings : public UObject {
public:
    bool EnabledByDefault; // 0x28
    bool EnableTransport; // 0x29
    bool bAutoRepair; // 0x2a
    char pad_2b[0x1];
    float MaxSendRate; // 0x2c
    uint32_t AutoRepairAttemptLimit; // 0x30
    bool bStopServiceWhenAppDeactivates; // 0x34
    char pad_35[0x3];
    FString UnicastEndpoint; // 0x38
    FString MulticastEndpoint; // 0x48
    EUdpMessageFormat MessageFormat; // 0x58
    uint8_t MulticastTimeToLive; // 0x59
    char pad_5a[0x6];
    TArray<FString> StaticEndpoints; // 0x60
    bool EnableTunnel; // 0x70
    char pad_71[0x7];
    FString TunnelUnicastEndpoint; // 0x78
    FString TunnelMulticastEndpoint; // 0x88
    TArray<FString> RemoteTunnelEndpoints; // 0x98
    static UUdpMessagingSettings* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTcpMessagingSettings : public UObject {
public:
    bool EnableTransport; // 0x28
    char pad_29[0x7];
    FString ListenEndpoint; // 0x30
    TArray<FString> ConnectToEndpoints; // 0x40
    int32_t ConnectionRetryDelay; // 0x50
    bool bStopServiceWhenAppDeactivates; // 0x54
    char pad_55[0x3];
    static UTcpMessagingSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

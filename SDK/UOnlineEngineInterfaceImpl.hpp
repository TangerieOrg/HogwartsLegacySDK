#pragma once
#include <cstdint>
#include "UOnlineEngineInterface.hpp"
#pragma pack(push, 1)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface {
public:
    char pad_28[0x50];
    TArray<FName> CompatibleUniqueNetIdTypes; // 0x78
    FName VoiceSubsystemNameOverride; // 0x88
    char pad_90[0xf8];
    static UOnlineEngineInterfaceImpl* StaticClass();
}; // Size: 0x188
#pragma pack(pop)

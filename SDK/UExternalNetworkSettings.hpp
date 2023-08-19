#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UExternalNetworkSettings : public UObject {
public:
    FString WBPNAPIKey; // 0x28
    FString WBPNURI; // 0x38
    FString WBPNUnlink; // 0x48
    static UExternalNetworkSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

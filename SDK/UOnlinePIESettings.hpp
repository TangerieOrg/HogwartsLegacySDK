#pragma once
#include <cstdint>
#include "FPIELoginSettingsInternal.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UOnlinePIESettings : public UDeveloperSettings {
public:
    bool bOnlinePIEEnabled; // 0x38
    char pad_39[0x7];
    TArray<FPIELoginSettingsInternal> Logins; // 0x40
    static UOnlinePIESettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

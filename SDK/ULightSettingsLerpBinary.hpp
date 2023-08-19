#pragma once
#include <cstdint>
#include "ULightSettingsLerpControl.hpp"
#pragma pack(push, 1)
class ULightSettingsLerpBinary : public ULightSettingsLerpControl {
public:
    bool bInvert; // 0x30
    char pad_31[0x7];
    static ULightSettingsLerpBinary* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

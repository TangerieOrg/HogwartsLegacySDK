#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkPS5AdvancedInitializationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkPS5InitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettings CommonSettings; // 0x30
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
    FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb8
    char pad_ec[0x4];
    static UAkPS5InitializationSettings* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)

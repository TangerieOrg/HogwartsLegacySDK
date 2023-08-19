#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkPS4AdvancedInitializationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkPS4InitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettings CommonSettings; // 0x30
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
    FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8
    static UAkPS4InitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf0
#pragma pack(pop)

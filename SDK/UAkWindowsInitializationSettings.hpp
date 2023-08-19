#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkWindowsAdvancedInitializationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkWindowsInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
    FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0
    static UAkWindowsInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf8
#pragma pack(pop)

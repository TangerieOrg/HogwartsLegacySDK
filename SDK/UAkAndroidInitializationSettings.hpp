#pragma once
#include <cstdint>
#include "FAkAndroidAdvancedInitializationSettings.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkAndroidInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
    FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0
    static UAkAndroidInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf8
#pragma pack(pop)

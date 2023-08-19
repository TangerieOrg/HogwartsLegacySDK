#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkHololensAdvancedInitializationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkHololensInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
    FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0
    char pad_f4[0x4];
    static UAkHololensInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf8
#pragma pack(pop)

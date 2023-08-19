#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkMacInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
    static UAkMacInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithCommSelection.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkSwitchInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
    FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
    static UAkSwitchInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf0
#pragma pack(pop)

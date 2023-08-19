#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkXSXAdvancedInitializationSettings.hpp"
#include "FAkXSXApuHeapInitializationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkXSXInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettings CommonSettings; // 0x30
    FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x90
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
    FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0
    static UAkXSXInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf8
#pragma pack(pop)

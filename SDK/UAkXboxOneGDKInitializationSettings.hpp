#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkXboxOneGDKAdvancedInitializationSettings.hpp"
#include "FAkXboxOneGDKApuHeapInitializationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkXboxOneGDKInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettings CommonSettings; // 0x30
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x90
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0
    char pad_f4[0x4];
    static UAkXboxOneGDKInitializationSettings* StaticClass();
    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xf8
#pragma pack(pop)

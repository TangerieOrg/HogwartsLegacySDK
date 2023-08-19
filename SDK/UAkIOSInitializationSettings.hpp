#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettings.hpp"
#include "FAkAudioSession.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkIOSInitializationSettings : public UObject {
public:
    char pad_28[0x8];
    FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
    FAkAudioSession AudioSession; // 0x98
    char pad_a4[0x4];
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8
    FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0
    char pad_fc[0x4];
    static UAkIOSInitializationSettings* StaticClass();
}; // Size: 0x100
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FAkCommunicationSettings.hpp"
#pragma pack(push, 1)
struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings {
    bool InitializeSystemComms; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "EAkCommSystem.hpp"
#include "FAkCommunicationSettings.hpp"
#pragma pack(push, 1)
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings {
    EAkCommSystem CommunicationSystem; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)

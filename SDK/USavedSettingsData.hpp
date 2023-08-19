#pragma once
#include <cstdint>
#include "USaveGame.hpp"
#pragma pack(push, 1)
class USavedSettingsData : public USaveGame {
public:
    TArray<uint8_t> SettingsData; // 0x28
    static USavedSettingsData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

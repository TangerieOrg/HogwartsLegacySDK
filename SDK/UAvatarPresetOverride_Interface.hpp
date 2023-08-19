#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UAvatarPresetOverride_Interface : public UInterface {
public:
    static UAvatarPresetOverride_Interface* StaticClass();
    FName GetFullbodyPreset();
}; // Size: 0x28
#pragma pack(pop)

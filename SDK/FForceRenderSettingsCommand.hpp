#pragma once
#include <cstdint>
#include "EForceRenderSettingsScope.hpp"
#pragma pack(push, 1)
struct FForceRenderSettingsCommand {
    EForceRenderSettingsScope Scope; // 0x0
    char pad_1[0x3];
    FName Command; // 0x4
    FName Value; // 0xc
    bool bDisable; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)

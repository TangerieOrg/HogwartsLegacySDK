#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkinFXEffectTypeOverrideEntry {
    char pad_0[0x28];
    FName TypeOverride; // 0x28
    bool bAllowSubclasses; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)

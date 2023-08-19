#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FSkinFXEffectLibraryEntry {
    UClass* Effect; // 0x0
    FName FXName; // 0x8
    FName TypeOverride; // 0x10
}; // Size: 0x18
#pragma pack(pop)

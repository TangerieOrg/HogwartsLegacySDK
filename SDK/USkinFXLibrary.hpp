#pragma once
#include <cstdint>
#include "FSkinFXEffectLibraryEntry.hpp"
#include "FSkinFXEffectTypeOverrideEntry.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USkinFXLibrary : public UDataAsset {
public:
    TArray<FSkinFXEffectTypeOverrideEntry> TypeOverrides; // 0x30
    TArray<FSkinFXEffectLibraryEntry> EffectEntries; // 0x40
    static USkinFXLibrary* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

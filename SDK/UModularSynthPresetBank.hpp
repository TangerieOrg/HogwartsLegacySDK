#pragma once
#include <cstdint>
#include "FModularSynthPresetBankEntry.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UModularSynthPresetBank : public UObject {
public:
    TArray<FModularSynthPresetBankEntry> Presets; // 0x28
    static UModularSynthPresetBank* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

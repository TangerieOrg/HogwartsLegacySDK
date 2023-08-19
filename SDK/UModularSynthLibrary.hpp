#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UModularSynthPresetBank;
struct FModularSynthPreset;
#pragma pack(push, 1)
class UModularSynthLibrary : public UBlueprintFunctionLibrary {
public:
    static UModularSynthLibrary* StaticClass();
    static void AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName);
}; // Size: 0x28
#pragma pack(pop)

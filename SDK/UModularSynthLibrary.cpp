#include "FModularSynthPreset.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UModularSynthLibrary.hpp"
#include "UModularSynthPresetBank.hpp"
UModularSynthLibrary* UModularSynthLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.ModularSynthLibrary");
    return (UModularSynthLibrary*)res;
}
void UModularSynthLibrary::AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset"));
    struct Params_AddModularSynthPresetToBankAsset {
        UModularSynthPresetBank* InBank; // 0x0
        FModularSynthPreset Preset; // 0x8
        FString PresetName; // 0xe8
    }; // Size: 0xf8
    Params_AddModularSynthPresetToBankAsset params{};
    params.InBank = (UModularSynthPresetBank*)InBank;
    params.Preset = (FModularSynthPreset)Preset;
    params.PresetName = (FString)PresetName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Preset = params.Preset;
}

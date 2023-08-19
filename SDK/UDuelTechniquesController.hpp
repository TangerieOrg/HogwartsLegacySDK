#pragma once
#include <cstdint>
#include "FEncounterDuelTechniqueOverride.hpp"
#include "UObject.hpp"
class UDuelTechnique;
class UCombatVolumeGroup;
#pragma pack(push, 1)
class UDuelTechniquesController : public UObject {
public:
    UObject* Owner; // 0x28
    char pad_30[0x10];
    TArray<UDuelTechnique*> SelectedDuelTechniques; // 0x40
    char pad_50[0x50];
    TArray<FEncounterDuelTechniqueOverride> SelectionOverridesCheat; // 0xa0
    char pad_b0[0x8];
    static UDuelTechniquesController* StaticClass();
    void OnCombatVolumeGroupDestroyed(UCombatVolumeGroup* Group);
}; // Size: 0xb8
#pragma pack(pop)

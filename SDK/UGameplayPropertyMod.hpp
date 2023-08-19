#pragma once
#include <cstdint>
#include "EModExternalInputMethod.hpp"
#include "FGameplayTag.hpp"
#include "FModTarget.hpp"
#include "FSelectableName.hpp"
#include "UDataAsset.hpp"
class UModFilter;
class UModExtension;
class UObject;
#pragma pack(push, 1)
class UGameplayPropertyMod : public UDataAsset {
public:
    FModTarget ModTarget; // 0x30
    bool bEvaluateInputOnAddOnly; // 0x50
    EModExternalInputMethod ExternalInputSource; // 0x51
    char pad_52[0x2];
    FSelectableName ExternalInputFunction; // 0x54
    FGameplayTag ExternalInputTag; // 0x5c
    float LifeTime; // 0x64
    bool bApplyOnceOnly; // 0x68
    bool bDelayedRemoveAfterUse; // 0x69
    bool bStackable; // 0x6a
    char pad_6b[0x5];
    TArray<UModFilter*> ModAddFilters; // 0x70
    TArray<UModFilter*> ModApplyFilters; // 0x80
    TArray<UModExtension*> ModExtensions; // 0x90
    static UGameplayPropertyMod* StaticClass();
    void OnModRemoved_BP(UObject* InTargetObject);
    void OnModApplied_BP(UObject* InTargetObject, bool bFirstTime);
    void OnModAdded_BP(UObject* InTargetObject);
}; // Size: 0xa0
#pragma pack(pop)

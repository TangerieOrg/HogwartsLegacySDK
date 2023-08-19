#pragma once
#include <cstdint>
#include "ESpellCategory.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USpellManagerBPInterface : public UObject {
public:
    int32_t NumLoadouts; // 0x28
    int32_t SpellsPerLoadout; // 0x2c
    static USpellManagerBPInterface* StaticClass();
    static void SetTargetingSpell(int32_t SpellLoadoutIndex, int32_t SpellIndex, FName SpellName);
    static void SetSpellFinisher(FName SpellName);
    static void SetSpell(int32_t LoadoutIndex, int32_t SpellIndex, FName SpellName);
    static void SetOverrideSpellLevel(int32_t SpellLevel);
    static void SetFinisherSpell(FName SpellName);
    static void SetCurrentSpellLoadoutIndex(int32_t LayoutIndex);
    static bool IsUnlocked(FName SpellLockName);
    static void GetTargetingSpells(TArray<FName>& SpellNames);
    static void GetSpellUpgradeMap();
    static TArray<FName> GetSpellsInCategory(ESpellCategory Category, bool IncludeLocked);
    static bool GetSpellsFinisher(TArray<FName>& SpellNames);
    static bool GetSpellsByGroup(int32_t LoadoutIndex, TArray<FName>& SpellNames);
    static TArray<FString> GetSpellGroupNames();
    static FName GetSpellFinisher();
    static FName GetSpellCategory(FString SpellName);
    static void GetSpell(int32_t SpellLoadOut, int32_t SpellIndex, FName& SpellName);
    static void GetFinishingSpells(TArray<FName>& SpellNames);
    static int32_t GetCurrentSpellLoadoutIndex();
    static bool GetCurrentSpellLoadout(TArray<FName>& SpellNames);
    static int32_t GetCurrentSpellIndex();
    static int32_t GetAvailableSpellCount(bool IncludeLocked);
}; // Size: 0x30
#pragma pack(pop)

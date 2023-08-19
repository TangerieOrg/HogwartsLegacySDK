#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UComboHelperHud : public UHUDElementGroup {
public:
    char pad_2e8[0x20];
    static UComboHelperHud* StaticClass();
    void SpellSuccess();
    void SpellFailure();
    void ShowComboHelper(bool bShow);
    void SetRequiredSpells(TArray<FString>& SpellNames);
    void ResetCombo();
    void OnSpellSucceeded(int32_t NumSucceeded);
    void OnSpellFailed(int32_t NumSucceeded);
    void OnShowComboHelperChanged(bool bShow);
    void OnRequiredSpellsChanged(TArray<FString>& SpellNames, int32_t NumSpells);
    void OnComboReset();
    void OnComboCompleted();
}; // Size: 0x308
#pragma pack(pop)

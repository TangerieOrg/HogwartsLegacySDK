#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class USpellCastingLayoutWidget : public UUserWidget {
public:
    char pad_268[0x18];
    bool ActiveLayout; // 0x280
    char pad_281[0x7];
    UUserWidget* ParentWidget; // 0x288
    char pad_290[0x30];
    static USpellCastingLayoutWidget* StaticClass();
    void SpellSelected();
    void OnDeactivateLayout();
    void OnActivateLayout();
    void InitSpells();
    void EnterSpellMode(bool InSpellMode);
}; // Size: 0x2c0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "UUserWidget.hpp"
class AWandTool;
class ABiped_Character;
class UImage;
class USpellBarSlotWidget;
class UTextBlock;
#pragma pack(push, 1)
class USpellInstantCastPanelWidget : public UUserWidget {
public:
    AWandTool* Wand; // 0x268
    ABiped_Character* BipedCharacter; // 0x270
    TArray<USpellBarSlotWidget*> SpellBarDataArray; // 0x278
    bool NextLoadout; // 0x288
    char pad_289[0x3];
    int32_t SpellGroupIndex; // 0x28c
    TArray<FSlateBrush> SpellGroupIcons; // 0x290
    USpellBarSlotWidget* Spell_0; // 0x2a0
    USpellBarSlotWidget* Spell_1; // 0x2a8
    UTextBlock* SpellNameText_0; // 0x2b0
    UTextBlock* SpellNameText_1; // 0x2b8
    UImage* SpellGroupIcon; // 0x2c0
    static USpellInstantCastPanelWidget* StaticClass();
    void UpdateSpellGroup(bool OutAnimDone);
    void UpdateSlotState(bool IsActive);
    void UpdateAvailableSpellList(bool Next);
    void ShowSpellPanel(bool Show);
    void SetSpellName();
    void OnUpdateSpellGroup();
    void OnUpdateAvailableSpellList();
    void OnSynchronizeProperties();
    void OnDeactivateWand();
    void OnActivateWand();
    void InitSpells();
    void GetSpellData();
}; // Size: 0x2c8
#pragma pack(pop)

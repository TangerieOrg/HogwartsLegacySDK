#pragma once
#include <cstdint>
#include "ESpellCategory.hpp"
#include "EUIQActionBarType.hpp"
#include "UIActionModes.hpp"
#include "UUserWidget.hpp"
class UObject;
class UTexture2D;
#pragma pack(push, 1)
class UActionRingItem : public UUserWidget {
public:
    char pad_268[0x38];
    static UActionRingItem* StaticClass();
    void ToggleSelectionHighlight(bool Show);
    void SetSubWidgetVisibility(EUIQActionBarType ItemType);
    void SetSpellTool();
    void SetItemInventoryData();
    void SetItemData(UIActionModes ActionMode, int32_t iGroupIndex, int32_t iMacroIndex, int32_t iItemIndex, bool ShowNone);
    void OnUpdateMeter(float pct, bool IsASpell);
    void OnToggleEmptyItem(bool IsEmpty);
    void OnSpellWhitelistDeactivated(UObject* InCaller);
    void OnSpellWhitelistActivated(UObject* InCaller);
    void OnSpellCooldownChanged(FName SpellName, float CooldownPct);
    void OnSpellCleared(UObject* InCaller, FName& SpellName);
    void OnSpellCastFailed();
    void OnSpellBlacklisted(UObject* InCaller, FName& SpellName);
    void OnSetItemInventoryData(bool IsConsumable, int32_t ItemCount);
    void OnOverlayTextureLoaded(UTexture2D* Texture);
    void OnItemIconTextureLoaded(UTexture2D* Texture);
    void OnIconTextureLoaded(UTexture2D* Texture);
    void OnIconGlowTextureLoaded(UTexture2D* Texture);
    void OnHideItemCount();
    void OnCreateBipedPlayer(UObject* InCaller);
    void MarkSpellAsBlacklisted();
    void LoadOverlayCallback(UTexture2D* Texture, UObject* Param);
    void LoadItemIconCallback(UTexture2D* Texture, UObject* Param);
    void LoadIconGlowCallback(UTexture2D* Texture, UObject* Param);
    void LoadIconCallback(UTexture2D* Texture, UObject* Param);
    void HandleSpellCastFailed(UObject* InCaller, FString SpellStr);
    ESpellCategory GetSpellCategory();
    void ClearSpellAsBlacklisted();
}; // Size: 0x2a0
#pragma pack(pop)

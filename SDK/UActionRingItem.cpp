#include "ESpellCategory.hpp"
#include "EUIQActionBarType.hpp"
#include "UActionRingItem.hpp"
#include "UFunction.hpp"
#include "UIActionModes.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UUserWidget.hpp"
void UActionRingItem::SetItemData(UIActionModes ActionMode, int32_t iGroupIndex, int32_t iMacroIndex, int32_t iItemIndex, bool ShowNone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.SetItemData"));
    struct Params_SetItemData {
        UIActionModes ActionMode; // 0x0
        char pad_1[0x3];
        int32_t iGroupIndex; // 0x4
        int32_t iMacroIndex; // 0x8
        int32_t iItemIndex; // 0xc
        bool ShowNone; // 0x10
    }; // Size: 0x11
    Params_SetItemData params{};
    params.ActionMode = (UIActionModes)ActionMode;
    params.iGroupIndex = (int32_t)iGroupIndex;
    params.iMacroIndex = (int32_t)iMacroIndex;
    params.iItemIndex = (int32_t)iItemIndex;
    params.ShowNone = (bool)ShowNone;
    ProcessEvent(func, &params);
}
UActionRingItem* UActionRingItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActionRingItem");
    return (UActionRingItem*)res;
}
void UActionRingItem::ToggleSelectionHighlight(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.ToggleSelectionHighlight"));
    struct Params_ToggleSelectionHighlight {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ToggleSelectionHighlight params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnSpellCleared(UObject* InCaller, FName& SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSpellCleared"));
    struct Params_OnSpellCleared {
        UObject* InCaller; // 0x0
        FName SpellName; // 0x8
    }; // Size: 0x10
    Params_OnSpellCleared params{};
    params.InCaller = (UObject*)InCaller;
    params.SpellName = (FName)SpellName;
    ProcessEvent(func, &params);
    SpellName = params.SpellName;
}
void UActionRingItem::SetSubWidgetVisibility(EUIQActionBarType ItemType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.SetSubWidgetVisibility"));
    struct Params_SetSubWidgetVisibility {
        EUIQActionBarType ItemType; // 0x0
    }; // Size: 0x1
    Params_SetSubWidgetVisibility params{};
    params.ItemType = (EUIQActionBarType)ItemType;
    ProcessEvent(func, &params);
}
void UActionRingItem::SetSpellTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.SetSpellTool"));
    struct Params_SetSpellTool {
    }; // Size: 0x0
    Params_SetSpellTool params{};
    ProcessEvent(func, &params);
}
void UActionRingItem::SetItemInventoryData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.SetItemInventoryData"));
    struct Params_SetItemInventoryData {
    }; // Size: 0x0
    Params_SetItemInventoryData params{};
    ProcessEvent(func, &params);
}
void UActionRingItem::OnCreateBipedPlayer(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnCreateBipedPlayer"));
    struct Params_OnCreateBipedPlayer {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_OnCreateBipedPlayer params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnUpdateMeter(float pct, bool IsASpell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnUpdateMeter"));
    struct Params_OnUpdateMeter {
        float pct; // 0x0
        bool IsASpell; // 0x4
    }; // Size: 0x5
    Params_OnUpdateMeter params{};
    params.pct = (float)pct;
    params.IsASpell = (bool)IsASpell;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnToggleEmptyItem(bool IsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnToggleEmptyItem"));
    struct Params_OnToggleEmptyItem {
        bool IsEmpty; // 0x0
    }; // Size: 0x1
    Params_OnToggleEmptyItem params{};
    params.IsEmpty = (bool)IsEmpty;
    ProcessEvent(func, &params);
}
void UActionRingItem::LoadIconGlowCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.LoadIconGlowCallback"));
    struct Params_LoadIconGlowCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadIconGlowCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnSpellWhitelistDeactivated(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSpellWhitelistDeactivated"));
    struct Params_OnSpellWhitelistDeactivated {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_OnSpellWhitelistDeactivated params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnHideItemCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnHideItemCount"));
    struct Params_OnHideItemCount {
    }; // Size: 0x0
    Params_OnHideItemCount params{};
    ProcessEvent(func, &params);
}
void UActionRingItem::OnSpellWhitelistActivated(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSpellWhitelistActivated"));
    struct Params_OnSpellWhitelistActivated {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_OnSpellWhitelistActivated params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnSpellCooldownChanged(FName SpellName, float CooldownPct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSpellCooldownChanged"));
    struct Params_OnSpellCooldownChanged {
        FName SpellName; // 0x0
        float CooldownPct; // 0x8
    }; // Size: 0xc
    Params_OnSpellCooldownChanged params{};
    params.SpellName = (FName)SpellName;
    params.CooldownPct = (float)CooldownPct;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnSpellCastFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSpellCastFailed"));
    struct Params_OnSpellCastFailed {
    }; // Size: 0x0
    Params_OnSpellCastFailed params{};
    ProcessEvent(func, &params);
}
void UActionRingItem::OnSpellBlacklisted(UObject* InCaller, FName& SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSpellBlacklisted"));
    struct Params_OnSpellBlacklisted {
        UObject* InCaller; // 0x0
        FName SpellName; // 0x8
    }; // Size: 0x10
    Params_OnSpellBlacklisted params{};
    params.InCaller = (UObject*)InCaller;
    params.SpellName = (FName)SpellName;
    ProcessEvent(func, &params);
    SpellName = params.SpellName;
}
void UActionRingItem::OnSetItemInventoryData(bool IsConsumable, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnSetItemInventoryData"));
    struct Params_OnSetItemInventoryData {
        bool IsConsumable; // 0x0
        char pad_1[0x3];
        int32_t ItemCount; // 0x4
    }; // Size: 0x8
    Params_OnSetItemInventoryData params{};
    params.IsConsumable = (bool)IsConsumable;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnOverlayTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnOverlayTextureLoaded"));
    struct Params_OnOverlayTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnOverlayTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UActionRingItem::LoadIconCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.LoadIconCallback"));
    struct Params_LoadIconCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadIconCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnItemIconTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnItemIconTextureLoaded"));
    struct Params_OnItemIconTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnItemIconTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnIconTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnIconTextureLoaded"));
    struct Params_OnIconTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnIconTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UActionRingItem::OnIconGlowTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.OnIconGlowTextureLoaded"));
    struct Params_OnIconGlowTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnIconGlowTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UActionRingItem::LoadItemIconCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.LoadItemIconCallback"));
    struct Params_LoadItemIconCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadItemIconCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UActionRingItem::MarkSpellAsBlacklisted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.MarkSpellAsBlacklisted"));
    struct Params_MarkSpellAsBlacklisted {
    }; // Size: 0x0
    Params_MarkSpellAsBlacklisted params{};
    ProcessEvent(func, &params);
}
void UActionRingItem::LoadOverlayCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.LoadOverlayCallback"));
    struct Params_LoadOverlayCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadOverlayCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UActionRingItem::HandleSpellCastFailed(UObject* InCaller, FString SpellStr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.HandleSpellCastFailed"));
    struct Params_HandleSpellCastFailed {
        UObject* InCaller; // 0x0
        FString SpellStr; // 0x8
    }; // Size: 0x18
    Params_HandleSpellCastFailed params{};
    params.InCaller = (UObject*)InCaller;
    params.SpellStr = (FString)SpellStr;
    ProcessEvent(func, &params);
}
ESpellCategory UActionRingItem::GetSpellCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.GetSpellCategory"));
    struct Params_GetSpellCategory {
        ESpellCategory ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSpellCategory params{};
    ProcessEvent(func, &params);
    return (ESpellCategory)params.ReturnValue;
}
void UActionRingItem::ClearSpellAsBlacklisted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionRingItem.ClearSpellAsBlacklisted"));
    struct Params_ClearSpellAsBlacklisted {
    }; // Size: 0x0
    Params_ClearSpellAsBlacklisted params{};
    ProcessEvent(func, &params);
}

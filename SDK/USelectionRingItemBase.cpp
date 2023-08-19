#include "ESpellCategory.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UObject.hpp"
#include "USelectionRingItemBase.hpp"
#include "UTexture2D.hpp"
void USelectionRingItemBase::LoadIconCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.LoadIconCallback"));
    struct Params_LoadIconCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadIconCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void USelectionRingItemBase::SetItemData(int32_t GroupIndex, int32_t MacroIndex, int32_t ItemIndex, bool ShowNone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.SetItemData"));
    struct Params_SetItemData {
        int32_t GroupIndex; // 0x0
        int32_t MacroIndex; // 0x4
        int32_t ItemIndex; // 0x8
        bool ShowNone; // 0xc
    }; // Size: 0xd
    Params_SetItemData params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.MacroIndex = (int32_t)MacroIndex;
    params.ItemIndex = (int32_t)ItemIndex;
    params.ShowNone = (bool)ShowNone;
    ProcessEvent(func, &params);
}
USelectionRingItemBase* USelectionRingItemBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SelectionRingItemBase");
    return (USelectionRingItemBase*)res;
}
void USelectionRingItemBase::ShowUpdateVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.ShowUpdateVFX"));
    struct Params_ShowUpdateVFX {
    }; // Size: 0x0
    Params_ShowUpdateVFX params{};
    ProcessEvent(func, &params);
}
void USelectionRingItemBase::OnShowUpdateVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.OnShowUpdateVFX"));
    struct Params_OnShowUpdateVFX {
    }; // Size: 0x0
    Params_OnShowUpdateVFX params{};
    ProcessEvent(func, &params);
}
void USelectionRingItemBase::OnIconTextureLoaded(UTexture2D* Texture, bool IsBlacklisted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.OnIconTextureLoaded"));
    struct Params_OnIconTextureLoaded {
        UTexture2D* Texture; // 0x0
        bool IsBlacklisted; // 0x8
    }; // Size: 0x9
    Params_OnIconTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    params.IsBlacklisted = (bool)IsBlacklisted;
    ProcessEvent(func, &params);
}
void USelectionRingItemBase::LoadBackgroundCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.LoadBackgroundCallback"));
    struct Params_LoadBackgroundCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadBackgroundCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void USelectionRingItemBase::OnBackgroundTextureLoaded(UTexture2D* Texture, bool IsBlacklisted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.OnBackgroundTextureLoaded"));
    struct Params_OnBackgroundTextureLoaded {
        UTexture2D* Texture; // 0x0
        bool IsBlacklisted; // 0x8
    }; // Size: 0x9
    Params_OnBackgroundTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    params.IsBlacklisted = (bool)IsBlacklisted;
    ProcessEvent(func, &params);
}
ESpellCategory USelectionRingItemBase::GetSpellCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelectionRingItemBase.GetSpellCategory"));
    struct Params_GetSpellCategory {
        ESpellCategory ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSpellCategory params{};
    ProcessEvent(func, &params);
    return (ESpellCategory)params.ReturnValue;
}

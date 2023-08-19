#include "AActor.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UObject.hpp"
#include "UQuickHealthActions.hpp"
#include "UTexture2D.hpp"
void UQuickHealthActions::SetMaxHealth(int32_t NewMaxHealth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.SetMaxHealth"));
    struct Params_SetMaxHealth {
        int32_t NewMaxHealth; // 0x0
    }; // Size: 0x4
    Params_SetMaxHealth params{};
    params.NewMaxHealth = (int32_t)NewMaxHealth;
    ProcessEvent(func, &params);
}
UQuickHealthActions* UQuickHealthActions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.QuickHealthActions");
    return (UQuickHealthActions*)res;
}
void UQuickHealthActions::OnIconTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.OnIconTextureLoaded"));
    struct Params_OnIconTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnIconTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UQuickHealthActions::UpdateHealthBar(float NewPct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.UpdateHealthBar"));
    struct Params_UpdateHealthBar {
        float NewPct; // 0x0
    }; // Size: 0x4
    Params_UpdateHealthBar params{};
    params.NewPct = (float)NewPct;
    ProcessEvent(func, &params);
}
void UQuickHealthActions::OnSetMaxHealth(float NewHealthSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.OnSetMaxHealth"));
    struct Params_OnSetMaxHealth {
        float NewHealthSize; // 0x0
    }; // Size: 0x4
    Params_OnSetMaxHealth params{};
    params.NewHealthSize = (float)NewHealthSize;
    ProcessEvent(func, &params);
}
void UQuickHealthActions::OnHealthChanged(AActor* Actor, float Delta, bool IndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.OnHealthChanged"));
    struct Params_OnHealthChanged {
        AActor* Actor; // 0x0
        float Delta; // 0x8
        bool IndicateHUD; // 0xc
    }; // Size: 0xd
    Params_OnHealthChanged params{};
    params.Actor = (AActor*)Actor;
    params.Delta = (float)Delta;
    params.IndicateHUD = (bool)IndicateHUD;
    ProcessEvent(func, &params);
}
void UQuickHealthActions::DisplayItemCount(int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.DisplayItemCount"));
    struct Params_DisplayItemCount {
        int32_t Count; // 0x0
    }; // Size: 0x4
    Params_DisplayItemCount params{};
    params.Count = (int32_t)Count;
    ProcessEvent(func, &params);
}
void UQuickHealthActions::LoadIconCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickHealthActions.LoadIconCallback"));
    struct Params_LoadIconCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_LoadIconCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}

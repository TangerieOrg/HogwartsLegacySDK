#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_SparkleBurst_C.hpp"
#include "UUI_BP_Title_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Title_C* UUI_BP_Title_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C");
    return (UUI_BP_Title_C*)res;
}
void UUI_BP_Title_C::SequenceEvent__ENTRYPOINTUI_BP_Title_5() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_5"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Title_5 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Title_5 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SequenceEvent__ENTRYPOINTUI_BP_Title_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Title_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Title_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SequenceEvent__ENTRYPOINTUI_BP_Title_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_4"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Title_4 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Title_4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SequenceEvent__ENTRYPOINTUI_BP_Title_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_3"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Title_3 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Title_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SequenceEvent__ENTRYPOINTUI_BP_Title_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Title_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Title_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SequenceEvent__ENTRYPOINTUI_BP_Title_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SequenceEvent__ENTRYPOINTUI_BP_Title_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Title_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Title_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SetGlarePos(FVector2D InPosition, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.SetGlarePos"));
    struct Params_SetGlarePos {
        FVector2D InPosition; // 0x0
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetGlarePos params{};
    params.InPosition = (FVector2D)InPosition;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::SetHogwartsLogoLocale(FString tempGlows, FString tempLogo) {}
void UUI_BP_Title_C::PlayBurst1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.PlayBurst1"));
    struct Params_PlayBurst1 {
    }; // Size: 0x0
    Params_PlayBurst1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::PlayBurst2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.PlayBurst2"));
    struct Params_PlayBurst2 {
    }; // Size: 0x0
    Params_PlayBurst2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::PlayBurst3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.PlayBurst3"));
    struct Params_PlayBurst3 {
    }; // Size: 0x0
    Params_PlayBurst3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::PlayBurst4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.PlayBurst4"));
    struct Params_PlayBurst4 {
    }; // Size: 0x0
    Params_PlayBurst4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::PlayBurst5() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.PlayBurst5"));
    struct Params_PlayBurst5 {
    }; // Size: 0x0
    Params_PlayBurst5 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::ReadyForPressStartReveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.ReadyForPressStartReveal"));
    struct Params_ReadyForPressStartReveal {
    }; // Size: 0x0
    Params_ReadyForPressStartReveal params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::OnHogwartsLogoLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.OnHogwartsLogoLoaded"));
    struct Params_OnHogwartsLogoLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_OnHogwartsLogoLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::OnHogwartsLogoGlowsLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.OnHogwartsLogoGlowsLoaded"));
    struct Params_OnHogwartsLogoGlowsLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_OnHogwartsLogoGlowsLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::ShowMainTitle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.ShowMainTitle"));
    struct Params_ShowMainTitle {
    }; // Size: 0x0
    Params_ShowMainTitle params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::HideMainTitle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.HideMainTitle"));
    struct Params_HideMainTitle {
    }; // Size: 0x0
    Params_HideMainTitle params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::ShowMainTitleIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.ShowMainTitleIntro"));
    struct Params_ShowMainTitleIntro {
    }; // Size: 0x0
    Params_ShowMainTitleIntro params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::ExecuteUbergraph_UI_BP_Title(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UTexture2D* K2Node_CustomEvent_LoadedTexture_1, UObject* K2Node_CustomEvent_CallbackParam_1, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.ExecuteUbergraph_UI_BP_Title"));
    struct Params_ExecuteUbergraph_UI_BP_Title {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UTexture2D* K2Node_CustomEvent_LoadedTexture_1; // 0x10
        UObject* K2Node_CustomEvent_CallbackParam_1; // 0x18
        UTexture2D* K2Node_CustomEvent_LoadedTexture; // 0x20
        UObject* K2Node_CustomEvent_CallbackParam; // 0x28
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x30
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x38
        bool K2Node_Event_IsDesignTime; // 0x40
        char pad_41[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x48
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x50
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2; // 0x58
        bool CallFunc_BooleanAND_ReturnValue; // 0x60
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x61
        char pad_62[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3; // 0x68
    }; // Size: 0x70
    Params_ExecuteUbergraph_UI_BP_Title params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.K2Node_CustomEvent_LoadedTexture_1 = (UTexture2D*)K2Node_CustomEvent_LoadedTexture_1;
    params.K2Node_CustomEvent_CallbackParam_1 = (UObject*)K2Node_CustomEvent_CallbackParam_1;
    params.K2Node_CustomEvent_LoadedTexture = (UTexture2D*)K2Node_CustomEvent_LoadedTexture;
    params.K2Node_CustomEvent_CallbackParam = (UObject*)K2Node_CustomEvent_CallbackParam;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_3 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::LogoAnimationIsFinished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.LogoAnimationIsFinished__DelegateSignature"));
    struct Params_LogoAnimationIsFinished__DelegateSignature {
    }; // Size: 0x0
    Params_LogoAnimationIsFinished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Title_C::LogoIsReady__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_Title.UI_BP_Title_C.LogoIsReady__DelegateSignature"));
    struct Params_LogoIsReady__DelegateSignature {
    }; // Size: 0x0
    Params_LogoIsReady__DelegateSignature params{};
    ProcessEvent(func, &params);
}

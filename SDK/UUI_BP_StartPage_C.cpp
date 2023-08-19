#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UStartPageWidget.hpp"
#include "UUI_BP_FullBackgroundSmoke_C.hpp"
#include "UUI_BP_StartPage_C.hpp"
#include "UUI_BP_Title_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_StartPage_C::SetIsLoggedIn0(bool bIsLoggedIn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.SetIsLoggedIn"));
    struct Params_SetIsLoggedIn {
        bool bIsLoggedIn; // 0x0
    }; // Size: 0x1
    Params_SetIsLoggedIn params{};
    params.bIsLoggedIn = (bool)bIsLoggedIn;
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
UUI_BP_StartPage_C* UUI_BP_StartPage_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C");
    return (UUI_BP_StartPage_C*)res;
}
TArray<FString> UUI_BP_StartPage_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_StartPage_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::SetProfileString0(FString ProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.SetProfileString"));
    struct Params_SetProfileString {
        FString ProfileName; // 0x0
    }; // Size: 0x10
    Params_SetProfileString params{};
    params.ProfileName = (FString)ProfileName;
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::SetHydraString0(FString ProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.SetHydraString"));
    struct Params_SetHydraString {
        FString ProfileName; // 0x0
    }; // Size: 0x10
    Params_SetHydraString params{};
    params.ProfileName = (FString)ProfileName;
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_StartPage.UI_BP_StartPage_C.BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StartPage_C::ExecuteUbergraph_UI_BP_StartPage(int32_t EntryPoint) {}

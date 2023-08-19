#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UPopupScreen.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_RewardNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_RewardNotification_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::WBSignInContinue__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.WBSignInContinue__DelegateSignature"));
    struct Params_WBSignInContinue__DelegateSignature {
    }; // Size: 0x0
    Params_WBSignInContinue__DelegateSignature params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_RewardNotification_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
UUI_BP_RewardNotification_C* UUI_BP_RewardNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C");
    return (UUI_BP_RewardNotification_C*)res;
}
void UUI_BP_RewardNotification_C::HidePopupComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.HidePopupComplete"));
    struct Params_HidePopupComplete {
    }; // Size: 0x0
    Params_HidePopupComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::SetRewardName(FString RewardName, FString CallFunc_Concat_StrStr_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.SetRewardName"));
    struct Params_SetRewardName {
        FString RewardName; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_SetRewardName params{};
    params.RewardName = (FString)RewardName;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::ExecuteUbergraph_UI_BP_RewardNotification(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_1, UUIOnlineManager* CallFunc_Get_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.ExecuteUbergraph_UI_BP_RewardNotification"));
    struct Params_ExecuteUbergraph_UI_BP_RewardNotification {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_1; // 0x10
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x18
        UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button; // 0x20
    }; // Size: 0x28
    Params_ExecuteUbergraph_UI_BP_RewardNotification params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_ComponentBoundEvent_Button_1 = (UUI_BP_MenuTextButton_C*)K2Node_ComponentBoundEvent_Button_1;
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    params.K2Node_ComponentBoundEvent_Button = (UUI_BP_MenuTextButton_C*)K2Node_ComponentBoundEvent_Button;
    ProcessEvent(func, &params);
}
void UUI_BP_RewardNotification_C::CloseRewardNotification__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_RewardNotification.UI_BP_RewardNotification_C.CloseRewardNotification__DelegateSignature"));
    struct Params_CloseRewardNotification__DelegateSignature {
    }; // Size: 0x0
    Params_CloseRewardNotification__DelegateSignature params{};
    ProcessEvent(func, &params);
}

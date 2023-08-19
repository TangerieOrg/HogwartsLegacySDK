#include "EInputEvent.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UEULAPageWidget.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixGameInstance.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_EULA_C.hpp"
#include "UUI_BP_HYDRATextButton_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_EULA_C::SetIsOnScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.SetIsOnScreen"));
    struct Params_SetIsOnScreen {
    }; // Size: 0x0
    Params_SetIsOnScreen params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::ReadEULAClicked() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.ReadEULAClicked"));
    struct Params_ReadEULAClicked {
    }; // Size: 0x0
    Params_ReadEULAClicked params{};
    ProcessEvent(func, &params);
}
UUI_BP_EULA_C* UUI_BP_EULA_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C");
    return (UUI_BP_EULA_C*)res;
}
TArray<FString> UUI_BP_EULA_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2) {}
void UUI_BP_EULA_C::TOSClicked() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.TOSClicked"));
    struct Params_TOSClicked {
    }; // Size: 0x0
    Params_TOSClicked params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::PrivacyClicked() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.PrivacyClicked"));
    struct Params_PrivacyClicked {
    }; // Size: 0x0
    Params_PrivacyClicked params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::UpdateButtonTexts(EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.UpdateButtonTexts"));
    struct Params_UpdateButtonTexts {
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_UpdateButtonTexts params{};
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::AcceptClicked(UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.AcceptClicked"));
    struct Params_AcceptClicked {
        UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_AcceptClicked params{};
    params.CallFunc_GetPhoenixGameInstance_ReturnValue = (UPhoenixGameInstance*)CallFunc_GetPhoenixGameInstance_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_EULA_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsMenuReaderEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x3
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x10
        int32_t CallFunc_PostEventAtLocation_ReturnValue_3; // 0x14
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x18
        bool CallFunc_IsMenuReaderEnabled_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x21
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x22
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x23
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x24
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x25
    }; // Size: 0x26
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_PostEventAtLocation_ReturnValue_3 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_3;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_IsMenuReaderEnabled_ReturnValue = (bool)CallFunc_IsMenuReaderEnabled_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_EULA_C::BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::ExternalConfigUpdated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.ExternalConfigUpdated"));
    struct Params_ExternalConfigUpdated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ExternalConfigUpdated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::EULALoaded(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.EULALoaded"));
    struct Params_EULALoaded {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_EULALoaded params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::UserProfileChange(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.UserProfileChange"));
    struct Params_UserProfileChange {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_UserProfileChange params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::RefreshReadEulaButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.RefreshReadEulaButton"));
    struct Params_RefreshReadEulaButton {
    }; // Size: 0x0
    Params_RefreshReadEulaButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EULA_C::ExecuteUbergraph_UI_BP_EULA(int32_t EntryPoint) {}
void UUI_BP_EULA_C::EulaAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_EULA.UI_BP_EULA_C.EulaAccepted__DelegateSignature"));
    struct Params_EulaAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_EulaAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}

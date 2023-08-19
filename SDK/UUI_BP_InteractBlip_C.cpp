#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UBP_EnemyAI_C.hpp"
#include "UCallOutComponent.hpp"
#include "UCanvasPanel.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_InteractBlip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_InteractBlip_C::ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowButtonGraphicsFlagChanged"));
    struct Params_ShowButtonGraphicsFlagChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ShowButtonGraphicsFlagChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::ShowWidget(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowWidget"));
    struct Params_ShowWidget {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_ShowWidget params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::ShowingKeyboard(bool& Result, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowingKeyboard"));
    struct Params_ShowingKeyboard {
        bool Result; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ShowingKeyboard params{};
    params.Result = (bool)Result;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
float UUI_BP_InteractBlip_C::GetOutroDuration(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.GetOutroDuration"));
    struct Params_GetOutroDuration {
        int32_t OutroType; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetOutroDuration params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UUI_BP_InteractBlip_C* UUI_BP_InteractBlip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C");
    return (UUI_BP_InteractBlip_C*)res;
}
UWidget* UUI_BP_InteractBlip_C::GetOffscreenIndicator() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.GetOffscreenIndicator"));
    struct Params_GetOffscreenIndicator {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOffscreenIndicator params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UUI_BP_InteractBlip_C::SetTrackBorderIcon(UTexture2D* LoadedTex, UObject* CallbackObj, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetTrackBorderIcon"));
    struct Params_SetTrackBorderIcon {
        UTexture2D* LoadedTex; // 0x0
        UObject* CallbackObj; // 0x8
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetTrackBorderIcon params{};
    params.LoadedTex = (UTexture2D*)LoadedTex;
    params.CallbackObj = (UObject*)CallbackObj;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::MeterVisibility(UCognitionStimuliSourceComponent* CogStimSource, bool CallFunc_ShowingKeyboard_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.MeterVisibility"));
    struct Params_MeterVisibility {
        UCognitionStimuliSourceComponent* CogStimSource; // 0x0
        bool CallFunc_ShowingKeyboard_Result; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x9
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0xa
    }; // Size: 0xb
    Params_MeterVisibility params{};
    params.CogStimSource = (UCognitionStimuliSourceComponent*)CogStimSource;
    params.CallFunc_ShowingKeyboard_Result = (bool)CallFunc_ShowingKeyboard_Result;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::ShowButtonInfo(bool Condition, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowButtonInfo"));
    struct Params_ShowButtonInfo {
        bool Condition; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_ShowButtonInfo params{};
    params.Condition = (bool)Condition;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    ProcessEvent(func, &params);
}
FSlateColor UUI_BP_InteractBlip_C::GetTextColor(UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.GetTextColor"));
    struct Params_GetTextColor {
        UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent; // 0x0
        FSlateColor ReturnValue; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetTextColor params{};
    params.CognitionStimuliSourceComponent = (UCognitionStimuliSourceComponent*)CognitionStimuliSourceComponent;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    return (FSlateColor)params.ReturnValue;
}
void UUI_BP_InteractBlip_C::MissionIcon() {}
void UUI_BP_InteractBlip_C::ResetMeterBar(FName CallFunc_MakeLiteralName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.ResetMeterBar"));
    struct Params_ResetMeterBar {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x10
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x18
    }; // Size: 0x20
    Params_ResetMeterBar params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::InteractionButtonPressed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.InteractionButtonPressed"));
    struct Params_InteractionButtonPressed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionButtonPressed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::ActionSetup(UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue, FSlateColor CallFunc_GetTextColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FSlateColor CallFunc_GetTextColor_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.ActionSetup"));
    struct Params_ActionSetup {
        UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x0
        FSlateColor CallFunc_GetTextColor_ReturnValue; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0x30
        char pad_31[0x7];
        FString CallFunc_Conv_TextToString_ReturnValue; // 0x38
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x48
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x58
        char pad_59[0x7];
        FString CallFunc_Conv_TextToString_ReturnValue_1; // 0x60
        FSlateColor CallFunc_GetTextColor_ReturnValue_1; // 0x70
        bool K2Node_SwitchEnum_CmpSuccess; // 0x98
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x99
    }; // Size: 0x9a
    Params_ActionSetup params{};
    params.CallFunc_GetComponentByClass_ReturnValue = (UCognitionStimuliSourceComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetTextColor_ReturnValue = (FSlateColor)CallFunc_GetTextColor_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Conv_TextToString_ReturnValue = (FString)CallFunc_Conv_TextToString_ReturnValue;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_Conv_TextToString_ReturnValue_1 = (FString)CallFunc_Conv_TextToString_ReturnValue_1;
    params.CallFunc_GetTextColor_ReturnValue_1 = (FSlateColor)CallFunc_GetTextColor_ReturnValue_1;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::UpdateCallOutUI(FName CharacterID, float BarPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.UpdateCallOutUI"));
    struct Params_UpdateCallOutUI {
        FName CharacterID; // 0x0
        float BarPercent; // 0x8
    }; // Size: 0xc
    Params_UpdateCallOutUI params{};
    params.CharacterID = (FName)CharacterID;
    params.BarPercent = (float)BarPercent;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetupWidget"));
    struct Params_SetupWidget {
        AActor* Parent; // 0x0
        UCallOutComponent* CallOutComponent; // 0x8
    }; // Size: 0x10
    Params_SetupWidget params{};
    params.Parent = (AActor*)Parent;
    params.CallOutComponent = (UCallOutComponent*)CallOutComponent;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::InteractionCancelled(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.InteractionCancelled"));
    struct Params_InteractionCancelled {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionCancelled params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::SetIsOffscreenCallout(bool IsOffscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetIsOffscreenCallout"));
    struct Params_SetIsOffscreenCallout {
        bool IsOffscreen; // 0x0
    }; // Size: 0x1
    Params_SetIsOffscreenCallout params{};
    params.IsOffscreen = (bool)IsOffscreen;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::SetHasOffscreenProxyActive(bool HasOffscreenProxy) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetHasOffscreenProxyActive"));
    struct Params_SetHasOffscreenProxyActive {
        bool HasOffscreenProxy; // 0x0
    }; // Size: 0x1
    Params_SetHasOffscreenProxyActive params{};
    params.HasOffscreenProxy = (bool)HasOffscreenProxy;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::AwareStateInfoChanged(bool bFromUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.AwareStateInfoChanged"));
    struct Params_AwareStateInfoChanged {
        bool bFromUpdate; // 0x0
    }; // Size: 0x1
    Params_AwareStateInfoChanged params{};
    params.bFromUpdate = (bool)bFromUpdate;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::AttackThreatDataChange(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.AttackThreatDataChange"));
    struct Params_AttackThreatDataChange {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_AttackThreatDataChange params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::BeaconChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_InteractBlip.UI_BP_InteractBlip_C.BeaconChanged"));
    struct Params_BeaconChanged {
    }; // Size: 0x0
    Params_BeaconChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractBlip_C::ExecuteUbergraph_UI_BP_InteractBlip(int32_t EntryPoint) {}

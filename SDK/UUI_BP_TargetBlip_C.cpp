#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "EEnemy_AttackThreatState.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "FWidgetTransform.hpp"
#include "UBP_EnemyAI_C.hpp"
#include "UCallOutComponent.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UOverlay.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_TargetBlip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
UUI_BP_TargetBlip_C* UUI_BP_TargetBlip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C");
    return (UUI_BP_TargetBlip_C*)res;
}
UWidget* UUI_BP_TargetBlip_C::GetOffscreenIndicator() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.GetOffscreenIndicator"));
    struct Params_GetOffscreenIndicator {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOffscreenIndicator params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UUI_BP_TargetBlip_C::UpdateFinisherText(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, FVector2D K2Node_Select_Default_2, FWidgetTransform K2Node_MakeStruct_WidgetTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateFinisherText"));
    struct Params_UpdateFinisherText {
        ESlateVisibility Temp_byte_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable_1; // 0x1
        bool Temp_bool_Variable; // 0x2
        char pad_3[0x1];
        FVector2D Temp_struct_Variable; // 0x4
        FVector2D Temp_struct_Variable_1; // 0xc
        bool Temp_bool_Variable_1; // 0x14
        ESlateVisibility Temp_byte_Variable_2; // 0x15
        ESlateVisibility Temp_byte_Variable_3; // 0x16
        bool Temp_bool_Variable_2; // 0x17
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x18
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x21
        ESlateVisibility K2Node_Select_Default; // 0x22
        ESlateVisibility K2Node_Select_Default_1; // 0x23
        FVector2D K2Node_Select_Default_2; // 0x24
        FWidgetTransform K2Node_MakeStruct_WidgetTransform; // 0x2c
    }; // Size: 0x48
    Params_UpdateFinisherText params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_struct_Variable = (FVector2D)Temp_struct_Variable;
    params.Temp_struct_Variable_1 = (FVector2D)Temp_struct_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (FVector2D)K2Node_Select_Default_2;
    params.K2Node_MakeStruct_WidgetTransform = (FWidgetTransform)K2Node_MakeStruct_WidgetTransform;
    ProcessEvent(func, &params);
}
float UUI_BP_TargetBlip_C::GetOutroDuration(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.GetOutroDuration"));
    struct Params_GetOutroDuration {
        int32_t OutroType; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetOutroDuration params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UUI_BP_TargetBlip_C::SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::UpdateFinisherCallout(bool VisibilityCheck, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateFinisherCallout"));
    struct Params_UpdateFinisherCallout {
        bool VisibilityCheck; // 0x0
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        bool CallFunc_IsVisible_ReturnValue; // 0x10
        bool CallFunc_Not_PreBool_ReturnValue; // 0x11
        char pad_12[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
        bool CallFunc_BooleanAND_ReturnValue; // 0x20
        char pad_21[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x28
    }; // Size: 0x30
    Params_UpdateFinisherCallout params{};
    params.VisibilityCheck = (bool)VisibilityCheck;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::Callout_TargetLost(UObject* Object, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.Callout_TargetLost"));
    struct Params_Callout_TargetLost {
        UObject* Object; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_Callout_TargetLost params{};
    params.Object = (UObject*)Object;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetupBipedPlayer(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupBipedPlayer"));
    struct Params_SetupBipedPlayer {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue_1; // 0x9
    }; // Size: 0xa
    Params_SetupBipedPlayer params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::ShowWidget(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.ShowWidget"));
    struct Params_ShowWidget {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_ShowWidget params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetupCharacterBlip(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupCharacterBlip"));
    struct Params_SetupCharacterBlip {
        ESlateVisibility Temp_byte_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable_1; // 0x1
        bool Temp_bool_Variable; // 0x2
        char pad_3[0x5];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x8
        ESlateVisibility K2Node_Select_Default; // 0x30
    }; // Size: 0x31
    Params_SetupCharacterBlip params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetupCreatureBlip(FName CallFunc_GetDbId_ReturnValue, FName CallFunc_GetActorTeam_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchName_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupCreatureBlip"));
    struct Params_SetupCreatureBlip {
        FName CallFunc_GetDbId_ReturnValue; // 0x0
        FName CallFunc_GetActorTeam_ReturnValue; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x30
        bool K2Node_SwitchName_CmpSuccess; // 0x40
        char pad_41[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x48
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x58
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x68
    }; // Size: 0x78
    Params_SetupCreatureBlip params{};
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    params.CallFunc_GetActorTeam_ReturnValue = (FName)CallFunc_GetActorTeam_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::AlertAnimationFinished(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AlertAnimationFinished"));
    struct Params_AlertAnimationFinished {
        bool Temp_bool_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        ESlateVisibility K2Node_Select_Default; // 0x3
    }; // Size: 0x4
    Params_AlertAnimationFinished params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::Callout_TargetSighted(UObject* Object, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.Callout_TargetSighted"));
    struct Params_Callout_TargetSighted {
        UObject* Object; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x8
        ESlateVisibility Temp_byte_Variable_1; // 0x9
        bool Temp_bool_Variable; // 0xa
        ESlateVisibility Temp_byte_Variable_2; // 0xb
        ESlateVisibility Temp_byte_Variable_3; // 0xc
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0xd
        bool CallFunc_IsValid_ReturnValue; // 0xe
        bool Temp_bool_Variable_1; // 0xf
        bool CallFunc_BooleanOR_ReturnValue; // 0x10
        ESlateVisibility K2Node_Select_Default; // 0x11
        ESlateVisibility K2Node_Select_Default_1; // 0x12
    }; // Size: 0x13
    Params_Callout_TargetSighted params{};
    params.Object = (UObject*)Object;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::UpdateFinisherState(bool NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateFinisherState"));
    struct Params_UpdateFinisherState {
        bool NewState; // 0x0
    }; // Size: 0x1
    Params_UpdateFinisherState params{};
    params.NewState = (bool)NewState;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetMeterVisibility(bool Visible, bool FromUpdate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetMeterVisibility"));
    struct Params_SetMeterVisibility {
        bool Visible; // 0x0
        bool FromUpdate; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetMeterVisibility params{};
    params.Visible = (bool)Visible;
    params.FromUpdate = (bool)FromUpdate;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::AwareStateChangeHandler(ENPC_TargetAwareState AwareType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AwareStateChangeHandler"));
    struct Params_AwareStateChangeHandler {
        ENPC_TargetAwareState AwareType; // 0x0
    }; // Size: 0x1
    Params_AwareStateChangeHandler params{};
    params.AwareType = (ENPC_TargetAwareState)AwareType;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::AttackStateUpdate(bool Unblockable, bool Revealio, EEnemy_AttackThreatState AttackThreatState, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AttackStateUpdate"));
    struct Params_AttackStateUpdate {
        bool Unblockable; // 0x0
        bool Revealio; // 0x1
        EEnemy_AttackThreatState AttackThreatState; // 0x2
        bool Temp_bool_Variable; // 0x3
        bool K2Node_SwitchEnum_CmpSuccess; // 0x4
        ESlateVisibility Temp_byte_Variable; // 0x5
        ESlateVisibility Temp_byte_Variable_1; // 0x6
        ESlateVisibility K2Node_Select_Default; // 0x7
    }; // Size: 0x8
    Params_AttackStateUpdate params{};
    params.Unblockable = (bool)Unblockable;
    params.Revealio = (bool)Revealio;
    params.AttackThreatState = (EEnemy_AttackThreatState)AttackThreatState;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::InitiateAlert(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void UUI_BP_TargetBlip_C::AlertUpdate(FLinearColor Tint_Color_Specified_Color, ESlateVisibility Visibility, bool Temp_bool_Variable, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AlertUpdate"));
    struct Params_AlertUpdate {
        FLinearColor Tint_Color_Specified_Color; // 0x0
        ESlateVisibility Visibility; // 0x10
        bool Temp_bool_Variable; // 0x11
        char pad_12[0x6];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x18
        ESlateVisibility Temp_byte_Variable; // 0x40
        ESlateVisibility K2Node_Select_Default; // 0x41
    }; // Size: 0x42
    Params_AlertUpdate params{};
    params.Tint_Color_Specified_Color = (FLinearColor)Tint_Color_Specified_Color;
    params.Visibility = (ESlateVisibility)Visibility;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SenseFloatUpdate(float Sense, bool SenseIsZero, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SenseFloatUpdate"));
    struct Params_SenseFloatUpdate {
        float Sense; // 0x0
        bool SenseIsZero; // 0x4
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x5
        char pad_6[0x2];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x8
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SenseFloatUpdate params{};
    params.Sense = (float)Sense;
    params.SenseIsZero = (bool)SenseIsZero;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::AwareStateChange(ENPC_TargetAwareState AlertType, bool FromUpdate, bool DifferentState, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AwareStateChange"));
    struct Params_AwareStateChange {
        ENPC_TargetAwareState AlertType; // 0x0
        bool FromUpdate; // 0x1
        bool DifferentState; // 0x2
        char pad_3[0x5];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool CallFunc_IsDead_ReturnValue; // 0x11
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x12
        bool CallFunc_Not_PreBool_ReturnValue; // 0x13
        bool K2Node_SwitchEnum_CmpSuccess; // 0x14
    }; // Size: 0x15
    Params_AwareStateChange params{};
    params.AlertType = (ENPC_TargetAwareState)AlertType;
    params.FromUpdate = (bool)FromUpdate;
    params.DifferentState = (bool)DifferentState;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsDead_ReturnValue = (bool)CallFunc_IsDead_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::AttackThreatDataChange(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AttackThreatDataChange"));
    struct Params_AttackThreatDataChange {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_AttackThreatDataChange params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetIsOffscreenCallout(bool IsOffscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetIsOffscreenCallout"));
    struct Params_SetIsOffscreenCallout {
        bool IsOffscreen; // 0x0
    }; // Size: 0x1
    Params_SetIsOffscreenCallout params{};
    params.IsOffscreen = (bool)IsOffscreen;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetHasOffscreenProxyActive(bool HasOffscreenProxy) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetHasOffscreenProxyActive"));
    struct Params_SetHasOffscreenProxyActive {
        bool HasOffscreenProxy; // 0x0
    }; // Size: 0x1
    Params_SetHasOffscreenProxyActive params{};
    params.HasOffscreenProxy = (bool)HasOffscreenProxy;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::AwareStateInfoChanged(bool bFromUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.AwareStateInfoChanged"));
    struct Params_AwareStateInfoChanged {
        bool bFromUpdate; // 0x0
    }; // Size: 0x1
    Params_AwareStateInfoChanged params{};
    params.bFromUpdate = (bool)bFromUpdate;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.ShowButtonGraphicsFlagChanged"));
    struct Params_ShowButtonGraphicsFlagChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ShowButtonGraphicsFlagChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupWidget"));
    struct Params_SetupWidget {
        AActor* Parent; // 0x0
        UCallOutComponent* CallOutComponent; // 0x8
    }; // Size: 0x10
    Params_SetupWidget params{};
    params.Parent = (AActor*)Parent;
    params.CallOutComponent = (UCallOutComponent*)CallOutComponent;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::RetargetSameEnemy() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.RetargetSameEnemy"));
    struct Params_RetargetSameEnemy {
    }; // Size: 0x0
    Params_RetargetSameEnemy params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::UpdateCallOutUI(FName CharacterID, float BarPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateCallOutUI"));
    struct Params_UpdateCallOutUI {
        FName CharacterID; // 0x0
        float BarPercent; // 0x8
    }; // Size: 0xc
    Params_UpdateCallOutUI params{};
    params.CharacterID = (FName)CharacterID;
    params.BarPercent = (float)BarPercent;
    ProcessEvent(func, &params);
}
void UUI_BP_TargetBlip_C::ExecuteUbergraph_UI_BP_TargetBlip(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5) {}

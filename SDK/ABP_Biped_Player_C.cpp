#include "AActor.hpp"
#include "ABP_Biped_Player_C.hpp"
#include "ABiped_Player.hpp"
#include "ADynamicCharacterLightRig.hpp"
#include "APlayerController.hpp"
#include "FFormatArgumentData.hpp"
#include "FKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FTimerHandle.hpp"
#include "UAnimMontage.hpp"
#include "UBP_PlayerPerceptionPoint_C.hpp"
#include "UCameraStackComponent.hpp"
#include "UClass.hpp"
#include "UExtendedOdcRepulsorComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UOverlapAudioComponent.hpp"
#include "UPhysicalAnimationComponent.hpp"
#include "UStationComponent.hpp"
#include "UUI_BP_MenuReaderTester_C.hpp"
#include "UWaterInteractionComponent.hpp"
#include "UWidget_DebugHUD_C.hpp"
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4"));
    struct Params_InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
ABP_Biped_Player_C* ABP_Biped_Player_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C");
    return (ABP_Biped_Player_C*)res;
}
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_5(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_5"));
    struct Params_InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_5 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_5 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::OnBuffStatusApplied(FString SourceID, int32_t SlotNo, float Ticks) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.OnBuffStatusApplied"));
    struct Params_OnBuffStatusApplied {
        FString SourceID; // 0x0
        int32_t SlotNo; // 0x10
        float Ticks; // 0x14
    }; // Size: 0x18
    Params_OnBuffStatusApplied params{};
    params.SourceID = (FString)SourceID;
    params.SlotNo = (int32_t)SlotNo;
    params.Ticks = (float)Ticks;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::AttachLightRig(bool Attach_The_Light_Rig, ADynamicCharacterLightRig* CallFunc_AttachDynamicLightRig_DynamicLightRig) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.AttachLightRig"));
    struct Params_AttachLightRig {
        bool Attach_The_Light_Rig; // 0x0
        char pad_1[0x7];
        ADynamicCharacterLightRig* CallFunc_AttachDynamicLightRig_DynamicLightRig; // 0x8
    }; // Size: 0x10
    Params_AttachLightRig params{};
    params.Attach_The_Light_Rig = (bool)Attach_The_Light_Rig;
    params.CallFunc_AttachDynamicLightRig_DynamicLightRig = (ADynamicCharacterLightRig*)CallFunc_AttachDynamicLightRig_DynamicLightRig;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6"));
    struct Params_InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::SetupDamageEffect() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.SetupDamageEffect"));
    struct Params_SetupDamageEffect {
    }; // Size: 0x0
    Params_SetupDamageEffect params{};
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::UpdateDebugHUD(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_5, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_6, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_7, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_8, FString CallFunc_GetMobilityActionStateName_OutString) {}
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_3(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_3"));
    struct Params_InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_3 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_3 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2"));
    struct Params_InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_1(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_1"));
    struct Params_InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_1 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_1 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_0(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_0"));
    struct Params_InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_0 {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_0 params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::OnBuffStatusRemoved(FString SourceID, int32_t SlotNo) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.OnBuffStatusRemoved"));
    struct Params_OnBuffStatusRemoved {
        FString SourceID; // 0x0
        int32_t SlotNo; // 0x10
    }; // Size: 0x14
    Params_OnBuffStatusRemoved params{};
    params.SourceID = (FString)SourceID;
    params.SlotNo = (int32_t)SlotNo;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::ExitComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.ExitComplete"));
    struct Params_ExitComplete {
    }; // Size: 0x0
    Params_ExitComplete params{};
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::DisableDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.DisableDebug"));
    struct Params_DisableDebug {
    }; // Size: 0x0
    Params_DisableDebug params{};
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::EnableDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.EnableDebug"));
    struct Params_EnableDebug {
    }; // Size: 0x0
    Params_EnableDebug params{};
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::Toggle_Debug() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.Toggle Debug"));
    struct Params_Toggle_Debug {
    }; // Size: 0x0
    Params_Toggle_Debug params{};
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::StationStoryEndedWithoutConsent(UStationComponent* InStationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.StationStoryEndedWithoutConsent"));
    struct Params_StationStoryEndedWithoutConsent {
        UStationComponent* InStationComponent; // 0x0
    }; // Size: 0x8
    Params_StationStoryEndedWithoutConsent params{};
    params.InStationComponent = (UStationComponent*)InStationComponent;
    ProcessEvent(func, &params);
}
void ABP_Biped_Player_C::ExecuteUbergraph_BP_Biped_Player(int32_t EntryPoint, FKey Temp_struct_Variable, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey Temp_struct_Variable_1, FKey K2Node_InputActionEvent_Key, APlayerController* CallFunc_GetPlayerController_ReturnValue, FKey K2Node_InputActionEvent_Key_6, UWidget_DebugHUD_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, FKey K2Node_InputActionEvent_Key_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FString K2Node_CustomEvent_SourceID_1, int32_t K2Node_CustomEvent_SlotNo_1, float K2Node_CustomEvent_Ticks, FString K2Node_CustomEvent_SourceID, int32_t K2Node_CustomEvent_SlotNo, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, FName Temp_name_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, UStationComponent* K2Node_Event_InStationComponent, FStationQueryData K2Node_MakeStruct_StationQueryData, int32_t CallFunc_InitializeStationInteraction_ReturnValue, FKey K2Node_InputActionEvent_Key_4, FKey Temp_struct_Variable_2, FKey K2Node_InputActionEvent_Key_5, FName Temp_name_Variable_1, int32_t CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, UUI_BP_MenuReaderTester_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AddToPlayerScreen_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Biped_Player.BP_Biped_Player_C.ExecuteUbergraph_BP_Biped_Player"));
    struct Params_ExecuteUbergraph_BP_Biped_Player {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FKey Temp_struct_Variable; // 0x8
        FKey K2Node_InputActionEvent_Key_2; // 0x20
        FKey K2Node_InputActionEvent_Key_1; // 0x38
        FKey Temp_struct_Variable_1; // 0x50
        FKey K2Node_InputActionEvent_Key; // 0x68
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x80
        FKey K2Node_InputActionEvent_Key_6; // 0x88
        UWidget_DebugHUD_C* CallFunc_Create_ReturnValue; // 0xa0
        bool CallFunc_IsValid_ReturnValue; // 0xa8
        char pad_a9[0x7];
        FKey K2Node_InputActionEvent_Key_3; // 0xb0
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0xc8
        char pad_c9[0x7];
        FString K2Node_CustomEvent_SourceID_1; // 0xd0
        int32_t K2Node_CustomEvent_SlotNo_1; // 0xe0
        float K2Node_CustomEvent_Ticks; // 0xe4
        FString K2Node_CustomEvent_SourceID; // 0xe8
        int32_t K2Node_CustomEvent_SlotNo; // 0xf8
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0xfc
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0xfd
        char pad_fe[0x2];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x100
        FName Temp_name_Variable; // 0x108
        bool CallFunc_Array_RemoveItem_ReturnValue; // 0x110
        char pad_111[0x7];
        UStationComponent* K2Node_Event_InStationComponent; // 0x118
        FStationQueryData K2Node_MakeStruct_StationQueryData; // 0x120
        int32_t CallFunc_InitializeStationInteraction_ReturnValue; // 0x140
        char pad_144[0x4];
        FKey K2Node_InputActionEvent_Key_4; // 0x148
        FKey Temp_struct_Variable_2; // 0x160
        FKey K2Node_InputActionEvent_Key_5; // 0x178
        FName Temp_name_Variable_1; // 0x190
        int32_t CallFunc_Array_AddUnique_ReturnValue; // 0x198
        bool CallFunc_BooleanAND_ReturnValue; // 0x19c
        bool CallFunc_IsPackagedForDistribution_ReturnValue; // 0x19d
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x19e
        bool CallFunc_Not_PreBool_ReturnValue; // 0x19f
        APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue; // 0x1a0
        UUI_BP_MenuReaderTester_C* CallFunc_Create_ReturnValue_1; // 0x1a8
        bool CallFunc_IsValid_ReturnValue_1; // 0x1b0
        bool CallFunc_AddToPlayerScreen_ReturnValue; // 0x1b1
    }; // Size: 0x1b2
    Params_ExecuteUbergraph_BP_Biped_Player params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_struct_Variable = (FKey)Temp_struct_Variable;
    params.K2Node_InputActionEvent_Key_2 = (FKey)K2Node_InputActionEvent_Key_2;
    params.K2Node_InputActionEvent_Key_1 = (FKey)K2Node_InputActionEvent_Key_1;
    params.Temp_struct_Variable_1 = (FKey)Temp_struct_Variable_1;
    params.K2Node_InputActionEvent_Key = (FKey)K2Node_InputActionEvent_Key;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.K2Node_InputActionEvent_Key_6 = (FKey)K2Node_InputActionEvent_Key_6;
    params.CallFunc_Create_ReturnValue = (UWidget_DebugHUD_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_InputActionEvent_Key_3 = (FKey)K2Node_InputActionEvent_Key_3;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.K2Node_CustomEvent_SourceID_1 = (FString)K2Node_CustomEvent_SourceID_1;
    params.K2Node_CustomEvent_SlotNo_1 = (int32_t)K2Node_CustomEvent_SlotNo_1;
    params.K2Node_CustomEvent_Ticks = (float)K2Node_CustomEvent_Ticks;
    params.K2Node_CustomEvent_SourceID = (FString)K2Node_CustomEvent_SourceID;
    params.K2Node_CustomEvent_SlotNo = (int32_t)K2Node_CustomEvent_SlotNo;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_Array_RemoveItem_ReturnValue = (bool)CallFunc_Array_RemoveItem_ReturnValue;
    params.K2Node_Event_InStationComponent = (UStationComponent*)K2Node_Event_InStationComponent;
    params.K2Node_MakeStruct_StationQueryData = (FStationQueryData)K2Node_MakeStruct_StationQueryData;
    params.CallFunc_InitializeStationInteraction_ReturnValue = (int32_t)CallFunc_InitializeStationInteraction_ReturnValue;
    params.K2Node_InputActionEvent_Key_4 = (FKey)K2Node_InputActionEvent_Key_4;
    params.Temp_struct_Variable_2 = (FKey)Temp_struct_Variable_2;
    params.K2Node_InputActionEvent_Key_5 = (FKey)K2Node_InputActionEvent_Key_5;
    params.Temp_name_Variable_1 = (FName)Temp_name_Variable_1;
    params.CallFunc_Array_AddUnique_ReturnValue = (int32_t)CallFunc_Array_AddUnique_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsPackagedForDistribution_ReturnValue = (bool)CallFunc_IsPackagedForDistribution_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetPlayerControllerFromID_ReturnValue = (APlayerController*)CallFunc_GetPlayerControllerFromID_ReturnValue;
    params.CallFunc_Create_ReturnValue_1 = (UUI_BP_MenuReaderTester_C*)CallFunc_Create_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_AddToPlayerScreen_ReturnValue = (bool)CallFunc_AddToPlayerScreen_ReturnValue;
    ProcessEvent(func, &params);
}

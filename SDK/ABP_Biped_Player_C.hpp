#pragma once
#include <cstdint>
#include "ABiped_Player.hpp"
#include "FFormatArgumentData.hpp"
#include "FKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FTimerHandle.hpp"
class UObject;
class UExtendedOdcRepulsorComponent;
class UUI_BP_MenuReaderTester_C;
class UOverlapAudioComponent;
class UPhysicalAnimationComponent;
class AActor;
class UWaterInteractionComponent;
class UCameraStackComponent;
class UBP_PlayerPerceptionPoint_C;
class UWidget_DebugHUD_C;
class UMaterialInstanceDynamic;
class UClass;
class ADynamicCharacterLightRig;
class UAnimMontage;
class APlayerController;
class UStationComponent;
#pragma pack(push, 1)
class ABP_Biped_Player_C : public ABiped_Player {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3e60
    UOverlapAudioComponent* OverlapAudio; // 0x3e68
    UWaterInteractionComponent* WaterInteraction; // 0x3e70
    UExtendedOdcRepulsorComponent* OdcRepulsor; // 0x3e78
    UCameraStackComponent* CameraStack; // 0x3e80
    UPhysicalAnimationComponent* PhysicalAnimation; // 0x3e88
    UBP_PlayerPerceptionPoint_C* PlayerPerceptionPoint; // 0x3e90
    UWidget_DebugHUD_C* DebugWidget; // 0x3e98
    UObject* InGameMenuReference; // 0x3ea0
    bool cloakVis; // 0x3ea8
    char pad_3ea9[0x7];
    UMaterialInstanceDynamic* jacketMAT; // 0x3eb0
    bool TestingAsync; // 0x3eb8
    char pad_3eb9[0x7];
    UClass* DynamicLightRigClass; // 0x3ec0
    ADynamicCharacterLightRig* DynamicLightRig; // 0x3ec8
    bool IsAttacking; // 0x3ed0
    bool ChainAttack; // 0x3ed1
    char pad_3ed2[0x2];
    int32_t Combo; // 0x3ed4
    UAnimMontage* Combo_AllMontage; // 0x3ed8
    bool LandscapeDebugActive; // 0x3ee0
    char pad_3ee1[0x7];
    FTimerHandle LandscapeLogTimer; // 0x3ee8
    bool Disable_alt_cast; // 0x3ef0
    bool R3Pressed; // 0x3ef1
    bool L2Pressed; // 0x3ef2
    bool R1Pressed; // 0x3ef3
    char pad_3ef4[0xc];
    static ABP_Biped_Player_C* StaticClass();
    void AttachLightRig(bool Attach_The_Light_Rig, ADynamicCharacterLightRig* CallFunc_AttachDynamicLightRig_DynamicLightRig);
    void SetupDamageEffect();
    void UpdateDebugHUD(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_5, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_6, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_7, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_8, FString CallFunc_GetMobilityActionStateName_OutString);
    void InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_0(FKey Key);
    void OnBuffStatusApplied(FString SourceID, int32_t SlotNo, float Ticks);
    void OnBuffStatusRemoved(FString SourceID, int32_t SlotNo);
    void DisableDebug();
    void EnableDebug();
    void Toggle_Debug();
    void ReceiveBeginPlay();
    void ExitComplete();
    void StationStoryEndedWithoutConsent(UStationComponent* InStationComponent);
    void ExecuteUbergraph_BP_Biped_Player(int32_t EntryPoint, FKey Temp_struct_Variable, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey Temp_struct_Variable_1, FKey K2Node_InputActionEvent_Key, APlayerController* CallFunc_GetPlayerController_ReturnValue, FKey K2Node_InputActionEvent_Key_6, UWidget_DebugHUD_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, FKey K2Node_InputActionEvent_Key_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FString K2Node_CustomEvent_SourceID_1, int32_t K2Node_CustomEvent_SlotNo_1, float K2Node_CustomEvent_Ticks, FString K2Node_CustomEvent_SourceID, int32_t K2Node_CustomEvent_SlotNo, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, FName Temp_name_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, UStationComponent* K2Node_Event_InStationComponent, FStationQueryData K2Node_MakeStruct_StationQueryData, int32_t CallFunc_InitializeStationInteraction_ReturnValue, FKey K2Node_InputActionEvent_Key_4, FKey Temp_struct_Variable_2, FKey K2Node_InputActionEvent_Key_5, FName Temp_name_Variable_1, int32_t CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, UUI_BP_MenuReaderTester_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AddToPlayerScreen_ReturnValue);
}; // Size: 0x3f00
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class AActor;
class APawn;
class UUserWidget;
class USceneRig;
class UBlackboardComponent;
class ABiped_Player;
class UObject;
class ASimpleInteractObject;
class UKnowledgeManager;
class UStationComponent;
class UAnimInstance;
class UAmbulatory_AnimInstance;
class AWandTool;
#pragma pack(push, 1)
class UBTS_Biped_MoveAndIdle_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    bool StationInteractionInitiated; // 0x100
    char pad_101[0x7];
    AActor* interactionActor; // 0x108
    FStationQueryData StationData; // 0x110
    bool Stealing; // 0x130
    char pad_131[0x7];
    USceneRig* SceneRigToUse; // 0x138
    bool IsCrawling; // 0x140
    bool PartialBodyReactionPlaying; // 0x141
    bool StickPressed; // 0x142
    char pad_143[0x5];
    static UBTS_Biped_MoveAndIdle_C* StaticClass();
    void AbortTask();
    void AddWidgetToScreen(UUserWidget* ScreenToAdd);
    void PlayPartialBodyReaction(UObject* Object, FName Selection, AActor* Instigator, bool K2Node_SwitchName_CmpSuccess, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, ASimpleInteractObject* K2Node_DynamicCast_AsSimple_Interact_Object, bool K2Node_DynamicCast_bSuccess_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void InteractInitiated_Station(UBlackboardComponent* BlackboardComponent, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue);
    void InteractCanceled_Station(AActor* CallFunc_GetActorOwner_ReturnValue);
    void Interact_Station(APawn* CallFunc_GetPlayerPawn_ReturnValue);
    void GainKnowledge(UKnowledgeManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue);
    void CleanupStation(FName CallFunc_MakeLiteralName_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UnlockStationBP_ReturnValue);
    void IsStrafing(bool& Redirected, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ServiceEnd(AActor* OwnerActor);
    void StationStoryEnded(UObject* Caller);
    void PartialBodyReaction(UObject* Caller, FName& String);
    void ServiceBegin(AActor* OwnerActor);
    void MountCreature_DismountEnd(UObject* Caller);
    void ExecuteUbergraph_BTS_Biped_MoveAndIdle(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AWandTool* CallFunc_GetWand_ReturnValue);
}; // Size: 0x148
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ABiped_Player;
class ABP_DH_Item_C;
class UObject;
class UParticleSystemComponent;
class UAnimInstance;
class ADeathlyHallowsCloakTool;
class AActor;
class ABP_Cloak_Prop_C;
class AWandTool;
class USkeletalMeshComponent;
class ASpellTool;
class ATool;
class UBlackboardComponent;
#pragma pack(push, 1)
class UBTT_DeathlyHallows_Action_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    UParticleSystemComponent* EmitterComponent; // 0x158
    FVariantMapHandle VariantMapHandle; // 0x160
    char pad_164[0x4];
    ABP_DH_Item_C* InteractActor; // 0x168
    FName ItemType; // 0x170
    ABP_Cloak_Prop_C* PropActor; // 0x178
    static UBTT_DeathlyHallows_Action_C* StaticClass();
    void UseCloak(AWandTool* Temp_object_Variable, AActor* CallFunc_GetActorOwner_ReturnValue);
    void EquipCloak(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, USkeletalMeshComponent* CallFunc_GetSkeletalMesh_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Cloak_Prop_C* CallFunc_FinishSpawningActor_ReturnValue);
    void EquipWand(AWandTool* Temp_object_Variable, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void EquipStone(AWandTool* Temp_object_Variable, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, ADeathlyHallowsCloakTool* K2Node_DynamicCast_AsDeathly_Hallows_Cloak_Tool, bool K2Node_DynamicCast_bSuccess_1, ATool* CallFunc_ActivateTool_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1);
    void SetInteractActor(FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, ABP_DH_Item_C* K2Node_DynamicCast_AsBP_DH_Item, bool K2Node_DynamicCast_bSuccess);
    void DeathlyHallowsSetup(bool CallFunc_GetVariantName_FromHandle_bFound, FName CallFunc_GetVariantName_FromHandle_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_GetVariantName_FromHandle_bFound_1, FName CallFunc_GetVariantName_FromHandle_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchName_CmpSuccess);
    void SetContexts(bool Flag);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DeathlyHallows_Action(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1);
}; // Size: 0x180
#pragma pack(pop)

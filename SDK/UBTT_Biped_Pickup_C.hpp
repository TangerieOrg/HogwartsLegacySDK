#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UAnimInstance;
class AActor;
class USkeletalMeshComponent;
class UBiped_AnimInstance;
class UParticleSystemComponent;
class UObject;
class ABP_WandTool_C;
class AWandTool;
class AHerb;
#pragma pack(push, 1)
class UBTT_Biped_Pickup_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* PickupTarget; // 0x158
    FVector PickupTargetLocation; // 0x160
    char pad_16c[0x4];
    FHermesBPDelegateHandle WandDownHandle; // 0x170
    static UBTT_Biped_Pickup_C* StaticClass();
    void NotifyCollected(uint8_t CallFunc_MakeLiteralByte_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue);
    bool IsCrouching(USkeletalMeshComponent* Temp_object_Variable, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void SwitchBehavior(bool Temp_bool_Variable, FGameplayTag Temp_struct_Variable, FGameplayTag Temp_struct_Variable_1, bool CallFunc_IsRidingCreature_ReturnValue, FGameplayTag K2Node_Select_Default);
    bool IsRidingCreature(AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_GetContextOnActor_ReturnValue);
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void WandDown(UObject* Caller);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_Pickup(int32_t EntryPoint, AWandTool* Temp_object_Variable, UObject* K2Node_CustomEvent_Caller, ABP_WandTool_C* K2Node_DynamicCast_AsBP_Wand_Tool, bool K2Node_DynamicCast_bSuccess, uint8_t CallFunc_MakeLiteralByte_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AHerb* K2Node_DynamicCast_AsHerb, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0x180
#pragma pack(pop)

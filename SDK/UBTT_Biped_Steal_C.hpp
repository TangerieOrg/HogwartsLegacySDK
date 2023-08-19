#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UParticleSystemComponent;
class UObject;
class UNiagaraComponent;
class AWandTool;
class ABP_WandTool_C;
#pragma pack(push, 1)
class UBTT_Biped_Steal_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool InteractPressed; // 0x158
    char pad_159[0x3];
    FVector PickupTargetLocation; // 0x15c
    AActor* InteractActor; // 0x168
    bool InAlohomora; // 0x170
    char pad_171[0x7];
    UParticleSystemComponent* LoopingVFX; // 0x178
    UParticleSystemComponent* MuzzleVFX; // 0x180
    UNiagaraComponent* AlohomoraBeamFX; // 0x188
    UParticleSystemComponent* AlohomoraLockFX; // 0x190
    UNiagaraComponent* PearVFX; // 0x198
    bool TicklingPearDoor; // 0x1a0
    char pad_1a1[0x3];
    float DistToPearDoor; // 0x1a4
    float PearInterpSpeed; // 0x1a8
    char pad_1ac[0x4];
    static UBTT_Biped_Steal_C* StaticClass();
    void CustActionEvt_ItemCollected_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CancelSteal_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void CollectStolenItem(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_Steal(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_2, AWandTool* Temp_object_Variable, AWandTool* Temp_object_Variable_1, ABP_WandTool_C* K2Node_DynamicCast_AsBP_Wand_Tool, bool K2Node_DynamicCast_bSuccess, ABP_WandTool_C* K2Node_DynamicCast_AsBP_Wand_Tool_1, bool K2Node_DynamicCast_bSuccess_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0x1b0
#pragma pack(pop)

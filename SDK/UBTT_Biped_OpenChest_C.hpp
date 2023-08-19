#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UInteractiveObjectComponent;
class UObject;
class UCognitionStimuliSourceComponent;
class UTargetTracker;
class ULootDropComponent;
class UCharacterMovementComponent;
class USkeletalMeshComponent;
struct FRotator;
class ABiped_Character;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_OpenChest_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* LootableContainer; // 0x158
    FVector PlayerLocation; // 0x160
    char pad_16c[0x4];
    UInteractiveObjectComponent* InteractiveObject; // 0x170
    UCognitionStimuliSourceComponent* CogStimuliSource; // 0x178
    ULootDropComponent* LootDrop; // 0x180
    static UBTT_Biped_OpenChest_C* StaticClass();
    void SetAvatarTickPrerequisite(bool SetPrerequisite, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1);
    void CalculateLocation(UObject* Chest, UObject* Biped, UTargetTracker*& FacingTarget, FRotator& Rotation, FVector& Location, FVector& Direction, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1);
    void CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void LootUIDone(UObject* Caller);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_OpenChest(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
}; // Size: 0x188
#pragma pack(pop)

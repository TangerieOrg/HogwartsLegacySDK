#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UKnowledgeManager;
#pragma pack(push, 1)
class UBTT_Biped_PotionStation_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* PotionStation; // 0x158
    FVector PlayerToStation; // 0x160
    FRotator DesiredRotation; // 0x16c
    FVector Up; // 0x178
    float InterpSpeed; // 0x184
    float RotationSpeed; // 0x188
    float InterpPosSpeed; // 0x18c
    float DistFromSite; // 0x190
    bool ExitingStation; // 0x194
    char pad_195[0x3];
    static UBTT_Biped_PotionStation_C* StaticClass();
    void SetDesiredRotation(AActor* Player, FVector StationRight, FVector StationForward, FVector PlayerForward, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FRotator CallFunc_MakeRotFromXZ_ReturnValue, FRotator CallFunc_MakeRotFromXZ_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FRotator CallFunc_MakeRotFromXZ_ReturnValue_2, FRotator CallFunc_MakeRotFromXZ_ReturnValue_3, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_Abs_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_3, float CallFunc_Abs_ReturnValue_1, FVector CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Biped_PotionStation(int32_t EntryPoint, UKnowledgeManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* CallFunc_GetActorOwner_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue);
}; // Size: 0x198
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
#pragma pack(push, 1)
class UBTT_Biped_EnterTotem_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* Totem; // 0x158
    FVector PlayerToStation; // 0x160
    FRotator DesiredRotation; // 0x16c
    FVector Up; // 0x178
    float InterpSpeed; // 0x184
    float RotationSpeed; // 0x188
    float InterpPosSpeed; // 0x18c
    float DistFromSite; // 0x190
    bool GettingIntoPosition; // 0x194
    bool HasLeftStickBeenPressed; // 0x195
    char pad_196[0x2];
    float ValueToAdd; // 0x198
    FVector DesiredLocation; // 0x19c
    static UBTT_Biped_EnterTotem_C* StaticClass();
    void SetDesiredLocationAndRotation(AActor* Player, FVector TotemRight, FVector TotemForward, FVector PlayerForward, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_MakeRotFromXZ_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue_1);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_EnterTotem(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0x1a8
#pragma pack(pop)

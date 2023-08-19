#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_BeastCaptureSuccess_C : public UBTTask_AvaAITree_Input {
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
    char pad_194[0x4];
    static UBTT_Biped_BeastCaptureSuccess_C* StaticClass();
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Success_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_BeastCaptureSuccess(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* K2Node_Event_OwnerActor_1);
}; // Size: 0x198
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_RideMineCart_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* MineCart; // 0x158
    FRotator ChairRotation; // 0x160
    FVector ChairLocation; // 0x16c
    FVector VectorToChair; // 0x178
    float interpAlpha; // 0x184
    float FadeTime; // 0x188
    float HoldTime; // 0x18c
    FTransform ChairTransform; // 0x190
    ABiped_Player* Player; // 0x1c0
    char pad_1c8[0x8];
    static UBTT_Biped_RideMineCart_C* StaticClass();
    void CustActionEvt_DismountMineCart_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_RideMineCart(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle);
}; // Size: 0x1d0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABiped_Player;
class UObject;
#pragma pack(push, 1)
class UBTT_Biped_TeeterOnEdge_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_TeeterOnEdge_C* StaticClass();
    void RevertMovementMode(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void Teeter2Fall(UObject* Caller);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void Teeter2FallStart(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_TeeterOnEdge(int32_t EntryPoint, uint8_t CallFunc_MakeLiteralByte_ReturnValue);
}; // Size: 0x158
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AFastTravelPort;
class USceneComponent;
class AActor;
class UObject;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_PortToPort_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AFastTravelPort* StartPortal; // 0x158
    AFastTravelPort* EndPortal; // 0x160
    FTimerHandle TeleportTimerHandle; // 0x168
    USceneComponent* TravelerTransformComponent; // 0x170
    bool Landed; // 0x178
    char pad_179[0x7];
    static UBTT_PortToPort_C* StaticClass();
    void SetContexts(bool Flag);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void DelayBeforeTeleportExpired();
    void ReceiveExecute(AActor* OwnerActor);
    void MovementModeChanged(UObject* Caller);
    void ExecuteUbergraph_BTT_PortToPort(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x180
#pragma pack(pop)

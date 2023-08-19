#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class UObject;
class ABiped_Player;
class USceneComponent;
#pragma pack(push, 1)
class ABP_DH_Item_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250
    UStaticMeshComponent* StaticMesh; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    FName ItemType; // 0x268
    FVector StartingLocation; // 0x270
    float HoverDegrees; // 0x27c
    float HoverSpeedDegrees; // 0x280
    float HoverDistance; // 0x284
    FString NotificationTitle; // 0x288
    FString NotificationIcon; // 0x298
    static ABP_DH_Item_C* StaticClass();
    void FOFF();
    void ShowItem();
    void HideItem();
    void InteractionInitiated(UObject* Caller);
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_DH_Item(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, UObject* K2Node_CustomEvent_Caller, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, float CallFunc_DegSin_ReturnValue);
}; // Size: 0x2a8
#pragma pack(pop)

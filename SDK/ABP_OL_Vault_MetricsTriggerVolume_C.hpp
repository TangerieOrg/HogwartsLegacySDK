#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UBoxComponent;
class USceneComponent;
class UPrimitiveComponent;
class ABiped_Player;
class ACharacter;
class ABP_OL_Vault_C;
#pragma pack(push, 1)
class ABP_OL_Vault_MetricsTriggerVolume_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBoxComponent* MetricsTriggerBox; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    FString MetricsName; // 0x260
    static ABP_OL_Vault_MetricsTriggerVolume_C* StaticClass();
    void BndEvt__BP_OL_Vault_MetricsTriggerVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_OL_Vault_MetricsTriggerVolume(int32_t EntryPoint, AActor* CallFunc_GetParentActor_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault, bool K2Node_DynamicCast_bSuccess, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
}; // Size: 0x270
#pragma pack(pop)

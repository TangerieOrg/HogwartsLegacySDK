#pragma once
#include <cstdint>
#include "ATool.hpp"
#include "EHeadTrackingState\Type.hpp"
#include "ELeftArmState\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FSelectableName.hpp"
#include "FVector.hpp"
class UClass;
class AMunitionType_Base;
class AActor;
class UInventoryItemToolRecord;
class ACharacter;
#pragma pack(push, 1)
class AInventoryItemTool : public ATool {
public:
    FInventoryResult InventoryResult; // 0x2e0
    FItemProperties ItemProperties; // 0x368
    bool bTriggerAbilityOnConsume; // 0x3d4
    char pad_3d5[0x3];
    FSelectableName CustomAbilityName; // 0x3d8
    UClass* UseItemAbility; // 0x3e0
    UClass* EquipItemAbility; // 0x3e8
    UClass* HoldItemAbility; // 0x3f0
    UClass* HandOnlyItemAbility; // 0x3f8
    ELeftArmState::Type LeftArmState; // 0x400
    ERightArmState::Type RightArmState; // 0x401
    EHeadTrackingState::Type HeadTrackingState; // 0x402
    bool bDisableRiderHandIK; // 0x403
    float MinUsageTime; // 0x404
    float MaxUsageTime; // 0x408
    float UnEquipTimer; // 0x40c
    bool bStartUnequipTimerOnConsume; // 0x410
    bool bAllowUseWhenCountIsZero; // 0x411
    bool bIgnoresTargets; // 0x412
    bool bHideWhenDepleted; // 0x413
    FName_GameLogicVarBool ContextToSet; // 0x414
    bool bUseItemOnEndSelection; // 0x41c
    bool bHasCustomAnimation; // 0x41d
    char pad_41e[0x12];
    static AInventoryItemTool* StaticClass();
    void UseItem();
    void UnequipTool();
    void TimeOutTimerExpired();
    void StartUnequipTimer();
    AMunitionType_Base* SpawnMunition(UClass* MunitionClass, FVector SourceLocation);
    void SpawnInventoryObject(bool bFlag);
    void SetSpeedBasedOnDistance(AMunitionType_Base* Munition, float Time, float MinSpeed, float MaxSpeed);
    void OnItemConsumed();
    void OnHidden(bool bFlag);
    void OnDeactivate();
    void OnCustomAnimation();
    void OnActivate();
    bool ItemHasCustomAnimation();
    void ItemEvent(FName EventName);
    ELeftArmState::Type GetLeftArmState(FName Mechanic);
    UInventoryItemToolRecord* GetInventoryItemToolRecord();
    ACharacter* GetCharacter();
    void FullBodyItemUsageCompleted();
    void EndItemUsage();
    void EndItemSelection();
    bool ConsumeItem();
    FVector ComputeVelocityToTarget(AActor* ProjectileActor, float Time, float MinSpeed, float MaxSpeed);
    void CancelUnequipTimer();
    void BeginItemUsage();
}; // Size: 0x430
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#include "ECreatureFeedingStationSlotVisualState.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UClass;
class UCreatureFeedingStationState;
class UAnimInstance;
class ACreature_Character;
class ACreatureFeed;
class USceneComponent;
#pragma pack(push, 1)
class ACreatureFeedingStation : public ATransfigurationObjectBase {
public:
    FVector FeedPelletsReleaseVelocity; // 0x2a8
    char pad_2b4[0x4];
    UClass* FeedActorClass; // 0x2b8
    char pad_2c0[0x60];
    static ACreatureFeedingStation* StaticClass();
    void UnregisterFeedingStationFromBiome();
    void UnhideFeed(UAnimInstance* FeederAnimInstance);
    void Unassign(ACreature_Character* Creature);
    void SetSlotVisualState(int32_t SlotIdx, ECreatureFeedingStationSlotVisualState VisualState);
    void RemoveOneFeed(int32_t SlotIdx);
    void ReleaseFeed(UAnimInstance* FeederAnimInstance);
    void RegisterFeedingStationToBiome();
    void RefillEmptyFeederSlots();
    void OnStartedConverting();
    void OnFeedDispensed(ACreatureFeed* CreatureFeed, ACreature_Character* Creature);
    void OnFeedConverted();
    void OnFeedAdded();
    ECreatureFeedingStationSlotVisualState GetSlotVisualState(int32_t SlotIdx);
    UCreatureFeedingStationState* GetFeedingStationState();
    FTransform GetBestSlotTransform(ACreature_Character* Creature);
    void FindSlotComponents(TArray<USceneComponent*>& OutSlotComponents);
    bool DispenseFeed(ACreature_Character* Creature);
    void ConvertAvailableFeederSlot();
    void BP_Init();
    void AssignToSlot(ACreature_Character* Creature);
}; // Size: 0x320
#pragma pack(pop)

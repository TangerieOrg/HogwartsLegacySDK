#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EGenderEnum.hpp"
#include "EHoboType.hpp"
#include "FLootSlot.hpp"
#include "HouseIds.hpp"
class UScheduledEntity;
class UAnimationArchitectComponent;
class UPrimitiveComponent;
class ANPC_Character;
class UAnimationArchitectAsset;
struct FVector;
class UWorldEventSocketComponent;
struct FHitResult;
class ABase_Character;
class AWorldEventLocationActor;
class UChildActorComponent;
class UWorldEventCondition;
#pragma pack(push, 1)
class AWorldEventActor : public AActor {
public:
    char pad_248[0x8];
    TArray<UScheduledEntity*> Participants; // 0x250
    UAnimationArchitectComponent* AnimationArcitectComponent; // 0x260
    char pad_268[0x18];
    static AWorldEventActor* StaticClass();
    bool SetTemporaryAnimationOnCharacter(ANPC_Character* Character, int32_t AnimationIndex);
    bool SetSpecificAnimationOnCharacter(ANPC_Character* Character, UAnimationArchitectAsset* AnimationArchitectAsset);
    UScheduledEntity* RequestHobo(FVector& InLocation, EHoboType HoboType, HouseIds InHouse, EGenderEnum InGender, TArray<FString>& ValidVoiceIDs);
    UScheduledEntity* RequestCustomHobo(FString HoboName, FVector& InLocation, bool InIsMale);
    bool RemoveDynamicActivityFromSE(UScheduledEntity* ScheduledEntity, FString ActivityID);
    bool ReleaseTemporaryAnimationFromCharacter(ANPC_Character* Character);
    void ReleaseHobo(UScheduledEntity* InScheduledEntity, bool InDestroyImmediate);
    void ReleaseAllHobos(bool InDestroyImmediate);
    void PlayGhostStory(UScheduledEntity* InScheduledEntity, FName Story, FName Emotion);
    void OnStartTriggerOverlapped(UWorldEventSocketComponent* Socket);
    void OnNoStartTriggerFound();
    void MarkStageAsIncomplete(int32_t Stage);
    void MarkStageAsCompleted(int32_t Stage);
    bool IsStageCompleted(int32_t Stage);
    bool InsertDynamicActivityOnSE(UScheduledEntity* ScheduledEntity, FString ActivityID, FString LocationID);
    void HitResult(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    AWorldEventLocationActor* GetWorldEventLocatorActor();
    TArray<FLootSlot> GetRandomLoot(FString Category);
    int32_t GetNumOfWorldEventHobos();
    int32_t GetNextUncompleteStage();
    HouseIds GetLocationBasedStudentHouse();
    bool FindStudentOnFreeTime(FVector& InLocation, float InRadius, bool InAllowFindHobos, ABase_Character*& OutActor, UScheduledEntity*& OutScheduledEntity);
    void EnableConversationSense(UScheduledEntity* SE, bool bEnable);
    void EnableChildActorComponent(UChildActorComponent* ChildActorComponent);
    void EnableCharacter(ABase_Character* Character);
    void DisableChildActorComponent(UChildActorComponent* ChildActorComponent);
    void DisableCharacter(ABase_Character* Character);
    bool CheckCondition(UWorldEventCondition* Conditon);
}; // Size: 0x280
#pragma pack(pop)

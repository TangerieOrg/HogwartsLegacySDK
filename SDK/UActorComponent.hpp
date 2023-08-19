#pragma once
#include <cstdint>
#include "EComponentCreationMethod.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETickingGroup.hpp"
#include "FActorComponentTickFunction.hpp"
#include "FSimpleMemberReference.hpp"
#include "UObject.hpp"
class UAssetUserData;
class AActor;
#pragma pack(push, 1)
class UActorComponent : public UObject {
public:
    char pad_28[0x8];
    FActorComponentTickFunction PrimaryComponentTick; // 0x30
    TArray<FName> ComponentTags; // 0x78
    TArray<UAssetUserData*> AssetUserData; // 0x88
    char pad_98[0x4];
    int32_t UCSSerializationIndex; // 0x9c
    uint8_t pad_bitfield_a0_0 : 3;
    uint8_t bNetAddressable : 1; // 0xa0
    uint8_t bReplicates : 1; // 0xa0
    uint8_t pad_bitfield_a0_5 : 3;
    uint8_t pad_bitfield_a1_0 : 7;
    uint8_t bAutoActivate : 1; // 0xa1
    uint8_t bIsActive : 1; // 0xa2
    uint8_t bEditableWhenInherited : 1; // 0xa2
    uint8_t pad_bitfield_a2_2 : 1;
    uint8_t bCanEverAffectNavigation : 1; // 0xa2
    uint8_t pad_bitfield_a2_4 : 1;
    uint8_t bIsEditorOnly : 1; // 0xa2
    uint8_t pad_bitfield_a2_6 : 2;
    char pad_a3[0x1];
    EComponentCreationMethod CreationMethod; // 0xa4
    char pad_a5[0x3];
    TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xa8
    char pad_b8[0x10];
    static UActorComponent* StaticClass();
    void ToggleActive();
    void SetTickGroup(ETickingGroup NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetIsReplicated(bool ShouldReplicate);
    void SetComponentTickIntervalAndCooldown(float TickInterval);
    void SetComponentTickInterval(float TickInterval);
    void SetComponentTickEnabled(bool bEnabled);
    void SetAutoActivate(bool bNewAutoActivate);
    void SetActive(bool bNewActive, bool bReset);
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ReceiveBeginPlay();
    void OnRep_IsActive();
    void K2_DestroyComponent(UObject* Object);
    bool IsComponentTickEnabled();
    bool IsBeingDestroyed();
    bool IsActive();
    AActor* GetOwner();
    float GetComponentTickInterval();
    void Deactivate();
    bool ComponentHasTag(FName Tag);
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    void Activate(bool bReset);
}; // Size: 0xc8
#pragma pack(pop)

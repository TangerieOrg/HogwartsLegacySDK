#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FDialogueConversationReference.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStatList.hpp"
#include "FVector.hpp"
class USphereComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_RaceTurboBubble_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USphereComponent* Sphere1; // 0x250
    UStaticMeshComponent* Sphere; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    UMaterialInstanceDynamic* Dynamic_Mat; // 0x268
    float MaxDistance; // 0x270
    bool ForAssignments; // 0x274
    char pad_275[0x3];
    int32_t BubbleNumber; // 0x278
    FStatList Stat_List; // 0x27c
    int32_t One; // 0x284
    int64_t RingBeaconREF; // 0x288
    TArray<FDialogueConversationReference> DialogueEvents; // 0x290
    float DialogueChance; // 0x2a0
    bool DialogueCooldown; // 0x2a4
    char pad_2a5[0x3];
    float DialogueCooldownTimeSecs; // 0x2a8
    char pad_2ac[0x4];
    static ABP_RaceTurboBubble_C* StaticClass();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ToggleVizAndColl(bool On);
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ReceiveBeginPlay0();
    void SetVisible();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_RaceTurboBubble(int32_t EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2b0
#pragma pack(pop)

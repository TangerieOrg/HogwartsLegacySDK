#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UAkComponent;
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class UObjectStateComponent;
class ASpellTool;
class USceneComponent;
class UTimelineComponent;
class UPrimitiveComponent;
class UInteractionArchitectAsset;
class USpellToolRecord;
#pragma pack(push, 1)
class ABP_AccioRing_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* SM_BCProps_RopeKnot_A; // 0x250
    UStaticMeshComponent* SM_RopeLoop_Small_01; // 0x258
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260
    UObjectStateComponent* ObjectState; // 0x268
    UStaticMeshComponent* Handle; // 0x270
    UStaticMeshComponent* Anchor; // 0x278
    USceneComponent* Scene; // 0x280
    float Timeline_0_NewTrack_0_F46668384FA271C17171A0A843348714; // 0x288
    ETimelineDirection::Type Timeline_0__Direction_F46668384FA271C17171A0A843348714; // 0x28c
    char pad_28d[0x3];
    UTimelineComponent* Timeline_0; // 0x290
    FRotator StartingRotation; // 0x298
    bool Looping; // 0x2a4
    char pad_2a5[0x3];
    float Time; // 0x2a8
    bool Disable_Auto_Targeting; // 0x2ac
    bool Rope; // 0x2ad
    char pad_2ae[0x2];
    static ABP_AccioRing_C* StaticClass();
    FName GetMainBone();
    UPrimitiveComponent* GetMainPrimitive();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Loop__EventFunc();
    void OnReset();
    void SetupSfx(UAkComponent* AkComponent);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void Pull();
    void Release();
    void ReceiveBeginPlay0();
    void Turn_Off_Auto_Targeting();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_AccioRing(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, UAkComponent* K2Node_Event_AkComponent, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_3, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, AActor* K2Node_Event_Instigator, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_IsClosed_Variable_1);
}; // Size: 0x2b0
#pragma pack(pop)

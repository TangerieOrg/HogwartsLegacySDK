#pragma once
#include <cstdint>
#include "ABP_Enemy_Character_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EInteractionProject.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "MissionStatus.hpp"
class UAkComponent;
class UActorComponent;
class UAnimationComponent;
class AActor;
class UArrowComponent;
struct FGameplayTagContainer;
class UInteractionArchitectAsset;
class UClass;
#pragma pack(push, 1)
class ABP_TrainingDummy_C : public ABP_Enemy_Character_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x24f0
    UAkComponent* Wheel_location; // 0x24f8
    UAnimationComponent* Animation; // 0x2500
    UArrowComponent* LOC_Impact; // 0x2508
    static ABP_TrainingDummy_C* StaticClass();
    bool GetAbilityFromInteractionArchitect(FGameplayTagContainer& InSourceTagContainer, UInteractionArchitectAsset* InArchitectAsset, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    void ReceiveBeginPlay();
    void ExplodeDummy();
    void FallApart();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature(AActor* pActor);
    void BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(UActorComponent* Component);
    void AddHat();
    void ExecuteUbergraph_BP_TrainingDummy(int32_t EntryPoint, FName CallFunc_GetMissionName_ReturnValue, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2510
#pragma pack(pop)

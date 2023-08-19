#include "AActor.hpp"
#include "ABP_Enemy_Character_C.hpp"
#include "ABP_TrainingDummy_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EInteractionProject.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "MissionStatus.hpp"
#include "UActorComponent.hpp"
#include "UAkComponent.hpp"
#include "UAnimationComponent.hpp"
#include "UArrowComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
ABP_TrainingDummy_C* ABP_TrainingDummy_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C");
    return (ABP_TrainingDummy_C*)res;
}
void ABP_TrainingDummy_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::ExplodeDummy() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.ExplodeDummy"));
    struct Params_ExplodeDummy {
    }; // Size: 0x0
    Params_ExplodeDummy params{};
    ProcessEvent(func, &params);
}
bool ABP_TrainingDummy_C::GetAbilityFromInteractionArchitect(FGameplayTagContainer& InSourceTagContainer, UInteractionArchitectAsset* InArchitectAsset, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.GetAbilityFromInteractionArchitect"));
    struct Params_GetAbilityFromInteractionArchitect {
        FGameplayTagContainer InSourceTagContainer; // 0x0
        UInteractionArchitectAsset* InArchitectAsset; // 0x20
        FGameplayTagContainer InArchitectTagContainer; // 0x28
        EInteractionProject Project; // 0x48
        bool bOutIsAdditive; // 0x49
        char pad_4a[0x6];
        UClass* OutAbilityClass; // 0x50
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetAbilityFromInteractionArchitect params{};
    params.InSourceTagContainer = (FGameplayTagContainer)InSourceTagContainer;
    params.InArchitectAsset = (UInteractionArchitectAsset*)InArchitectAsset;
    params.InArchitectTagContainer = (FGameplayTagContainer)InArchitectTagContainer;
    params.Project = (EInteractionProject)Project;
    params.bOutIsAdditive = (bool)bOutIsAdditive;
    params.OutAbilityClass = (UClass*)OutAbilityClass;
    ProcessEvent(func, &params);
    InSourceTagContainer = params.InSourceTagContainer;
    bOutIsAdditive = params.bOutIsAdditive;
    InArchitectTagContainer = params.InArchitectTagContainer;
    OutAbilityClass = params.OutAbilityClass;
    return (bool)params.ReturnValue;
}
void ABP_TrainingDummy_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::FallApart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.FallApart"));
    struct Params_FallApart {
    }; // Size: 0x0
    Params_FallApart params{};
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature"));
    struct Params_BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(UActorComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature"));
    struct Params_BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature {
        UActorComponent* Component; // 0x0
    }; // Size: 0x8
    Params_BndEvt__BP_TrainingDummy_BP_EnemyAI_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature params{};
    params.Component = (UActorComponent*)Component;
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::AddHat() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/BP_TrainingDummy.BP_TrainingDummy_C.AddHat"));
    struct Params_AddHat {
    }; // Size: 0x0
    Params_AddHat params{};
    ProcessEvent(func, &params);
}
void ABP_TrainingDummy_C::ExecuteUbergraph_BP_TrainingDummy(int32_t EntryPoint, FName CallFunc_GetMissionName_ReturnValue, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}

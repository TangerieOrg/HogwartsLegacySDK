#include "AAIController.hpp"
#include "AActor.hpp"
#include "AController.hpp"
#include "EPathFollowingRequestResult\Type.hpp"
#include "EPathFollowingStatus\Type.hpp"
#include "FGameplayResourceSet.hpp"
#include "FVector.hpp"
#include "UAIPerceptionComponent.hpp"
#include "UBehaviorTree.hpp"
#include "UBlackboardComponent.hpp"
#include "UBlackboardData.hpp"
#include "UBrainComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UGameplayTasksComponent.hpp"
#include "UPathFollowingComponent.hpp"
#include "UPawnActionsComponent.hpp"
AAIController* AAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIController");
    return (AAIController*)res;
}
void AAIController::SetMoveBlockDetection(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.SetMoveBlockDetection"));
    struct Params_SetMoveBlockDetection {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetMoveBlockDetection params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void AAIController::SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.SetPathFollowingComponent"));
    struct Params_SetPathFollowingComponent {
        UPathFollowingComponent* NewPFComponent; // 0x0
    }; // Size: 0x8
    Params_SetPathFollowingComponent params{};
    params.NewPFComponent = (UPathFollowingComponent*)NewPFComponent;
    ProcessEvent(func, &params);
}
void AAIController::UnclaimTaskResource(UClass* ResourceClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.UnclaimTaskResource"));
    struct Params_UnclaimTaskResource {
        UClass* ResourceClass; // 0x0
    }; // Size: 0x8
    Params_UnclaimTaskResource params{};
    params.ResourceClass = (UClass*)ResourceClass;
    ProcessEvent(func, &params);
}
bool AAIController::UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.UseBlackboard"));
    struct Params_UseBlackboard {
        UBlackboardData* BlackboardAsset; // 0x0
        UBlackboardComponent* BlackboardComponent; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_UseBlackboard params{};
    params.BlackboardAsset = (UBlackboardData*)BlackboardAsset;
    params.BlackboardComponent = (UBlackboardComponent*)BlackboardComponent;
    ProcessEvent(func, &params);
    BlackboardComponent = params.BlackboardComponent;
    return (bool)params.ReturnValue;
}
bool AAIController::RunBehaviorTree(UBehaviorTree* BTAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.RunBehaviorTree"));
    struct Params_RunBehaviorTree {
        UBehaviorTree* BTAsset; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RunBehaviorTree params{};
    params.BTAsset = (UBehaviorTree*)BTAsset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AAIController::OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.OnUsingBlackBoard"));
    struct Params_OnUsingBlackBoard {
        UBlackboardComponent* BlackboardComp; // 0x0
        UBlackboardData* BlackboardAsset; // 0x8
    }; // Size: 0x10
    Params_OnUsingBlackBoard params{};
    params.BlackboardComp = (UBlackboardComponent*)BlackboardComp;
    params.BlackboardAsset = (UBlackboardData*)BlackboardAsset;
    ProcessEvent(func, &params);
}
void AAIController::OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed"));
    struct Params_OnGameplayTaskResourcesClaimed {
        FGameplayResourceSet NewlyClaimed; // 0x0
        FGameplayResourceSet FreshlyReleased; // 0x2
    }; // Size: 0x4
    Params_OnGameplayTaskResourcesClaimed params{};
    params.NewlyClaimed = (FGameplayResourceSet)NewlyClaimed;
    params.FreshlyReleased = (FGameplayResourceSet)FreshlyReleased;
    ProcessEvent(func, &params);
}
FVector AAIController::GetFocalPoint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetFocalPoint"));
    struct Params_GetFocalPoint {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFocalPoint params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
EPathFollowingRequestResult::Type AAIController::MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.MoveToActor"));
    struct Params_MoveToActor {
        AActor* Goal; // 0x0
        float AcceptanceRadius; // 0x8
        bool bStopOnOverlap; // 0xc
        bool bUsePathfinding; // 0xd
        bool bCanStrafe; // 0xe
        char pad_f[0x1];
        UClass* FilterClass; // 0x10
        bool bAllowPartialPath; // 0x18
        EPathFollowingRequestResult::Type ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_MoveToActor params{};
    params.Goal = (AActor*)Goal;
    params.AcceptanceRadius = (float)AcceptanceRadius;
    params.bStopOnOverlap = (bool)bStopOnOverlap;
    params.bUsePathfinding = (bool)bUsePathfinding;
    params.bCanStrafe = (bool)bCanStrafe;
    params.FilterClass = (UClass*)FilterClass;
    params.bAllowPartialPath = (bool)bAllowPartialPath;
    ProcessEvent(func, &params);
    return (EPathFollowingRequestResult::Type)params.ReturnValue;
}
EPathFollowingRequestResult::Type AAIController::MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.MoveToLocation"));
    struct Params_MoveToLocation {
        FVector Dest; // 0x0
        float AcceptanceRadius; // 0xc
        bool bStopOnOverlap; // 0x10
        bool bUsePathfinding; // 0x11
        bool bProjectDestinationToNavigation; // 0x12
        bool bCanStrafe; // 0x13
        char pad_14[0x4];
        UClass* FilterClass; // 0x18
        bool bAllowPartialPath; // 0x20
        EPathFollowingRequestResult::Type ReturnValue; // 0x21
    }; // Size: 0x22
    Params_MoveToLocation params{};
    params.Dest = (FVector)Dest;
    params.AcceptanceRadius = (float)AcceptanceRadius;
    params.bStopOnOverlap = (bool)bStopOnOverlap;
    params.bUsePathfinding = (bool)bUsePathfinding;
    params.bProjectDestinationToNavigation = (bool)bProjectDestinationToNavigation;
    params.bCanStrafe = (bool)bCanStrafe;
    params.FilterClass = (UClass*)FilterClass;
    params.bAllowPartialPath = (bool)bAllowPartialPath;
    ProcessEvent(func, &params);
    Dest = params.Dest;
    return (EPathFollowingRequestResult::Type)params.ReturnValue;
}
void AAIController::K2_SetFocus(AActor* NewFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.K2_SetFocus"));
    struct Params_K2_SetFocus {
        AActor* NewFocus; // 0x0
    }; // Size: 0x8
    Params_K2_SetFocus params{};
    params.NewFocus = (AActor*)NewFocus;
    ProcessEvent(func, &params);
}
void AAIController::K2_SetFocalPoint(FVector FP) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.K2_SetFocalPoint"));
    struct Params_K2_SetFocalPoint {
        FVector FP; // 0x0
    }; // Size: 0xc
    Params_K2_SetFocalPoint params{};
    params.FP = (FVector)FP;
    ProcessEvent(func, &params);
}
void AAIController::K2_ClearFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.K2_ClearFocus"));
    struct Params_K2_ClearFocus {
    }; // Size: 0x0
    Params_K2_ClearFocus params{};
    ProcessEvent(func, &params);
}
bool AAIController::HasPartialPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.HasPartialPath"));
    struct Params_HasPartialPath {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasPartialPath params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPathFollowingComponent* AAIController::GetPathFollowingComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetPathFollowingComponent"));
    struct Params_GetPathFollowingComponent {
        UPathFollowingComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPathFollowingComponent params{};
    ProcessEvent(func, &params);
    return (UPathFollowingComponent*)params.ReturnValue;
}
void AAIController::ClaimTaskResource(UClass* ResourceClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.ClaimTaskResource"));
    struct Params_ClaimTaskResource {
        UClass* ResourceClass; // 0x0
    }; // Size: 0x8
    Params_ClaimTaskResource params{};
    params.ResourceClass = (UClass*)ResourceClass;
    ProcessEvent(func, &params);
}
EPathFollowingStatus::Type AAIController::GetMoveStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetMoveStatus"));
    struct Params_GetMoveStatus {
        EPathFollowingStatus::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoveStatus params{};
    ProcessEvent(func, &params);
    return (EPathFollowingStatus::Type)params.ReturnValue;
}
FVector AAIController::GetImmediateMoveDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetImmediateMoveDestination"));
    struct Params_GetImmediateMoveDestination {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetImmediateMoveDestination params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
AActor* AAIController::GetFocusActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetFocusActor"));
    struct Params_GetFocusActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFocusActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FVector AAIController::GetFocalPointOnActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetFocalPointOnActor"));
    struct Params_GetFocalPointOnActor {
        AActor* Actor; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetFocalPointOnActor params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UAIPerceptionComponent* AAIController::GetAIPerceptionComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIController.GetAIPerceptionComponent"));
    struct Params_GetAIPerceptionComponent {
        UAIPerceptionComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAIPerceptionComponent params{};
    ProcessEvent(func, &params);
    return (UAIPerceptionComponent*)params.ReturnValue;
}

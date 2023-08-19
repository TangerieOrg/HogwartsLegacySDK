#pragma once
#include <cstdint>
#include "AController.hpp"
#include "EPathFollowingRequestResult\Type.hpp"
#include "EPathFollowingStatus\Type.hpp"
#include "FGameplayResourceSet.hpp"
#include "FVector.hpp"
class UPathFollowingComponent;
class UBrainComponent;
class UBlackboardData;
class UAIPerceptionComponent;
class UPawnActionsComponent;
class UBlackboardComponent;
class UGameplayTasksComponent;
class UBehaviorTree;
class UClass;
class AActor;
#pragma pack(push, 1)
class AAIController : public AController {
public:
    char pad_2c0[0x38];
    uint8_t bStartAILogicOnPossess : 1; // 0x2f8
    uint8_t bStopAILogicOnUnposses : 1; // 0x2f8
    uint8_t bLOSflag : 1; // 0x2f8
    uint8_t bSkipExtraLOSChecks : 1; // 0x2f8
    uint8_t bAllowStrafe : 1; // 0x2f8
    uint8_t bWantsPlayerState : 1; // 0x2f8
    uint8_t bSetControlRotationFromPawnOrientation : 1; // 0x2f8
    uint8_t pad_bitfield_2f8_7 : 1;
    char pad_2f9[0x7];
    UPathFollowingComponent* PathFollowingComponent; // 0x300
    UBrainComponent* BrainComponent; // 0x308
    UAIPerceptionComponent* PerceptionComponent; // 0x310
    UPawnActionsComponent* ActionsComp; // 0x318
    UBlackboardComponent* Blackboard; // 0x320
    UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x328
    UClass* DefaultNavigationFilterClass; // 0x330
    char pad_338[0x18];
    static AAIController* StaticClass();
    bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);
    void UnclaimTaskResource(UClass* ResourceClass);
    void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);
    void SetMoveBlockDetection(bool bEnable);
    bool RunBehaviorTree(UBehaviorTree* BTAsset);
    void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
    EPathFollowingRequestResult::Type MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath);
    EPathFollowingRequestResult::Type MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath);
    void K2_SetFocus(AActor* NewFocus);
    void K2_SetFocalPoint(FVector FP);
    void K2_ClearFocus();
    bool HasPartialPath();
    UPathFollowingComponent* GetPathFollowingComponent();
    EPathFollowingStatus::Type GetMoveStatus();
    FVector GetImmediateMoveDestination();
    AActor* GetFocusActor();
    FVector GetFocalPointOnActor(AActor* Actor);
    FVector GetFocalPoint();
    UAIPerceptionComponent* GetAIPerceptionComponent();
    void ClaimTaskResource(UClass* ResourceClass);
}; // Size: 0x350
#pragma pack(pop)

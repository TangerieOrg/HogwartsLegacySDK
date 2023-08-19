#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UAnimInstance;
class UObject;
class UClass;
class APawn;
class UBehaviorTree;
class AController;
class UNavigationPath;
class UBlackboardComponent;
class AAIController;
class UAIAsyncTaskBlueprintProxy;
#pragma pack(push, 1)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary {
public:
    static UAIBlueprintHelperLibrary* StaticClass();
    static void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    static APawn* SpawnAIFromClass(UObject* WorldContextObject, UClass* PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner);
    static void SimpleMoveToLocation(AController* Controller, FVector& Goal);
    static void SimpleMoveToActor(AController* Controller, AActor* Goal);
    static void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess);
    static void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    static bool IsValidAIRotation(FRotator Rotation);
    static bool IsValidAILocation(FVector Location);
    static bool IsValidAIDirection(FVector DirectionVector);
    static int32_t GetNextNavLinkIndex(AController* Controller);
    static TArray<FVector> GetCurrentPathPoints(AController* Controller);
    static int32_t GetCurrentPathIndex(AController* Controller);
    static UNavigationPath* GetCurrentPath(AController* Controller);
    static UBlackboardComponent* GetBlackboard(AActor* Target);
    static AAIController* GetAIController(AActor* ControlledActor);
    static UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
}; // Size: 0x28
#pragma pack(pop)

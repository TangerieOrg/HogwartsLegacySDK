#include "AAIController.hpp"
#include "AActor.hpp"
#include "AController.hpp"
#include "APawn.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAIAsyncTaskBlueprintProxy.hpp"
#include "UAIBlueprintHelperLibrary.hpp"
#include "UAnimInstance.hpp"
#include "UBehaviorTree.hpp"
#include "UBlackboardComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UNavigationPath.hpp"
#include "UObject.hpp"
bool UAIBlueprintHelperLibrary::IsValidAIRotation(FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation"));
    struct Params_IsValidAIRotation {
        FRotator Rotation; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsValidAIRotation params{};
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAIBlueprintHelperLibrary* UAIBlueprintHelperLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIBlueprintHelperLibrary");
    return (UAIBlueprintHelperLibrary*)res;
}
void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation"));
    struct Params_UnlockAIResourcesWithAnimation {
        UAnimInstance* AnimInstance; // 0x0
        bool bUnlockMovement; // 0x8
        bool UnlockAILogic; // 0x9
    }; // Size: 0xa
    Params_UnlockAIResourcesWithAnimation params{};
    params.AnimInstance = (UAnimInstance*)AnimInstance;
    params.bUnlockMovement = (bool)bUnlockMovement;
    params.UnlockAILogic = (bool)UnlockAILogic;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAIBlueprintHelperLibrary::SimpleMoveToLocation(AController* Controller, FVector& Goal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation"));
    struct Params_SimpleMoveToLocation {
        AController* Controller; // 0x0
        FVector Goal; // 0x8
    }; // Size: 0x14
    Params_SimpleMoveToLocation params{};
    params.Controller = (AController*)Controller;
    params.Goal = (FVector)Goal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Goal = params.Goal;
}
APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(UObject* WorldContextObject, UClass* PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass"));
    struct Params_SpawnAIFromClass {
        UObject* WorldContextObject; // 0x0
        UClass* PawnClass; // 0x8
        UBehaviorTree* BehaviorTree; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        bool bNoCollisionFail; // 0x30
        char pad_31[0x7];
        AActor* Owner; // 0x38
        APawn* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_SpawnAIFromClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PawnClass = (UClass*)PawnClass;
    params.BehaviorTree = (UBehaviorTree*)BehaviorTree;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.bNoCollisionFail = (bool)bNoCollisionFail;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
void UAIBlueprintHelperLibrary::SimpleMoveToActor(AController* Controller, AActor* Goal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor"));
    struct Params_SimpleMoveToActor {
        AController* Controller; // 0x0
        AActor* Goal; // 0x8
    }; // Size: 0x10
    Params_SimpleMoveToActor params{};
    params.Controller = (AController*)Controller;
    params.Goal = (AActor*)Goal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAIBlueprintHelperLibrary::SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage"));
    struct Params_SendAIMessage {
        APawn* Target; // 0x0
        FName Message; // 0x8
        UObject* MessageSource; // 0x10
        bool bSuccess; // 0x18
    }; // Size: 0x19
    Params_SendAIMessage params{};
    params.Target = (APawn*)Target;
    params.Message = (FName)Message;
    params.MessageSource = (UObject*)MessageSource;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation"));
    struct Params_LockAIResourcesWithAnimation {
        UAnimInstance* AnimInstance; // 0x0
        bool bLockMovement; // 0x8
        bool LockAILogic; // 0x9
    }; // Size: 0xa
    Params_LockAIResourcesWithAnimation params{};
    params.AnimInstance = (UAnimInstance*)AnimInstance;
    params.bLockMovement = (bool)bLockMovement;
    params.LockAILogic = (bool)LockAILogic;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAIBlueprintHelperLibrary::IsValidAILocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation"));
    struct Params_IsValidAILocation {
        FVector Location; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsValidAILocation params{};
    params.Location = (FVector)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAIBlueprintHelperLibrary::IsValidAIDirection(FVector DirectionVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection"));
    struct Params_IsValidAIDirection {
        FVector DirectionVector; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsValidAIDirection params{};
    params.DirectionVector = (FVector)DirectionVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UAIBlueprintHelperLibrary::GetNextNavLinkIndex(AController* Controller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex"));
    struct Params_GetNextNavLinkIndex {
        AController* Controller; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetNextNavLinkIndex params{};
    params.Controller = (AController*)Controller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(AController* Controller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints"));
    struct Params_GetCurrentPathPoints {
        AController* Controller; // 0x0
        TArray<FVector> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCurrentPathPoints params{};
    params.Controller = (AController*)Controller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
int32_t UAIBlueprintHelperLibrary::GetCurrentPathIndex(AController* Controller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex"));
    struct Params_GetCurrentPathIndex {
        AController* Controller; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurrentPathIndex params{};
    params.Controller = (AController*)Controller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(AController* Controller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath"));
    struct Params_GetCurrentPath {
        AController* Controller; // 0x0
        UNavigationPath* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCurrentPath params{};
    params.Controller = (AController*)Controller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNavigationPath*)params.ReturnValue;
}
UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard"));
    struct Params_GetBlackboard {
        AActor* Target; // 0x0
        UBlackboardComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBlackboard params{};
    params.Target = (AActor*)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBlackboardComponent*)params.ReturnValue;
}
AAIController* UAIBlueprintHelperLibrary::GetAIController(AActor* ControlledActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController"));
    struct Params_GetAIController {
        AActor* ControlledActor; // 0x0
        AAIController* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAIController params{};
    params.ControlledActor = (AActor*)ControlledActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AAIController*)params.ReturnValue;
}
UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject"));
    struct Params_CreateMoveToProxyObject {
        UObject* WorldContextObject; // 0x0
        APawn* Pawn; // 0x8
        FVector Destination; // 0x10
        char pad_1c[0x4];
        AActor* TargetActor; // 0x20
        float AcceptanceRadius; // 0x28
        bool bStopOnOverlap; // 0x2c
        char pad_2d[0x3];
        UAIAsyncTaskBlueprintProxy* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateMoveToProxyObject params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Pawn = (APawn*)Pawn;
    params.Destination = (FVector)Destination;
    params.TargetActor = (AActor*)TargetActor;
    params.AcceptanceRadius = (float)AcceptanceRadius;
    params.bStopOnOverlap = (bool)bStopOnOverlap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAIAsyncTaskBlueprintProxy*)params.ReturnValue;
}

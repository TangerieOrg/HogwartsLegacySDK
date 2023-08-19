#include "AAIController.hpp"
#include "ASocialAIController.hpp"
#include "EPathFollowingRequestResult\Type.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
float ASocialAIController::GetRequestedSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SocialDisplay.SocialAIController.GetRequestedSpeed"));
    struct Params_GetRequestedSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRequestedSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ASocialAIController* ASocialAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialAIController");
    return (ASocialAIController*)res;
}
void ASocialAIController::SetRequestedSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SocialDisplay.SocialAIController.SetRequestedSpeed"));
    struct Params_SetRequestedSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_SetRequestedSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
EPathFollowingRequestResult::Type ASocialAIController::PlayerMoveToDestination(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPaths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SocialDisplay.SocialAIController.PlayerMoveToDestination"));
    struct Params_PlayerMoveToDestination {
        FVector Dest; // 0x0
        float AcceptanceRadius; // 0xc
        bool bStopOnOverlap; // 0x10
        bool bUsePathfinding; // 0x11
        bool bProjectDestinationToNavigation; // 0x12
        bool bCanStrafe; // 0x13
        char pad_14[0x4];
        UClass* FilterClass; // 0x18
        bool bAllowPartialPaths; // 0x20
        EPathFollowingRequestResult::Type ReturnValue; // 0x21
    }; // Size: 0x22
    Params_PlayerMoveToDestination params{};
    params.Dest = (FVector)Dest;
    params.AcceptanceRadius = (float)AcceptanceRadius;
    params.bStopOnOverlap = (bool)bStopOnOverlap;
    params.bUsePathfinding = (bool)bUsePathfinding;
    params.bProjectDestinationToNavigation = (bool)bProjectDestinationToNavigation;
    params.bCanStrafe = (bool)bCanStrafe;
    params.FilterClass = (UClass*)FilterClass;
    params.bAllowPartialPaths = (bool)bAllowPartialPaths;
    ProcessEvent(func, &params);
    Dest = params.Dest;
    return (EPathFollowingRequestResult::Type)params.ReturnValue;
}
float ASocialAIController::GetPathDistanceToGoal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SocialDisplay.SocialAIController.GetPathDistanceToGoal"));
    struct Params_GetPathDistanceToGoal {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPathDistanceToGoal params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

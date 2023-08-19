#pragma once
#include <cstdint>
#include "AAIController.hpp"
#include "EPathFollowingRequestResult\Type.hpp"
struct FVector;
class UClass;
#pragma pack(push, 1)
class ASocialAIController : public AAIController {
public:
    char pad_350[0x108];
    static ASocialAIController* StaticClass();
    void SetRequestedSpeed(float InSpeed);
    EPathFollowingRequestResult::Type PlayerMoveToDestination(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPaths);
    float GetRequestedSpeed();
    float GetPathDistanceToGoal();
}; // Size: 0x458
#pragma pack(pop)

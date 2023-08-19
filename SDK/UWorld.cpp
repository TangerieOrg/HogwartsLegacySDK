#include "AGameModeBase.hpp"
#include "AGameNetworkManager.hpp"
#include "AGameStateBase.hpp"
#include "AParticleEventManager.hpp"
#include "APhysicsVolume.hpp"
#include "AWorldSettings.hpp"
#include "FLevelCollection.hpp"
#include "FStreamingLevelsToConsider.hpp"
#include "FWorldPSCPool.hpp"
#include "UAISystemBase.hpp"
#include "UActorComponent.hpp"
#include "UAvoidanceManager.hpp"
#include "UCanvas.hpp"
#include "UDemoNetDriver.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "ULevel.hpp"
#include "ULevelStreaming.hpp"
#include "ULineBatchComponent.hpp"
#include "UMaterialParameterCollectionInstance.hpp"
#include "UNavigationSystemBase.hpp"
#include "UNetDriver.hpp"
#include "UObject.hpp"
#include "UPhysicsCollisionHandler.hpp"
#include "UPhysicsFieldComponent.hpp"
#include "UWorld.hpp"
#include "UWorldComposition.hpp"
UWorld* UWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.World");
    return (UWorld*)res;
}
AWorldSettings* UWorld::K2_GetWorldSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.World.K2_GetWorldSettings"));
    struct Params_K2_GetWorldSettings {
        AWorldSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_K2_GetWorldSettings params{};
    ProcessEvent(func, &params);
    return (AWorldSettings*)params.ReturnValue;
}
void UWorld::HandleTimelineScrubbed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.World.HandleTimelineScrubbed"));
    struct Params_HandleTimelineScrubbed {
    }; // Size: 0x0
    Params_HandleTimelineScrubbed params{};
    ProcessEvent(func, &params);
}

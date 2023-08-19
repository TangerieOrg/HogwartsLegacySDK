#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "UObject.hpp"
class AActor;
class UWorld;
#pragma pack(push, 1)
class UDynamicObstacleManager : public UObject {
public:
    char pad_28[0x20];
    static UDynamicObstacleManager* StaticClass();
    void OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason);
    void OnActorDestroyed(AActor* DestroyedActor);
    static UDynamicObstacleManager* GetDynamicObstacleManager(UObject* WorldContext);
    static UDynamicObstacleManager* Get(UWorld* World);
}; // Size: 0x48
#pragma pack(pop)

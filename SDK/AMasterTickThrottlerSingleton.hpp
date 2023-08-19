#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UActorComponent;
struct FMasterTickThrottlerSettings;
#pragma pack(push, 1)
class AMasterTickThrottlerSingleton : public AActor {
public:
    char pad_248[0xa0];
    FVector LastEye; // 0x2e8
    bool bLastEyeValid; // 0x2f4
    char pad_2f5[0x3];
    static AMasterTickThrottlerSingleton* StaticClass();
    static void RemoveManagedComponent(UActorComponent* Component);
    static void RemoveManagedActor(AActor* Actor);
    static void IsManagedComponent(UActorComponent* Component, bool& bIsManaged);
    static void IsManagedActor(AActor* Actor, bool& bIsManaged);
    static void IsComponentThrottled(UActorComponent* Component, bool& bIsThrottled);
    static void IsActorThrottled(AActor* Actor, bool& bIsThrottled);
    static void EnableComponentThrottling(UActorComponent* Component, bool bEnable);
    static void EnableActorThrottling(AActor* Actor, bool bEnable);
    static void DisableComponentThrottling(UActorComponent* Component);
    static void DisableActorThrottling(AActor* Actor);
    static void AddManagedComponent(UActorComponent* Component, FMasterTickThrottlerSettings& Settings);
    static void AddManagedActor(AActor* Actor, FMasterTickThrottlerSettings& Settings);
}; // Size: 0x2f8
#pragma pack(pop)

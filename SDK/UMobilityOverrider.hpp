#pragma once
#include <cstdint>
#include "EMobilityOverride.hpp"
#include "UObject.hpp"
class USceneComponent;
class AActor;
#pragma pack(push, 1)
class UMobilityOverrider : public UObject {
public:
    static UMobilityOverrider* StaticClass();
    static void ComponentOverrideMobility(USceneComponent* SceneComponent, EMobilityOverride mobilityOverride, EMobilityOverride lightMobilityOverride, bool includeChildren);
    static void ActorOverrideMobility(AActor* Actor, EMobilityOverride mobilityOverride, EMobilityOverride lightMobilityOverride, bool includeChildren);
}; // Size: 0x28
#pragma pack(pop)

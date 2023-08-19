#include "AActor.hpp"
#include "UHoudiniInstancedActorComponent.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
UHoudiniInstancedActorComponent* UHoudiniInstancedActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent");
    return (UHoudiniInstancedActorComponent*)res;
}

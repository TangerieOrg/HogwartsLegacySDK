#include "UActorComponent.hpp"
#include "UChaosDebugDrawComponent.hpp"
UChaosDebugDrawComponent* UChaosDebugDrawComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent");
    return (UChaosDebugDrawComponent*)res;
}

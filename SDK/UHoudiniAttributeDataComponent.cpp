#include "UActorComponent.hpp"
#include "UHoudiniAttributeDataComponent.hpp"
UHoudiniAttributeDataComponent* UHoudiniAttributeDataComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAttributeDataComponent");
    return (UHoudiniAttributeDataComponent*)res;
}

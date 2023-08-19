#include "EHoudiniHandleType.hpp"
#include "UHoudiniHandleComponent.hpp"
#include "USceneComponent.hpp"
UHoudiniHandleComponent* UHoudiniHandleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent");
    return (UHoudiniHandleComponent*)res;
}

#include "UActorComponent.hpp"
#include "UApplicationLifecycleComponent.hpp"
UApplicationLifecycleComponent* UApplicationLifecycleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ApplicationLifecycleComponent");
    return (UApplicationLifecycleComponent*)res;
}

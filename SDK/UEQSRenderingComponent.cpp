#include "UEQSRenderingComponent.hpp"
#include "UPrimitiveComponent.hpp"
UEQSRenderingComponent* UEQSRenderingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EQSRenderingComponent");
    return (UEQSRenderingComponent*)res;
}

#include "UNavTestRenderingComponent.hpp"
#include "UPrimitiveComponent.hpp"
UNavTestRenderingComponent* UNavTestRenderingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavTestRenderingComponent");
    return (UNavTestRenderingComponent*)res;
}

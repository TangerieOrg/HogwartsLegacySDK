#include "ULandscapeGizmoRenderComponent.hpp"
#include "UPrimitiveComponent.hpp"
ULandscapeGizmoRenderComponent* ULandscapeGizmoRenderComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeGizmoRenderComponent");
    return (ULandscapeGizmoRenderComponent*)res;
}

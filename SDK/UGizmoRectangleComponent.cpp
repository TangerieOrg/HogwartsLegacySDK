#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#include "UGizmoRectangleComponent.hpp"
UGizmoRectangleComponent* UGizmoRectangleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoRectangleComponent");
    return (UGizmoRectangleComponent*)res;
}

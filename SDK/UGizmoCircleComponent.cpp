#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#include "UGizmoCircleComponent.hpp"
UGizmoCircleComponent* UGizmoCircleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoCircleComponent");
    return (UGizmoCircleComponent*)res;
}

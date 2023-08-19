#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#include "UGizmoLineHandleComponent.hpp"
UGizmoLineHandleComponent* UGizmoLineHandleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent");
    return (UGizmoLineHandleComponent*)res;
}

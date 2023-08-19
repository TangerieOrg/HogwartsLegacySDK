#include "FQuat.hpp"
#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#include "UGizmoBoxComponent.hpp"
UGizmoBoxComponent* UGizmoBoxComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoBoxComponent");
    return (UGizmoBoxComponent*)res;
}

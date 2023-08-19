#include "UInteractiveGizmoBuilder.hpp"
#include "UPlanePositionGizmoBuilder.hpp"
UPlanePositionGizmoBuilder* UPlanePositionGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder");
    return (UPlanePositionGizmoBuilder*)res;
}

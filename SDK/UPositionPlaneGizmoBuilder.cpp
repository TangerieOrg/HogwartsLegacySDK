#include "UInteractiveGizmoBuilder.hpp"
#include "UPositionPlaneGizmoBuilder.hpp"
UPositionPlaneGizmoBuilder* UPositionPlaneGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PositionPlaneGizmoBuilder");
    return (UPositionPlaneGizmoBuilder*)res;
}

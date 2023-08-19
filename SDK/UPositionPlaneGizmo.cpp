#include "UInteractiveGizmo.hpp"
#include "UMaterialInstance.hpp"
#include "UPositionPlaneGizmo.hpp"
#include "UPreviewMesh.hpp"
UPositionPlaneGizmo* UPositionPlaneGizmo::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PositionPlaneGizmo");
    return (UPositionPlaneGizmo*)res;
}

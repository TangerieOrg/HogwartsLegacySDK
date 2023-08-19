#include "UMeshBoundaryToolBase.hpp"
#include "UPolygonSelectionMechanic.hpp"
#include "USingleClickInputBehavior.hpp"
#include "USingleSelectionTool.hpp"
UMeshBoundaryToolBase* UMeshBoundaryToolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshBoundaryToolBase");
    return (UMeshBoundaryToolBase*)res;
}

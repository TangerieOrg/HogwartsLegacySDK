#include "USingleSelectionTool.hpp"
#include "UWeldMeshEdgesTool.hpp"
UWeldMeshEdgesTool* UWeldMeshEdgesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.WeldMeshEdgesTool");
    return (UWeldMeshEdgesTool*)res;
}

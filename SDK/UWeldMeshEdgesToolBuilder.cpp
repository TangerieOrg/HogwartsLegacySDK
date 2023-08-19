#include "UInteractiveToolBuilder.hpp"
#include "UWeldMeshEdgesToolBuilder.hpp"
UWeldMeshEdgesToolBuilder* UWeldMeshEdgesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.WeldMeshEdgesToolBuilder");
    return (UWeldMeshEdgesToolBuilder*)res;
}

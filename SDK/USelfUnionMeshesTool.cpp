#include "UBaseCreateFromSelectedTool.hpp"
#include "ULineSetComponent.hpp"
#include "USelfUnionMeshesTool.hpp"
#include "USelfUnionMeshesToolProperties.hpp"
USelfUnionMeshesTool* USelfUnionMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SelfUnionMeshesTool");
    return (USelfUnionMeshesTool*)res;
}

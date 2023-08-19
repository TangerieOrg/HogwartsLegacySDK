#include "UBaseCreateFromSelectedTool.hpp"
#include "UCSGMeshesTool.hpp"
#include "UCSGMeshesToolProperties.hpp"
#include "ULineSetComponent.hpp"
UCSGMeshesTool* UCSGMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CSGMeshesTool");
    return (UCSGMeshesTool*)res;
}

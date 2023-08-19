#include "UBaseCreateFromSelectedToolBuilder.hpp"
#include "USelfUnionMeshesToolBuilder.hpp"
USelfUnionMeshesToolBuilder* USelfUnionMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SelfUnionMeshesToolBuilder");
    return (USelfUnionMeshesToolBuilder*)res;
}

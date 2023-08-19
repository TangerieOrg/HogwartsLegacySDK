#include "UBaseCreateFromSelectedToolBuilder.hpp"
#include "UCSGMeshesToolBuilder.hpp"
UCSGMeshesToolBuilder* UCSGMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CSGMeshesToolBuilder");
    return (UCSGMeshesToolBuilder*)res;
}

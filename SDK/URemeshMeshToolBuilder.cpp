#include "UInteractiveToolBuilder.hpp"
#include "URemeshMeshToolBuilder.hpp"
URemeshMeshToolBuilder* URemeshMeshToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemeshMeshToolBuilder");
    return (URemeshMeshToolBuilder*)res;
}

#include "UBaseMeshProcessingToolBuilder.hpp"
#include "UOffsetMeshToolBuilder.hpp"
UOffsetMeshToolBuilder* UOffsetMeshToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.OffsetMeshToolBuilder");
    return (UOffsetMeshToolBuilder*)res;
}

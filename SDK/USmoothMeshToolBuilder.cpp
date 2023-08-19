#include "UBaseMeshProcessingToolBuilder.hpp"
#include "USmoothMeshToolBuilder.hpp"
USmoothMeshToolBuilder* USmoothMeshToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SmoothMeshToolBuilder");
    return (USmoothMeshToolBuilder*)res;
}

#include "UBaseMeshProcessingTool.hpp"
#include "UImplicitOffsetProperties.hpp"
#include "UIterativeOffsetProperties.hpp"
#include "UOffsetMeshTool.hpp"
#include "UOffsetMeshToolProperties.hpp"
#include "UOffsetWeightMapSetProperties.hpp"
UOffsetMeshTool* UOffsetMeshTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.OffsetMeshTool");
    return (UOffsetMeshTool*)res;
}

#include "UInteractiveToolPropertySet.hpp"
#include "UMeshAnalysisProperties.hpp"
UMeshAnalysisProperties* UMeshAnalysisProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshAnalysisProperties");
    return (UMeshAnalysisProperties*)res;
}

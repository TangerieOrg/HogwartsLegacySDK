#include "UProjectToTargetToolProperties.hpp"
#include "URemeshMeshToolProperties.hpp"
UProjectToTargetToolProperties* UProjectToTargetToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProjectToTargetToolProperties");
    return (UProjectToTargetToolProperties*)res;
}

#include "ESmoothMeshToolSmoothType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "USmoothMeshToolProperties.hpp"
USmoothMeshToolProperties* USmoothMeshToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SmoothMeshToolProperties");
    return (USmoothMeshToolProperties*)res;
}

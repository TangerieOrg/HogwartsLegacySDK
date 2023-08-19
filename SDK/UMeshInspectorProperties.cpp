#include "UInteractiveToolPropertySet.hpp"
#include "UMeshInspectorProperties.hpp"
UMeshInspectorProperties* UMeshInspectorProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshInspectorProperties");
    return (UMeshInspectorProperties*)res;
}

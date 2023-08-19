#include "EMeshFacesColorMode.hpp"
#include "EMeshSelectionToolPrimaryMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UMeshSelectionToolProperties.hpp"
UMeshSelectionToolProperties* UMeshSelectionToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSelectionToolProperties");
    return (UMeshSelectionToolProperties*)res;
}

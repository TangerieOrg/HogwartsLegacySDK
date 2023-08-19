#include "UInteractiveToolPropertySet.hpp"
#include "UMeshSelectionToolActionPropertySet.hpp"
UMeshSelectionToolActionPropertySet* UMeshSelectionToolActionPropertySet::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSelectionToolActionPropertySet");
    return (UMeshSelectionToolActionPropertySet*)res;
}

#include "UInteractiveToolPropertySet.hpp"
#include "UMeshAttributePaintEditActions.hpp"
UMeshAttributePaintEditActions* UMeshAttributePaintEditActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshAttributePaintEditActions");
    return (UMeshAttributePaintEditActions*)res;
}

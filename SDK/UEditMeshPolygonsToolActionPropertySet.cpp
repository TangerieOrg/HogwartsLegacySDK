#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#include "UInteractiveToolPropertySet.hpp"
UEditMeshPolygonsToolActionPropertySet* UEditMeshPolygonsToolActionPropertySet::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
    return (UEditMeshPolygonsToolActionPropertySet*)res;
}

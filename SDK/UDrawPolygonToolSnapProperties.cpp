#include "UDrawPolygonToolSnapProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDrawPolygonToolSnapProperties* UDrawPolygonToolSnapProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolygonToolSnapProperties");
    return (UDrawPolygonToolSnapProperties*)res;
}

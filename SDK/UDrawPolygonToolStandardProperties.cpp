#include "EDrawPolygonDrawMode.hpp"
#include "EDrawPolygonOutputMode.hpp"
#include "UDrawPolygonToolStandardProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDrawPolygonToolStandardProperties* UDrawPolygonToolStandardProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolygonToolStandardProperties");
    return (UDrawPolygonToolStandardProperties*)res;
}

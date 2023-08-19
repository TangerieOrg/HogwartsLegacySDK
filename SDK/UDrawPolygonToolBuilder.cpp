#include "UDrawPolygonToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UDrawPolygonToolBuilder* UDrawPolygonToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolygonToolBuilder");
    return (UDrawPolygonToolBuilder*)res;
}

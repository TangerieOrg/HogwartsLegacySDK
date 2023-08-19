#include "UInteractiveToolPropertySet.hpp"
#include "UPolygonSelectionMechanicProperties.hpp"
UPolygonSelectionMechanicProperties* UPolygonSelectionMechanicProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PolygonSelectionMechanicProperties");
    return (UPolygonSelectionMechanicProperties*)res;
}

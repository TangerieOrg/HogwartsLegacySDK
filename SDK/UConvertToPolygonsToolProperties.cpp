#include "EConvertToPolygonsMode.hpp"
#include "UConvertToPolygonsToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UConvertToPolygonsToolProperties* UConvertToPolygonsToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ConvertToPolygonsToolProperties");
    return (UConvertToPolygonsToolProperties*)res;
}

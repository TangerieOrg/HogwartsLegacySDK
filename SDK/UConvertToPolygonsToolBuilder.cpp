#include "UConvertToPolygonsToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UConvertToPolygonsToolBuilder* UConvertToPolygonsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ConvertToPolygonsToolBuilder");
    return (UConvertToPolygonsToolBuilder*)res;
}

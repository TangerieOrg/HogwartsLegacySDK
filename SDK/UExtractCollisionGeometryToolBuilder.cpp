#include "UExtractCollisionGeometryToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UExtractCollisionGeometryToolBuilder* UExtractCollisionGeometryToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ExtractCollisionGeometryToolBuilder");
    return (UExtractCollisionGeometryToolBuilder*)res;
}

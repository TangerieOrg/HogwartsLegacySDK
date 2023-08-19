#include "UInteractiveToolBuilder.hpp"
#include "USetCollisionGeometryToolBuilder.hpp"
USetCollisionGeometryToolBuilder* USetCollisionGeometryToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SetCollisionGeometryToolBuilder");
    return (USetCollisionGeometryToolBuilder*)res;
}

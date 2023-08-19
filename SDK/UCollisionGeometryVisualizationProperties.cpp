#include "FColor.hpp"
#include "UCollisionGeometryVisualizationProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UCollisionGeometryVisualizationProperties* UCollisionGeometryVisualizationProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CollisionGeometryVisualizationProperties");
    return (UCollisionGeometryVisualizationProperties*)res;
}

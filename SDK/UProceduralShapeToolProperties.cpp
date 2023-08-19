#include "EMakeMeshPivotLocation.hpp"
#include "EMakeMeshPlacementType.hpp"
#include "EMakeMeshPolygroupMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UProceduralShapeToolProperties.hpp"
UProceduralShapeToolProperties* UProceduralShapeToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralShapeToolProperties");
    return (UProceduralShapeToolProperties*)res;
}

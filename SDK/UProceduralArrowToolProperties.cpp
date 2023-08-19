#include "UProceduralArrowToolProperties.hpp"
#include "UProceduralShapeToolProperties.hpp"
UProceduralArrowToolProperties* UProceduralArrowToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralArrowToolProperties");
    return (UProceduralArrowToolProperties*)res;
}

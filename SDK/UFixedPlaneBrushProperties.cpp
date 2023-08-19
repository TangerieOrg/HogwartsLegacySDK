#include "FQuat.hpp"
#include "FVector.hpp"
#include "UFixedPlaneBrushProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UFixedPlaneBrushProperties* UFixedPlaneBrushProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.FixedPlaneBrushProperties");
    return (UFixedPlaneBrushProperties*)res;
}

#include "UInteractiveToolPropertySet.hpp"
#include "USculptMaxBrushProperties.hpp"
USculptMaxBrushProperties* USculptMaxBrushProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SculptMaxBrushProperties");
    return (USculptMaxBrushProperties*)res;
}

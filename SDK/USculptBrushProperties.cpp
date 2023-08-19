#include "UBrushBaseProperties.hpp"
#include "USculptBrushProperties.hpp"
USculptBrushProperties* USculptBrushProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SculptBrushProperties");
    return (USculptBrushProperties*)res;
}

#include "UInteractiveToolPropertySet.hpp"
#include "UKelvinBrushProperties.hpp"
UKelvinBrushProperties* UKelvinBrushProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.KelvinBrushProperties");
    return (UKelvinBrushProperties*)res;
}

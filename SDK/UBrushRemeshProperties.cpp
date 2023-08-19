#include "UBrushRemeshProperties.hpp"
#include "URemeshProperties.hpp"
UBrushRemeshProperties* UBrushRemeshProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BrushRemeshProperties");
    return (UBrushRemeshProperties*)res;
}

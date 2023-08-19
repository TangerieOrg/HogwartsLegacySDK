#include "UInteractiveToolPropertySet.hpp"
#include "USeamSculptToolProperties.hpp"
USeamSculptToolProperties* USeamSculptToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SeamSculptToolProperties");
    return (USeamSculptToolProperties*)res;
}

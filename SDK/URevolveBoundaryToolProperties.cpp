#include "FVector.hpp"
#include "URevolveBoundaryToolProperties.hpp"
#include "URevolveProperties.hpp"
URevolveBoundaryToolProperties* URevolveBoundaryToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveBoundaryToolProperties");
    return (URevolveBoundaryToolProperties*)res;
}

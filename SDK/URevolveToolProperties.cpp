#include "FRotator.hpp"
#include "FVector.hpp"
#include "URevolveProperties.hpp"
#include "URevolveToolProperties.hpp"
URevolveToolProperties* URevolveToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveToolProperties");
    return (URevolveToolProperties*)res;
}

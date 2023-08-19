#include "FNoiseParams2D.hpp"
#include "UDynamicNoiseNormals.hpp"
#include "UDynamicNoiseNormalsBase.hpp"
UDynamicNoiseNormals* UDynamicNoiseNormals::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseNormals");
    return (UDynamicNoiseNormals*)res;
}

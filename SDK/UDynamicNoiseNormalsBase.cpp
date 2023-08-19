#include "UDynamicNoiseNormalsBase.hpp"
#include "UDynamicNoiseTextureBase.hpp"
UDynamicNoiseNormalsBase* UDynamicNoiseNormalsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseNormalsBase");
    return (UDynamicNoiseNormalsBase*)res;
}

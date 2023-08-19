#include "FOctaveNoiseParams.hpp"
#include "UDynamicNoiseNormalsBase.hpp"
#include "UDynamicNoiseOctaveNormals.hpp"
UDynamicNoiseOctaveNormals* UDynamicNoiseOctaveNormals::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseOctaveNormals");
    return (UDynamicNoiseOctaveNormals*)res;
}

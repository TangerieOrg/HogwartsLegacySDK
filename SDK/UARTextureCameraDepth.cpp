#include "EARDepthAccuracy.hpp"
#include "EARDepthQuality.hpp"
#include "UARTexture.hpp"
#include "UARTextureCameraDepth.hpp"
UARTextureCameraDepth* UARTextureCameraDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTextureCameraDepth");
    return (UARTextureCameraDepth*)res;
}

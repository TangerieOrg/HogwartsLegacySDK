#include "UARTexture.hpp"
#include "UARTextureCameraImage.hpp"
UARTextureCameraImage* UARTextureCameraImage::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTextureCameraImage");
    return (UARTextureCameraImage*)res;
}

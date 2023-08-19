#include "EARTextureType.hpp"
#include "FGuid.hpp"
#include "FVector2D.hpp"
#include "UAREnvironmentCaptureProbeTexture.hpp"
#include "UTextureCube.hpp"
UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbeTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture");
    return (UAREnvironmentCaptureProbeTexture*)res;
}

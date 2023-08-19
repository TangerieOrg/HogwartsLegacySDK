#include "EARTextureType.hpp"
#include "FGuid.hpp"
#include "FVector2D.hpp"
#include "UARTexture.hpp"
#include "UTexture.hpp"
UARTexture* UARTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTexture");
    return (UARTexture*)res;
}

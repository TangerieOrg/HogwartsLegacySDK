#include "ULightMapVirtualTexture.hpp"
#include "UVirtualTexture.hpp"
ULightMapVirtualTexture* ULightMapVirtualTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightMapVirtualTexture");
    return (ULightMapVirtualTexture*)res;
}

#include "ULightMapVirtualTexture2D.hpp"
#include "UTexture2D.hpp"
ULightMapVirtualTexture2D* ULightMapVirtualTexture2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightMapVirtualTexture2D");
    return (ULightMapVirtualTexture2D*)res;
}

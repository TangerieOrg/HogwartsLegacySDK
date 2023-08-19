#include "FVirtualTextureBuildSettings.hpp"
#include "UTexture2D.hpp"
#include "UVirtualTexture2D.hpp"
UVirtualTexture2D* UVirtualTexture2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VirtualTexture2D");
    return (UVirtualTexture2D*)res;
}

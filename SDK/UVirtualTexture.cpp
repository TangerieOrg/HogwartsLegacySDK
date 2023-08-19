#include "UObject.hpp"
#include "UVirtualTexture.hpp"
UVirtualTexture* UVirtualTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VirtualTexture");
    return (UVirtualTexture*)res;
}

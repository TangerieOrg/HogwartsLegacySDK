#include "UObject.hpp"
#include "UVirtualTexture2D.hpp"
#include "UVirtualTextureBuilder.hpp"
UVirtualTextureBuilder* UVirtualTextureBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VirtualTextureBuilder");
    return (UVirtualTextureBuilder*)res;
}

#include "URuntimeVirtualTextureStreamingProxy.hpp"
#include "UTexture2D.hpp"
URuntimeVirtualTextureStreamingProxy* URuntimeVirtualTextureStreamingProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RuntimeVirtualTextureStreamingProxy");
    return (URuntimeVirtualTextureStreamingProxy*)res;
}

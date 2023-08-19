#include "FVirtualTextureSpacePoolConfig.hpp"
#include "UObject.hpp"
#include "UVirtualTexturePoolConfig.hpp"
UVirtualTexturePoolConfig* UVirtualTexturePoolConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VirtualTexturePoolConfig");
    return (UVirtualTexturePoolConfig*)res;
}

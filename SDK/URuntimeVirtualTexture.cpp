#include "ERuntimeVirtualTextureMaterialType.hpp"
#include "TextureGroup.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URuntimeVirtualTexture.hpp"
#include "URuntimeVirtualTextureStreamingProxy.hpp"
URuntimeVirtualTexture* URuntimeVirtualTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RuntimeVirtualTexture");
    return (URuntimeVirtualTexture*)res;
}
int32_t URuntimeVirtualTexture::GetPageTableSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RuntimeVirtualTexture.GetPageTableSize"));
    struct Params_GetPageTableSize {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPageTableSize params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t URuntimeVirtualTexture::GetTileSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RuntimeVirtualTexture.GetTileSize"));
    struct Params_GetTileSize {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTileSize params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t URuntimeVirtualTexture::GetTileCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RuntimeVirtualTexture.GetTileCount"));
    struct Params_GetTileCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTileCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t URuntimeVirtualTexture::GetTileBorderSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RuntimeVirtualTexture.GetTileBorderSize"));
    struct Params_GetTileBorderSize {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTileBorderSize params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t URuntimeVirtualTexture::GetSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RuntimeVirtualTexture.GetSize"));
    struct Params_GetSize {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSize params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}

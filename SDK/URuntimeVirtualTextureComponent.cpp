#include "FBoxSphereBounds.hpp"
#include "UFunction.hpp"
#include "URuntimeVirtualTexture.hpp"
#include "URuntimeVirtualTextureComponent.hpp"
#include "USceneComponent.hpp"
#include "UVirtualTextureBuilder.hpp"
URuntimeVirtualTextureComponent* URuntimeVirtualTextureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RuntimeVirtualTextureComponent");
    return (URuntimeVirtualTextureComponent*)res;
}
void URuntimeVirtualTextureComponent::Invalidate(FBoxSphereBounds& WorldBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RuntimeVirtualTextureComponent.Invalidate"));
    struct Params_Invalidate {
        FBoxSphereBounds WorldBounds; // 0x0
    }; // Size: 0x1c
    Params_Invalidate params{};
    params.WorldBounds = (FBoxSphereBounds)WorldBounds;
    ProcessEvent(func, &params);
    WorldBounds = params.WorldBounds;
}

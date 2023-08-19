#include "UDynamicNoiseTextureBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
UDynamicNoiseTextureBase* UDynamicNoiseTextureBase::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseTextureBase");
    return (UDynamicNoiseTextureBase*)res;
}
UTexture2D* UDynamicNoiseTextureBase::GetDynamicTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.DynamicNoiseTextureBase.GetDynamicTexture"));
    struct Params_GetDynamicTexture {
        UTexture2D* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicTexture params{};
    ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}

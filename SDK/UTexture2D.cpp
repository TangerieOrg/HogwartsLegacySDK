#include "FIntPoint.hpp"
#include "TextureAddress.hpp"
#include "UFunction.hpp"
#include "UTexture.hpp"
#include "UTexture2D.hpp"
UTexture2D* UTexture2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Texture2D");
    return (UTexture2D*)res;
}
int32_t UTexture2D::Blueprint_GetSizeX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Texture2D.Blueprint_GetSizeX"));
    struct Params_Blueprint_GetSizeX {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Blueprint_GetSizeX params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UTexture2D::Blueprint_GetSizeY() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Texture2D.Blueprint_GetSizeY"));
    struct Params_Blueprint_GetSizeY {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Blueprint_GetSizeY params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}

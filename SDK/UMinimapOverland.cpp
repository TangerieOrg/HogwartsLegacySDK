#include "UFunction.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapOverland.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
UMinimapOverland* UMinimapOverland::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapOverland");
    return (UMinimapOverland*)res;
}
void UMinimapOverland::TextureLoadedCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapOverland.TextureLoadedCallback"));
    struct Params_TextureLoadedCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_TextureLoadedCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMinimapOverland::Init(bool LoadNavMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapOverland.Init"));
    struct Params_Init {
        bool LoadNavMesh; // 0x0
    }; // Size: 0x1
    Params_Init params{};
    params.LoadNavMesh = (bool)LoadNavMesh;
    ProcessEvent(func, &params);
}

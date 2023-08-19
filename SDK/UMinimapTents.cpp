#include "UFunction.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapTents.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
UMinimapTents* UMinimapTents::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapTents");
    return (UMinimapTents*)res;
}
void UMinimapTents::TextureLoadedCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapTents.TextureLoadedCallback"));
    struct Params_TextureLoadedCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_TextureLoadedCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMinimapTents::Init(bool LoadNavMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapTents.Init"));
    struct Params_Init {
        bool LoadNavMesh; // 0x0
    }; // Size: 0x1
    Params_Init params{};
    params.LoadNavMesh = (bool)LoadNavMesh;
    ProcessEvent(func, &params);
}
void UMinimapTents::ChangeLevel(int32_t LevelIndex, bool fromInit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapTents.ChangeLevel"));
    struct Params_ChangeLevel {
        int32_t LevelIndex; // 0x0
        bool fromInit; // 0x4
    }; // Size: 0x5
    Params_ChangeLevel params{};
    params.LevelIndex = (int32_t)LevelIndex;
    params.fromInit = (bool)fromInit;
    ProcessEvent(func, &params);
}

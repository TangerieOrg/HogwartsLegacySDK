#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapHogsmeade.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
FVector2D UMinimapHogsmeade::GetTopLeftBound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogsmeade.GetTopLeftBound"));
    struct Params_GetTopLeftBound {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTopLeftBound params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
UMinimapHogsmeade* UMinimapHogsmeade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapHogsmeade");
    return (UMinimapHogsmeade*)res;
}
void UMinimapHogsmeade::TextureLoadedCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogsmeade.TextureLoadedCallback"));
    struct Params_TextureLoadedCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_TextureLoadedCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
FVector2D UMinimapHogsmeade::GetBottomRightBound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogsmeade.GetBottomRightBound"));
    struct Params_GetBottomRightBound {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBottomRightBound params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMinimapHogsmeade::Init(bool LoadNavMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogsmeade.Init"));
    struct Params_Init {
        bool LoadNavMesh; // 0x0
    }; // Size: 0x1
    Params_Init params{};
    params.LoadNavMesh = (bool)LoadNavMesh;
    ProcessEvent(func, &params);
}
void UMinimapHogsmeade::ChangeLevel(int32_t LevelIndex, bool fromInit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogsmeade.ChangeLevel"));
    struct Params_ChangeLevel {
        int32_t LevelIndex; // 0x0
        bool fromInit; // 0x4
    }; // Size: 0x5
    Params_ChangeLevel params{};
    params.LevelIndex = (int32_t)LevelIndex;
    params.fromInit = (bool)fromInit;
    ProcessEvent(func, &params);
}
FVector UMinimapHogsmeade::GetDebugPlayerOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogsmeade.GetDebugPlayerOffset"));
    struct Params_GetDebugPlayerOffset {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetDebugPlayerOffset params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}

#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapHogwarts.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
void UMinimapHogwarts::Init(bool LoadNavMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.Init"));
    struct Params_Init {
        bool LoadNavMesh; // 0x0
    }; // Size: 0x1
    Params_Init params{};
    params.LoadNavMesh = (bool)LoadNavMesh;
    ProcessEvent(func, &params);
}
UMinimapHogwarts* UMinimapHogwarts::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapHogwarts");
    return (UMinimapHogwarts*)res;
}
void UMinimapHogwarts::TextureLoadedCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.TextureLoadedCallback"));
    struct Params_TextureLoadedCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_TextureLoadedCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMinimapHogwarts::SetCurrentFloor(int32_t Floor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.SetCurrentFloor"));
    struct Params_SetCurrentFloor {
        int32_t Floor; // 0x0
    }; // Size: 0x4
    Params_SetCurrentFloor params{};
    params.Floor = (int32_t)Floor;
    ProcessEvent(func, &params);
}
FVector2D UMinimapHogwarts::GetTopLeftBound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.GetTopLeftBound"));
    struct Params_GetTopLeftBound {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTopLeftBound params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UMinimapHogwarts::GetDebugPlayerOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.GetDebugPlayerOffset"));
    struct Params_GetDebugPlayerOffset {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetDebugPlayerOffset params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t UMinimapHogwarts::GetCurrentFloor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.GetCurrentFloor"));
    struct Params_GetCurrentFloor {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentFloor params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector2D UMinimapHogwarts::GetBottomRightBound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.GetBottomRightBound"));
    struct Params_GetBottomRightBound {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBottomRightBound params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMinimapHogwarts::ChangeLevel(int32_t LevelIndex, bool fromInit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapHogwarts.ChangeLevel"));
    struct Params_ChangeLevel {
        int32_t LevelIndex; // 0x0
        bool fromInit; // 0x4
    }; // Size: 0x5
    Params_ChangeLevel params{};
    params.LevelIndex = (int32_t)LevelIndex;
    params.fromInit = (bool)fromInit;
    ProcessEvent(func, &params);
}

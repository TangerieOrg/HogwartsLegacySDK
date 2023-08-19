#include "ESanctuaryMiniMapType\Type.hpp"
#include "UFunction.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapSanctuary.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
void UMinimapSanctuary::ChangeLevel(int32_t LevelIndex, bool fromInit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapSanctuary.ChangeLevel"));
    struct Params_ChangeLevel {
        int32_t LevelIndex; // 0x0
        bool fromInit; // 0x4
    }; // Size: 0x5
    Params_ChangeLevel params{};
    params.LevelIndex = (int32_t)LevelIndex;
    params.fromInit = (bool)fromInit;
    ProcessEvent(func, &params);
}
UMinimapSanctuary* UMinimapSanctuary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapSanctuary");
    return (UMinimapSanctuary*)res;
}
void UMinimapSanctuary::TextureLoadedCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapSanctuary.TextureLoadedCallback"));
    struct Params_TextureLoadedCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_TextureLoadedCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMinimapSanctuary::SetMapType(ESanctuaryMiniMapType::Type MapType, bool LoadNavMesh, bool fromInit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapSanctuary.SetMapType"));
    struct Params_SetMapType {
        ESanctuaryMiniMapType::Type MapType; // 0x0
        bool LoadNavMesh; // 0x1
        bool fromInit; // 0x2
    }; // Size: 0x3
    Params_SetMapType params{};
    params.MapType = (ESanctuaryMiniMapType::Type)MapType;
    params.LoadNavMesh = (bool)LoadNavMesh;
    params.fromInit = (bool)fromInit;
    ProcessEvent(func, &params);
}
void UMinimapSanctuary::Init(bool LoadNavMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapSanctuary.Init"));
    struct Params_Init {
        bool LoadNavMesh; // 0x0
    }; // Size: 0x1
    Params_Init params{};
    params.LoadNavMesh = (bool)LoadNavMesh;
    ProcessEvent(func, &params);
}
void UMinimapSanctuary::SetHubLevelUnlock(FString NameOfUnlock, bool LoadTexture, bool FromLoadGame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapSanctuary.SetHubLevelUnlock"));
    struct Params_SetHubLevelUnlock {
        FString NameOfUnlock; // 0x0
        bool LoadTexture; // 0x10
        bool FromLoadGame; // 0x11
    }; // Size: 0x12
    Params_SetHubLevelUnlock params{};
    params.NameOfUnlock = (FString)NameOfUnlock;
    params.LoadTexture = (bool)LoadTexture;
    params.FromLoadGame = (bool)FromLoadGame;
    ProcessEvent(func, &params);
}

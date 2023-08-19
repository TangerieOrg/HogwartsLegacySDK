#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneRigShimDynamic.hpp"
USceneRigShimDynamic* USceneRigShimDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRigShim.SceneRigShimDynamic");
    return (USceneRigShimDynamic*)res;
}
void USceneRigShimDynamic::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRigShim.SceneRigShimDynamic.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void USceneRigShimDynamic::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRigShim.SceneRigShimDynamic.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}

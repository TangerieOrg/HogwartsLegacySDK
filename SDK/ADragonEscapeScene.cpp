#include "AActor.hpp"
#include "ADragonEscapeScene.hpp"
#include "UFunction.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
#include "USceneRigStageParameterBlock.hpp"
ADragonEscapeScene* ADragonEscapeScene::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DragonEscapeScene");
    return (ADragonEscapeScene*)res;
}
void ADragonEscapeScene::QueueFinalRelease() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DragonEscapeScene.QueueFinalRelease"));
    struct Params_QueueFinalRelease {
    }; // Size: 0x0
    Params_QueueFinalRelease params{};
    ProcessEvent(func, &params);
}
void ADragonEscapeScene::PlaySceneRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DragonEscapeScene.PlaySceneRig"));
    struct Params_PlaySceneRig {
    }; // Size: 0x0
    Params_PlaySceneRig params{};
    ProcessEvent(func, &params);
}
void ADragonEscapeScene::PlayQueuedFinalRelease() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DragonEscapeScene.PlayQueuedFinalRelease"));
    struct Params_PlayQueuedFinalRelease {
    }; // Size: 0x0
    Params_PlayQueuedFinalRelease params{};
    ProcessEvent(func, &params);
}

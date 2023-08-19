#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_RenderThreadLightCullingDisable.hpp"
USceneAction_RenderThreadLightCullingDisable* USceneAction_RenderThreadLightCullingDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_RenderThreadLightCullingDisable");
    return (USceneAction_RenderThreadLightCullingDisable*)res;
}

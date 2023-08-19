#include "FStencilManagerEffectName.hpp"
#include "USceneAction_StencilFX.hpp"
#include "USceneAction_StencilFXBase.hpp"
USceneAction_StencilFX* USceneAction_StencilFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFX");
    return (USceneAction_StencilFX*)res;
}

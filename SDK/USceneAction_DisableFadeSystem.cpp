#include "USceneAction_DisableFadeSystem.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_DisableFadeSystem* USceneAction_DisableFadeSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DisableFadeSystem");
    return (USceneAction_DisableFadeSystem*)res;
}

#include "USceneActionState_DisableFadeSystem.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_DisableFadeSystem* USceneActionState_DisableFadeSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DisableFadeSystem");
    return (USceneActionState_DisableFadeSystem*)res;
}

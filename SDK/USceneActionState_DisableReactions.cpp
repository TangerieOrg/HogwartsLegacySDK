#include "USceneActionState_DisableReactions.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DisableReactions* USceneActionState_DisableReactions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DisableReactions");
    return (USceneActionState_DisableReactions*)res;
}

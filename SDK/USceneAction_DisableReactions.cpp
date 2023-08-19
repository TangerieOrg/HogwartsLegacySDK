#include "ECharacterShutdownPriority.hpp"
#include "EStandardManagedPriority.hpp"
#include "USceneAction_DisableReactions.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_DisableReactions* USceneAction_DisableReactions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DisableReactions");
    return (USceneAction_DisableReactions*)res;
}

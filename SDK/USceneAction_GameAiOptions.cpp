#include "EStandardManagedPriority.hpp"
#include "USceneAction_GameAiOptions.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_GameAiOptions* USceneAction_GameAiOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_GameAiOptions");
    return (USceneAction_GameAiOptions*)res;
}

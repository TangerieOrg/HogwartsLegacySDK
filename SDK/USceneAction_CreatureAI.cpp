#include "ECreatureIdleOverrideState.hpp"
#include "ECreatureStance.hpp"
#include "ESceneAction_CreatureFlyingOption.hpp"
#include "USceneAction_CreatureAI.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CreatureAI* USceneAction_CreatureAI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CreatureAI");
    return (USceneAction_CreatureAI*)res;
}

#include "USceneActionState_CreatureAI.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CreatureAI* USceneActionState_CreatureAI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CreatureAI");
    return (USceneActionState_CreatureAI*)res;
}

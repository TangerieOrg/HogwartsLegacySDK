#include "FSceneRigStage_Name.hpp"
#include "USceneRig.hpp"
#include "USceneRig_SpellMinigame.hpp"
USceneRig_SpellMinigame* USceneRig_SpellMinigame::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_SpellMinigame");
    return (USceneRig_SpellMinigame*)res;
}

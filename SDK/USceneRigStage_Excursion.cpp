#include "FSceneRigStage_Actor.hpp"
#include "USceneRigStage.hpp"
#include "USceneRigStage_Excursion.hpp"
USceneRigStage_Excursion* USceneRigStage_Excursion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigStage_Excursion");
    return (USceneRigStage_Excursion*)res;
}

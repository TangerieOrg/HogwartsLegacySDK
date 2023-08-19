#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRigStage.hpp"
#include "USceneRigStage_Activity.hpp"
USceneRigStage_Activity* USceneRigStage_Activity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigStage_Activity");
    return (USceneRigStage_Activity*)res;
}

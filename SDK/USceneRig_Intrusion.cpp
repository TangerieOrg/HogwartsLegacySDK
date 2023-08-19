#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRig.hpp"
#include "USceneRig_Intrusion.hpp"
USceneRig_Intrusion* USceneRig_Intrusion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_Intrusion");
    return (USceneRig_Intrusion*)res;
}

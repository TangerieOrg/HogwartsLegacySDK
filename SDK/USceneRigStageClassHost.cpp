#include "UInterface.hpp"
#include "USceneRigStageClassHost.hpp"
USceneRigStageClassHost* USceneRigStageClassHost::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStageClassHost");
    return (USceneRigStageClassHost*)res;
}

#include "UInterface.hpp"
#include "USceneRigParticipant.hpp"
USceneRigParticipant* USceneRigParticipant::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParticipant");
    return (USceneRigParticipant*)res;
}

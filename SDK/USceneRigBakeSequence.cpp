#include "UInterface.hpp"
#include "USceneRigBakeSequence.hpp"
USceneRigBakeSequence* USceneRigBakeSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigBakeSequence");
    return (USceneRigBakeSequence*)res;
}

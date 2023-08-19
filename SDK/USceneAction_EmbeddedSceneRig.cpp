#include "USceneAction_EmbeddedSceneRig.hpp"
#include "USceneRigActionBase.hpp"
#include "USceneRigProvider.hpp"
USceneAction_EmbeddedSceneRig* USceneAction_EmbeddedSceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_EmbeddedSceneRig");
    return (USceneAction_EmbeddedSceneRig*)res;
}

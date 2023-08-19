#include "ASceneRigActor.hpp"
#include "ASceneRigPreviewActor.hpp"
ASceneRigPreviewActor* ASceneRigPreviewActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigPreviewActor");
    return (ASceneRigPreviewActor*)res;
}

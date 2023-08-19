#include "ECameraStackResetType.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "USceneAction_CameraReset.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_CameraReset* USceneAction_CameraReset::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_CameraReset");
    return (USceneAction_CameraReset*)res;
}

#include "ESceneRigCameraAttachment.hpp"
#include "UAnimMetaData.hpp"
#include "USceneRigCameraMetadata.hpp"
USceneRigCameraMetadata* USceneRigCameraMetadata::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraMetadata");
    return (USceneRigCameraMetadata*)res;
}

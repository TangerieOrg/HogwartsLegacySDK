#include "USceneAction_ExternalCameraCut.hpp"
#include "USceneAction_ExternalRenderingCutBase.hpp"
USceneAction_ExternalCameraCut* USceneAction_ExternalCameraCut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ExternalCameraCut");
    return (USceneAction_ExternalCameraCut*)res;
}

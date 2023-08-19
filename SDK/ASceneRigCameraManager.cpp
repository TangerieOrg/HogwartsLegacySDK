#include "AActor.hpp"
#include "ASceneRigCameraManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
ASceneRigCameraManager* ASceneRigCameraManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraManager");
    return (ASceneRigCameraManager*)res;
}
AActor* ASceneRigCameraManager::GetActiveSceneRigCamera(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigCameraManager.GetActiveSceneRigCamera"));
    struct Params_GetActiveSceneRigCamera {
        UObject* WorldContextObject; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActiveSceneRigCamera params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}

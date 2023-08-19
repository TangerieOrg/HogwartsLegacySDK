#include "UBlueprintFunctionLibrary.hpp"
#include "UCameraShakeBase.hpp"
#include "UFunction.hpp"
#include "UMatineeCameraShake.hpp"
#include "UMatineeCameraShakeFunctionLibrary.hpp"
UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(UCameraShakeBase* CameraShake) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake"));
    struct Params_Conv_MatineeCameraShake {
        UCameraShakeBase* CameraShake; // 0x0
        UMatineeCameraShake* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_MatineeCameraShake params{};
    params.CameraShake = (UCameraShakeBase*)CameraShake;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMatineeCameraShake*)params.ReturnValue;
}
UMatineeCameraShakeFunctionLibrary* UMatineeCameraShakeFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary");
    return (UMatineeCameraShakeFunctionLibrary*)res;
}

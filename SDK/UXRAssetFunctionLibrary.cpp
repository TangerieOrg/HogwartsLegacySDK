#include "AActor.hpp"
#include "FTransform.hpp"
#include "FXRDeviceId.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UXRAssetFunctionLibrary.hpp"
UXRAssetFunctionLibrary* UXRAssetFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary");
    return (UXRAssetFunctionLibrary*)res;
}
UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking"));
    struct Params_AddNamedDeviceVisualizationComponentBlocking {
        AActor* Target; // 0x0
        FName SystemName; // 0x8
        FName DeviceName; // 0x10
        bool bManualAttachment; // 0x18
        char pad_19[0x7];
        FTransform RelativeTransform; // 0x20
        FXRDeviceId XRDeviceId; // 0x50
        char pad_5c[0x4];
        UPrimitiveComponent* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_AddNamedDeviceVisualizationComponentBlocking params{};
    params.Target = (AActor*)Target;
    params.SystemName = (FName)SystemName;
    params.DeviceName = (FName)DeviceName;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RelativeTransform = params.RelativeTransform;
    XRDeviceId = params.XRDeviceId;
    return (UPrimitiveComponent*)params.ReturnValue;
}
UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking"));
    struct Params_AddDeviceVisualizationComponentBlocking {
        AActor* Target; // 0x0
        FXRDeviceId XRDeviceId; // 0x8
        bool bManualAttachment; // 0x14
        char pad_15[0xb];
        FTransform RelativeTransform; // 0x20
        UPrimitiveComponent* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_AddDeviceVisualizationComponentBlocking params{};
    params.Target = (AActor*)Target;
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    XRDeviceId = params.XRDeviceId;
    RelativeTransform = params.RelativeTransform;
    return (UPrimitiveComponent*)params.ReturnValue;
}

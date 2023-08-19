#include "AActor.hpp"
#include "FTransform.hpp"
#include "FXRDeviceId.hpp"
#include "UAsyncTask_LoadXRDeviceVisComponent.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync"));
    struct Params_AddDeviceVisualizationComponentAsync {
        AActor* Target; // 0x0
        FXRDeviceId XRDeviceId; // 0x8
        bool bManualAttachment; // 0x14
        char pad_15[0xb];
        FTransform RelativeTransform; // 0x20
        UPrimitiveComponent* NewComponent; // 0x50
        UAsyncTask_LoadXRDeviceVisComponent* ReturnValue; // 0x58
    }; // Size: 0x60
    Params_AddDeviceVisualizationComponentAsync params{};
    params.Target = (AActor*)Target;
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    params.NewComponent = (UPrimitiveComponent*)NewComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    XRDeviceId = params.XRDeviceId;
    RelativeTransform = params.RelativeTransform;
    NewComponent = params.NewComponent;
    return (UAsyncTask_LoadXRDeviceVisComponent*)params.ReturnValue;
}
UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
    return (UAsyncTask_LoadXRDeviceVisComponent*)res;
}
UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync"));
    struct Params_AddNamedDeviceVisualizationComponentAsync {
        AActor* Target; // 0x0
        FName SystemName; // 0x8
        FName DeviceName; // 0x10
        bool bManualAttachment; // 0x18
        char pad_19[0x7];
        FTransform RelativeTransform; // 0x20
        FXRDeviceId XRDeviceId; // 0x50
        char pad_5c[0x4];
        UPrimitiveComponent* NewComponent; // 0x60
        UAsyncTask_LoadXRDeviceVisComponent* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_AddNamedDeviceVisualizationComponentAsync params{};
    params.Target = (AActor*)Target;
    params.SystemName = (FName)SystemName;
    params.DeviceName = (FName)DeviceName;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    params.NewComponent = (UPrimitiveComponent*)NewComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RelativeTransform = params.RelativeTransform;
    NewComponent = params.NewComponent;
    XRDeviceId = params.XRDeviceId;
    return (UAsyncTask_LoadXRDeviceVisComponent*)params.ReturnValue;
}

#include "EARObjectClassification.hpp"
#include "EARSpatialMeshUsageFlags.hpp"
#include "EARTrackingState.hpp"
#include "FGuid.hpp"
#include "FTransform.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
#include "UMRMeshComponent.hpp"
#include "UObject.hpp"
UARTrackedGeometry* UARTrackedGeometry::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackedGeometry");
    return (UARTrackedGeometry*)res;
}
bool UARTrackedGeometry::IsTracked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked"));
    struct Params_IsTracked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTracked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UARTrackedGeometry::GetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetName"));
    struct Params_GetName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UARTrackedGeometry::HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag"));
    struct Params_HasSpatialMeshUsageFlag {
        EARSpatialMeshUsageFlags InFlag; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_HasSpatialMeshUsageFlag params{};
    params.InFlag = (EARSpatialMeshUsageFlags)InFlag;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh"));
    struct Params_GetUnderlyingMesh {
        UMRMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUnderlyingMesh params{};
    ProcessEvent(func, &params);
    return (UMRMeshComponent*)params.ReturnValue;
}
EARObjectClassification UARTrackedGeometry::GetObjectClassification() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification"));
    struct Params_GetObjectClassification {
        EARObjectClassification ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetObjectClassification params{};
    ProcessEvent(func, &params);
    return (EARObjectClassification)params.ReturnValue;
}
EARTrackingState UARTrackedGeometry::GetTrackingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState"));
    struct Params_GetTrackingState {
        EARTrackingState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackingState params{};
    ProcessEvent(func, &params);
    return (EARTrackingState)params.ReturnValue;
}
FTransform UARTrackedGeometry::GetLocalToWorldTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform"));
    struct Params_GetLocalToWorldTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetLocalToWorldTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FTransform UARTrackedGeometry::GetLocalToTrackingTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform"));
    struct Params_GetLocalToTrackingTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetLocalToTrackingTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
float UARTrackedGeometry::GetLastUpdateTimestamp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp"));
    struct Params_GetLastUpdateTimestamp {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLastUpdateTimestamp params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UARTrackedGeometry::GetLastUpdateFrameNumber() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber"));
    struct Params_GetLastUpdateFrameNumber {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLastUpdateFrameNumber params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName UARTrackedGeometry::GetDebugName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName"));
    struct Params_GetDebugName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDebugName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

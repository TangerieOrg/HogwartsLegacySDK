#include "EARLineTraceChannels.hpp"
#include "FARTraceResult.hpp"
#include "FTransform.hpp"
#include "UARTraceResultLibrary.hpp"
#include "UARTrackedGeometry.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
FTransform UARTraceResultLibrary::GetLocalToWorldTransform(FARTraceResult& TraceResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform"));
    struct Params_GetLocalToWorldTransform {
        FARTraceResult TraceResult; // 0x0
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_GetLocalToWorldTransform params{};
    params.TraceResult = (FARTraceResult)TraceResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (FTransform)params.ReturnValue;
}
UARTraceResultLibrary* UARTraceResultLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTraceResultLibrary");
    return (UARTraceResultLibrary*)res;
}
UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(FARTraceResult& TraceResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry"));
    struct Params_GetTrackedGeometry {
        FARTraceResult TraceResult; // 0x0
        UARTrackedGeometry* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_GetTrackedGeometry params{};
    params.TraceResult = (FARTraceResult)TraceResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (UARTrackedGeometry*)params.ReturnValue;
}
EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(FARTraceResult& TraceResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel"));
    struct Params_GetTraceChannel {
        FARTraceResult TraceResult; // 0x0
        EARLineTraceChannels ReturnValue; // 0x60
    }; // Size: 0x61
    Params_GetTraceChannel params{};
    params.TraceResult = (FARTraceResult)TraceResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (EARLineTraceChannels)params.ReturnValue;
}
FTransform UARTraceResultLibrary::GetLocalTransform(FARTraceResult& TraceResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform"));
    struct Params_GetLocalTransform {
        FARTraceResult TraceResult; // 0x0
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_GetLocalTransform params{};
    params.TraceResult = (FARTraceResult)TraceResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (FTransform)params.ReturnValue;
}
FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(FARTraceResult& TraceResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform"));
    struct Params_GetLocalToTrackingTransform {
        FARTraceResult TraceResult; // 0x0
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_GetLocalToTrackingTransform params{};
    params.TraceResult = (FARTraceResult)TraceResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (FTransform)params.ReturnValue;
}
float UARTraceResultLibrary::GetDistanceFromCamera(FARTraceResult& TraceResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera"));
    struct Params_GetDistanceFromCamera {
        FARTraceResult TraceResult; // 0x0
        float ReturnValue; // 0x60
    }; // Size: 0x64
    Params_GetDistanceFromCamera params{};
    params.TraceResult = (FARTraceResult)TraceResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (float)params.ReturnValue;
}

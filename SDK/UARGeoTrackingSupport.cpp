#include "EARGeoTrackingAccuracy.hpp"
#include "EARGeoTrackingState.hpp"
#include "EARGeoTrackingStateReason.hpp"
#include "UARGeoTrackingSupport.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport"));
    struct Params_GetGeoTrackingSupport {
        UARGeoTrackingSupport* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGeoTrackingSupport params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARGeoTrackingSupport*)params.ReturnValue;
}
UARGeoTrackingSupport* UARGeoTrackingSupport::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARGeoTrackingSupport");
    return (UARGeoTrackingSupport*)res;
}
EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState"));
    struct Params_GetGeoTrackingState {
        EARGeoTrackingState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGeoTrackingState params{};
    ProcessEvent(func, &params);
    return (EARGeoTrackingState)params.ReturnValue;
}
EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason"));
    struct Params_GetGeoTrackingStateReason {
        EARGeoTrackingStateReason ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGeoTrackingStateReason params{};
    ProcessEvent(func, &params);
    return (EARGeoTrackingStateReason)params.ReturnValue;
}
EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy"));
    struct Params_GetGeoTrackingAccuracy {
        EARGeoTrackingAccuracy ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGeoTrackingAccuracy params{};
    ProcessEvent(func, &params);
    return (EARGeoTrackingAccuracy)params.ReturnValue;
}
bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude"));
    struct Params_AddGeoAnchorAtLocationWithAltitude {
        float Longitude; // 0x0
        float Latitude; // 0x4
        float AltitudeMeters; // 0x8
        char pad_c[0x4];
        FString OptionalAnchorName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_AddGeoAnchorAtLocationWithAltitude params{};
    params.Longitude = (float)Longitude;
    params.Latitude = (float)Latitude;
    params.AltitudeMeters = (float)AltitudeMeters;
    params.OptionalAnchorName = (FString)OptionalAnchorName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation"));
    struct Params_AddGeoAnchorAtLocation {
        float Longitude; // 0x0
        float Latitude; // 0x4
        FString OptionalAnchorName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddGeoAnchorAtLocation params{};
    params.Longitude = (float)Longitude;
    params.Latitude = (float)Latitude;
    params.OptionalAnchorName = (FString)OptionalAnchorName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

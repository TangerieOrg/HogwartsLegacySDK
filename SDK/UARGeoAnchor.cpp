#include "EARAltitudeSource.hpp"
#include "UARGeoAnchor.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
UARGeoAnchor* UARGeoAnchor::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARGeoAnchor");
    return (UARGeoAnchor*)res;
}
float UARGeoAnchor::GetLongitude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude"));
    struct Params_GetLongitude {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLongitude params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UARGeoAnchor::GetLatitude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude"));
    struct Params_GetLatitude {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLatitude params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UARGeoAnchor::GetAltitudeMeters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters"));
    struct Params_GetAltitudeMeters {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAltitudeMeters params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EARAltitudeSource UARGeoAnchor::GetAltitudeSource() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource"));
    struct Params_GetAltitudeSource {
        EARAltitudeSource ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAltitudeSource params{};
    ProcessEvent(func, &params);
    return (EARAltitudeSource)params.ReturnValue;
}

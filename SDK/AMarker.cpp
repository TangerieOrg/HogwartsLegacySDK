#include "AActor.hpp"
#include "AMarker.hpp"
#include "UFunction.hpp"
AMarker* AMarker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Marker");
    return (AMarker*)res;
}
FName AMarker::GenerateUniqueName(FName InBaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Marker.GenerateUniqueName"));
    struct Params_GenerateUniqueName {
        FName InBaseName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GenerateUniqueName params{};
    params.InBaseName = (FName)InBaseName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

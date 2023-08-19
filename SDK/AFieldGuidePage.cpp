#include "AActor.hpp"
#include "AFieldGuidePage.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
AFieldGuidePage* AFieldGuidePage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuidePage");
    return (AFieldGuidePage*)res;
}
bool AFieldGuidePage::MoveToNextLocation(FTransform& DestinationTransform, float Speed, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuidePage.MoveToNextLocation"));
    struct Params_MoveToNextLocation {
        FTransform DestinationTransform; // 0x0
        float Speed; // 0x30
        float DeltaTime; // 0x34
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_MoveToNextLocation params{};
    params.DestinationTransform = (FTransform)DestinationTransform;
    params.Speed = (float)Speed;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    DestinationTransform = params.DestinationTransform;
    return (bool)params.ReturnValue;
}

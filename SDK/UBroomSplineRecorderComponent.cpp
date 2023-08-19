#include "UBroomSplineRecorderComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
UBroomSplineRecorderComponent* UBroomSplineRecorderComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomSplineRecorderComponent");
    return (UBroomSplineRecorderComponent*)res;
}
void UBroomSplineRecorderComponent::SaveSplineToEditor(USplineComponent* SplineToSave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomSplineRecorderComponent.SaveSplineToEditor"));
    struct Params_SaveSplineToEditor {
        USplineComponent* SplineToSave; // 0x0
    }; // Size: 0x8
    Params_SaveSplineToEditor params{};
    params.SplineToSave = (USplineComponent*)SplineToSave;
    ProcessEvent(func, &params);
}
bool UBroomSplineRecorderComponent::IsRecording() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomSplineRecorderComponent.IsRecording"));
    struct Params_IsRecording {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRecording params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

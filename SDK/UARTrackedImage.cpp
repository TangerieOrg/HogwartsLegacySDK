#include "FVector2D.hpp"
#include "UARCandidateImage.hpp"
#include "UARTrackedGeometry.hpp"
#include "UARTrackedImage.hpp"
#include "UFunction.hpp"
UARTrackedImage* UARTrackedImage::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackedImage");
    return (UARTrackedImage*)res;
}
FVector2D UARTrackedImage::GetEstimateSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize"));
    struct Params_GetEstimateSize {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEstimateSize params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
UARCandidateImage* UARTrackedImage::GetDetectedImage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage"));
    struct Params_GetDetectedImage {
        UARCandidateImage* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDetectedImage params{};
    ProcessEvent(func, &params);
    return (UARCandidateImage*)params.ReturnValue;
}

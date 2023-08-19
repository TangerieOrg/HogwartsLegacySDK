#include "EARCandidateImageOrientation.hpp"
#include "UARCandidateImage.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UTexture2D.hpp"
UARCandidateImage* UARCandidateImage::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARCandidateImage");
    return (UARCandidateImage*)res;
}
EARCandidateImageOrientation UARCandidateImage::GetOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateImage.GetOrientation"));
    struct Params_GetOrientation {
        EARCandidateImageOrientation ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetOrientation params{};
    ProcessEvent(func, &params);
    return (EARCandidateImageOrientation)params.ReturnValue;
}
float UARCandidateImage::GetPhysicalWidth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth"));
    struct Params_GetPhysicalWidth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPhysicalWidth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UARCandidateImage::GetPhysicalHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight"));
    struct Params_GetPhysicalHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPhysicalHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UARCandidateImage::GetFriendlyName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName"));
    struct Params_GetFriendlyName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFriendlyName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UTexture2D* UARCandidateImage::GetCandidateTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture"));
    struct Params_GetCandidateTexture {
        UTexture2D* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCandidateTexture params{};
    ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}

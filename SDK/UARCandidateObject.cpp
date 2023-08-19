#include "FBox.hpp"
#include "UARCandidateObject.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
void UARCandidateObject::SetFriendlyName(FString NewName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName"));
    struct Params_SetFriendlyName {
        FString NewName; // 0x0
    }; // Size: 0x10
    Params_SetFriendlyName params{};
    params.NewName = (FString)NewName;
    ProcessEvent(func, &params);
}
UARCandidateObject* UARCandidateObject::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARCandidateObject");
    return (UARCandidateObject*)res;
}
FString UARCandidateObject::GetFriendlyName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName"));
    struct Params_GetFriendlyName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFriendlyName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UARCandidateObject::SetCandidateObjectData(TArray<uint8_t>& InCandidateObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData"));
    struct Params_SetCandidateObjectData {
        TArray<uint8_t> InCandidateObject; // 0x0
    }; // Size: 0x10
    Params_SetCandidateObjectData params{};
    params.InCandidateObject = (TArray<uint8_t>)InCandidateObject;
    ProcessEvent(func, &params);
    InCandidateObject = params.InCandidateObject;
}
FBox UARCandidateObject::GetBoundingBox() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox"));
    struct Params_GetBoundingBox {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetBoundingBox params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
void UARCandidateObject::SetBoundingBox(FBox& InBoundingBox) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox"));
    struct Params_SetBoundingBox {
        FBox InBoundingBox; // 0x0
    }; // Size: 0x1c
    Params_SetBoundingBox params{};
    params.InBoundingBox = (FBox)InBoundingBox;
    ProcessEvent(func, &params);
    InBoundingBox = params.InBoundingBox;
}
TArray<uint8_t> UARCandidateObject::GetCandidateObjectData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData"));
    struct Params_GetCandidateObjectData {
        TArray<uint8_t> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCandidateObjectData params{};
    ProcessEvent(func, &params);
    return (TArray<uint8_t>)params.ReturnValue;
}

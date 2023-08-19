#include "FVCSlot.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVirtualContainer.hpp"
bool UVirtualContainer::IsFinite(FString ContainerID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualContainer.IsFinite"));
    struct Params_IsFinite {
        FString ContainerID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsFinite params{};
    params.ContainerID = (FString)ContainerID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UVirtualContainer* UVirtualContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VirtualContainer");
    return (UVirtualContainer*)res;
}
TArray<FVCSlot> UVirtualContainer::GetContents(FString ContainerID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualContainer.GetContents"));
    struct Params_GetContents {
        FString ContainerID; // 0x0
        TArray<FVCSlot> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetContents params{};
    params.ContainerID = (FString)ContainerID;
    ProcessEvent(func, &params);
    return (TArray<FVCSlot>)params.ReturnValue;
}

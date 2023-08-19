#include "FOdcPathSpec.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UPathSpecInterface.hpp"
UPathSpecInterface* UPathSpecInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.PathSpecInterface");
    return (UPathSpecInterface*)res;
}
int32_t UPathSpecInterface::GetLinkUsageFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.PathSpecInterface.GetLinkUsageFlags"));
    struct Params_GetLinkUsageFlags {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLinkUsageFlags params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FOdcPathSpec UPathSpecInterface::GetPathSpec() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.PathSpecInterface.GetPathSpec"));
    struct Params_GetPathSpec {
        FOdcPathSpec ReturnValue; // 0x0
    }; // Size: 0x50
    Params_GetPathSpec params{};
    ProcessEvent(func, &params);
    return (FOdcPathSpec)params.ReturnValue;
}
int32_t UPathSpecInterface::GetBlockageFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.PathSpecInterface.GetBlockageFlags"));
    struct Params_GetBlockageFlags {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBlockageFlags params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}

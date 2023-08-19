#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlatformInterfaceWebResponse.hpp"
void UPlatformInterfaceWebResponse::GetHeader(int32_t HeaderIndex, FString& Header, FString& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlatformInterfaceWebResponse.GetHeader"));
    struct Params_GetHeader {
        int32_t HeaderIndex; // 0x0
        char pad_4[0x4];
        FString Header; // 0x8
        FString Value; // 0x18
    }; // Size: 0x28
    Params_GetHeader params{};
    params.HeaderIndex = (int32_t)HeaderIndex;
    params.Header = (FString)Header;
    params.Value = (FString)Value;
    ProcessEvent(func, &params);
    Header = params.Header;
    Value = params.Value;
}
UPlatformInterfaceWebResponse* UPlatformInterfaceWebResponse::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlatformInterfaceWebResponse");
    return (UPlatformInterfaceWebResponse*)res;
}
FString UPlatformInterfaceWebResponse::GetHeaderValue(FString HeaderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlatformInterfaceWebResponse.GetHeaderValue"));
    struct Params_GetHeaderValue {
        FString HeaderName; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetHeaderValue params{};
    params.HeaderName = (FString)HeaderName;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UPlatformInterfaceWebResponse::GetNumHeaders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlatformInterfaceWebResponse.GetNumHeaders"));
    struct Params_GetNumHeaders {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumHeaders params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}

#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUworldSupport.hpp"
UUworldSupport* UUworldSupport::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UworldSupport");
    return (UUworldSupport*)res;
}
UUworldSupport* UUworldSupport::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UworldSupport.Get"));
    struct Params_Get {
        UUworldSupport* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUworldSupport*)params.ReturnValue;
}

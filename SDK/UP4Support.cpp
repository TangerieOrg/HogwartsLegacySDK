#include "UFunction.hpp"
#include "UObject.hpp"
#include "UP4Support.hpp"
UP4Support* UP4Support::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.P4Support");
    return (UP4Support*)res;
}
FString UP4Support::GetCurrentPerforceChangelist() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.P4Support.GetCurrentPerforceChangelist"));
    struct Params_GetCurrentPerforceChangelist {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentPerforceChangelist params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}

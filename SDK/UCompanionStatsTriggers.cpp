#include "UCompanionStatsTriggers.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UCompanionStatsTriggers::OnStatChanged(FName StatID, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionStatsTriggers.OnStatChanged"));
    struct Params_OnStatChanged {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_OnStatChanged params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
UCompanionStatsTriggers* UCompanionStatsTriggers::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompanionStatsTriggers");
    return (UCompanionStatsTriggers*)res;
}

#include "UFunction.hpp"
#include "UObject.hpp"
#include "USublevelEntry.hpp"
USublevelEntry* USublevelEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SublevelEntry");
    return (USublevelEntry*)res;
}
void USublevelEntry::OnLevelLoadFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SublevelEntry.OnLevelLoadFailed"));
    struct Params_OnLevelLoadFailed {
    }; // Size: 0x0
    Params_OnLevelLoadFailed params{};
    ProcessEvent(func, &params);
}
void USublevelEntry::OnLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SublevelEntry.OnLevelLoaded"));
    struct Params_OnLevelLoaded {
    }; // Size: 0x0
    Params_OnLevelLoaded params{};
    ProcessEvent(func, &params);
}

#include "UFunction.hpp"
#include "UObject.hpp"
#include "USublevelTest.hpp"
USublevelTest* USublevelTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SublevelTest");
    return (USublevelTest*)res;
}
void USublevelTest::LevelUnloaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SublevelTest.LevelUnloaded"));
    struct Params_LevelUnloaded {
    }; // Size: 0x0
    Params_LevelUnloaded params{};
    ProcessEvent(func, &params);
}
void USublevelTest::LevelLoadFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SublevelTest.LevelLoadFailed"));
    struct Params_LevelLoadFailed {
    }; // Size: 0x0
    Params_LevelLoadFailed params{};
    ProcessEvent(func, &params);
}
void USublevelTest::LevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SublevelTest.LevelLoaded"));
    struct Params_LevelLoaded {
    }; // Size: 0x0
    Params_LevelLoaded params{};
    ProcessEvent(func, &params);
}

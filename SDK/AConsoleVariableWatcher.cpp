#include "AActor.hpp"
#include "AConsoleVariableWatcher.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWatchedConsoleVariableBool.hpp"
#include "UWatchedConsoleVariableFloat.hpp"
#include "UWatchedConsoleVariableInt.hpp"
void AConsoleVariableWatcher::GetConsoleVariableAsFloat(FString ConsoleVariable, float& Value, bool& bExists, float DefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.GetConsoleVariableAsFloat"));
    struct Params_GetConsoleVariableAsFloat {
        FString ConsoleVariable; // 0x0
        float Value; // 0x10
        bool bExists; // 0x14
        char pad_15[0x3];
        float DefaultValue; // 0x18
    }; // Size: 0x1c
    Params_GetConsoleVariableAsFloat params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Value = (float)Value;
    params.bExists = (bool)bExists;
    params.DefaultValue = (float)DefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    bExists = params.bExists;
}
AConsoleVariableWatcher* AConsoleVariableWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleVariableWatcher");
    return (AConsoleVariableWatcher*)res;
}
void AConsoleVariableWatcher::WatchFloatConsoleVariable(UObject* WorldContextObject, FString ConsoleVariable, UWatchedConsoleVariableFloat*& Variable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.WatchFloatConsoleVariable"));
    struct Params_WatchFloatConsoleVariable {
        UObject* WorldContextObject; // 0x0
        FString ConsoleVariable; // 0x8
        UWatchedConsoleVariableFloat* Variable; // 0x18
    }; // Size: 0x20
    Params_WatchFloatConsoleVariable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Variable = (UWatchedConsoleVariableFloat*)Variable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Variable = params.Variable;
}
void AConsoleVariableWatcher::WatchIntConsoleVariable(UObject* WorldContextObject, FString ConsoleVariable, UWatchedConsoleVariableInt*& Variable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.WatchIntConsoleVariable"));
    struct Params_WatchIntConsoleVariable {
        UObject* WorldContextObject; // 0x0
        FString ConsoleVariable; // 0x8
        UWatchedConsoleVariableInt* Variable; // 0x18
    }; // Size: 0x20
    Params_WatchIntConsoleVariable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Variable = (UWatchedConsoleVariableInt*)Variable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Variable = params.Variable;
}
void AConsoleVariableWatcher::WatchBoolConsoleVariable(UObject* WorldContextObject, FString ConsoleVariable, UWatchedConsoleVariableBool*& Variable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.WatchBoolConsoleVariable"));
    struct Params_WatchBoolConsoleVariable {
        UObject* WorldContextObject; // 0x0
        FString ConsoleVariable; // 0x8
        UWatchedConsoleVariableBool* Variable; // 0x18
    }; // Size: 0x20
    Params_WatchBoolConsoleVariable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Variable = (UWatchedConsoleVariableBool*)Variable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Variable = params.Variable;
}
void AConsoleVariableWatcher::SetConsoleVariableAsBool(FString ConsoleVariable, bool Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.SetConsoleVariableAsBool"));
    struct Params_SetConsoleVariableAsBool {
        FString ConsoleVariable; // 0x0
        bool Value; // 0x10
        bool bExists; // 0x11
    }; // Size: 0x12
    Params_SetConsoleVariableAsBool params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Value = (bool)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void AConsoleVariableWatcher::SetConsoleVariableAsFloat(FString ConsoleVariable, float Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.SetConsoleVariableAsFloat"));
    struct Params_SetConsoleVariableAsFloat {
        FString ConsoleVariable; // 0x0
        float Value; // 0x10
        bool bExists; // 0x14
    }; // Size: 0x15
    Params_SetConsoleVariableAsFloat params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Value = (float)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void AConsoleVariableWatcher::SetConsoleVariableAsInt(FString ConsoleVariable, int32_t Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.SetConsoleVariableAsInt"));
    struct Params_SetConsoleVariableAsInt {
        FString ConsoleVariable; // 0x0
        int32_t Value; // 0x10
        bool bExists; // 0x14
    }; // Size: 0x15
    Params_SetConsoleVariableAsInt params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Value = (int32_t)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void AConsoleVariableWatcher::GetConsoleVariableAsInt(FString ConsoleVariable, int32_t& Value, bool& bExists, int32_t DefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.GetConsoleVariableAsInt"));
    struct Params_GetConsoleVariableAsInt {
        FString ConsoleVariable; // 0x0
        int32_t Value; // 0x10
        bool bExists; // 0x14
        char pad_15[0x3];
        int32_t DefaultValue; // 0x18
    }; // Size: 0x1c
    Params_GetConsoleVariableAsInt params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.Value = (int32_t)Value;
    params.bExists = (bool)bExists;
    params.DefaultValue = (int32_t)DefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    bExists = params.bExists;
}
void AConsoleVariableWatcher::GetConsoleVariableAsBool(FString ConsoleVariable, bool& bValue, bool& bExists, bool bDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.GetConsoleVariableAsBool"));
    struct Params_GetConsoleVariableAsBool {
        FString ConsoleVariable; // 0x0
        bool bValue; // 0x10
        bool bExists; // 0x11
        bool bDefaultValue; // 0x12
    }; // Size: 0x13
    Params_GetConsoleVariableAsBool params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.bValue = (bool)bValue;
    params.bExists = (bool)bExists;
    params.bDefaultValue = (bool)bDefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
    bValue = params.bValue;
}
void AConsoleVariableWatcher::CreateConsoleVariableAsInt(FString ConsoleVariable, int32_t DefaultValue, FString Help, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.CreateConsoleVariableAsInt"));
    struct Params_CreateConsoleVariableAsInt {
        FString ConsoleVariable; // 0x0
        int32_t DefaultValue; // 0x10
        char pad_14[0x4];
        FString Help; // 0x18
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_CreateConsoleVariableAsInt params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.DefaultValue = (int32_t)DefaultValue;
    params.Help = (FString)Help;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AConsoleVariableWatcher::CreateConsoleVariableAsFloat(FString ConsoleVariable, float DefaultValue, FString Help, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.CreateConsoleVariableAsFloat"));
    struct Params_CreateConsoleVariableAsFloat {
        FString ConsoleVariable; // 0x0
        float DefaultValue; // 0x10
        char pad_14[0x4];
        FString Help; // 0x18
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_CreateConsoleVariableAsFloat params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.DefaultValue = (float)DefaultValue;
    params.Help = (FString)Help;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AConsoleVariableWatcher::CreateConsoleVariableAsBool(FString ConsoleVariable, bool DefaultValue, FString Help, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.CreateConsoleVariableAsBool"));
    struct Params_CreateConsoleVariableAsBool {
        FString ConsoleVariable; // 0x0
        bool DefaultValue; // 0x10
        char pad_11[0x7];
        FString Help; // 0x18
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_CreateConsoleVariableAsBool params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.DefaultValue = (bool)DefaultValue;
    params.Help = (FString)Help;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AConsoleVariableWatcher::ConsoleVariableExists(FString ConsoleVariable, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableWatcher.ConsoleVariableExists"));
    struct Params_ConsoleVariableExists {
        FString ConsoleVariable; // 0x0
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_ConsoleVariableExists params{};
    params.ConsoleVariable = (FString)ConsoleVariable;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}

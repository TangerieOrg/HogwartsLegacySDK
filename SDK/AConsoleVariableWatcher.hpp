#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWatchedConsoleVariableBool;
class UWatchedConsoleVariableFloat;
class UWatchedConsoleVariableInt;
class UObject;
#pragma pack(push, 1)
class AConsoleVariableWatcher : public AActor {
public:
    TArray<UWatchedConsoleVariableBool*> BoolVariables; // 0x248
    TArray<UWatchedConsoleVariableFloat*> FloatVariables; // 0x258
    TArray<UWatchedConsoleVariableInt*> IntVariables; // 0x268
    char pad_278[0x10];
    static AConsoleVariableWatcher* StaticClass();
    static void WatchIntConsoleVariable(UObject* WorldContextObject, FString ConsoleVariable, UWatchedConsoleVariableInt*& Variable);
    static void WatchFloatConsoleVariable(UObject* WorldContextObject, FString ConsoleVariable, UWatchedConsoleVariableFloat*& Variable);
    static void WatchBoolConsoleVariable(UObject* WorldContextObject, FString ConsoleVariable, UWatchedConsoleVariableBool*& Variable);
    static void SetConsoleVariableAsInt(FString ConsoleVariable, int32_t Value, bool& bExists);
    static void SetConsoleVariableAsFloat(FString ConsoleVariable, float Value, bool& bExists);
    static void SetConsoleVariableAsBool(FString ConsoleVariable, bool Value, bool& bExists);
    static void GetConsoleVariableAsInt(FString ConsoleVariable, int32_t& Value, bool& bExists, int32_t DefaultValue);
    static void GetConsoleVariableAsFloat(FString ConsoleVariable, float& Value, bool& bExists, float DefaultValue);
    static void GetConsoleVariableAsBool(FString ConsoleVariable, bool& bValue, bool& bExists, bool bDefaultValue);
    static void CreateConsoleVariableAsInt(FString ConsoleVariable, int32_t DefaultValue, FString Help, bool& bSuccess);
    static void CreateConsoleVariableAsFloat(FString ConsoleVariable, float DefaultValue, FString Help, bool& bSuccess);
    static void CreateConsoleVariableAsBool(FString ConsoleVariable, bool DefaultValue, FString Help, bool& bSuccess);
    static void ConsoleVariableExists(FString ConsoleVariable, bool& bExists);
}; // Size: 0x288
#pragma pack(pop)

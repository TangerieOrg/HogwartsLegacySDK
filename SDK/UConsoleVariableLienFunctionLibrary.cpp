#include "UBlueprintFunctionLibrary.hpp"
#include "UConsoleVariableLienAsset.hpp"
#include "UConsoleVariableLienFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UConsoleVariableLienFunctionLibrary* UConsoleVariableLienFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary");
    return (UConsoleVariableLienFunctionLibrary*)res;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableRemoveLiens(UObject* LienHolder, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableRemoveLiens"));
    struct Params_ConsoleVariableRemoveLiens {
        UObject* LienHolder; // 0x0
        bool bSuccess; // 0x8
    }; // Size: 0x9
    Params_ConsoleVariableRemoveLiens params{};
    params.LienHolder = (UObject*)LienHolder;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableHasLien(UObject* LienHolder, FString Variable, bool& bHasALien) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableHasLien"));
    struct Params_ConsoleVariableHasLien {
        UObject* LienHolder; // 0x0
        FString Variable; // 0x8
        bool bHasALien; // 0x18
    }; // Size: 0x19
    Params_ConsoleVariableHasLien params{};
    params.LienHolder = (UObject*)LienHolder;
    params.Variable = (FString)Variable;
    params.bHasALien = (bool)bHasALien;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bHasALien = params.bHasALien;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableRemoveAssetLiens(UObject* LienHolder, UConsoleVariableLienAsset* LienAsset, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableRemoveAssetLiens"));
    struct Params_ConsoleVariableRemoveAssetLiens {
        UObject* LienHolder; // 0x0
        UConsoleVariableLienAsset* LienAsset; // 0x8
        bool bSuccess; // 0x10
    }; // Size: 0x11
    Params_ConsoleVariableRemoveAssetLiens params{};
    params.LienHolder = (UObject*)LienHolder;
    params.LienAsset = (UConsoleVariableLienAsset*)LienAsset;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableRemoveLien(UObject* LienHolder, FString Variable, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableRemoveLien"));
    struct Params_ConsoleVariableRemoveLien {
        UObject* LienHolder; // 0x0
        FString Variable; // 0x8
        bool bSuccess; // 0x18
    }; // Size: 0x19
    Params_ConsoleVariableRemoveLien params{};
    params.LienHolder = (UObject*)LienHolder;
    params.Variable = (FString)Variable;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableHasAnyLiens(UObject* LienHolder, bool& bHasALien) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableHasAnyLiens"));
    struct Params_ConsoleVariableHasAnyLiens {
        UObject* LienHolder; // 0x0
        bool bHasALien; // 0x8
    }; // Size: 0x9
    Params_ConsoleVariableHasAnyLiens params{};
    params.LienHolder = (UObject*)LienHolder;
    params.bHasALien = (bool)bHasALien;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bHasALien = params.bHasALien;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableAssetLiensActivate(UObject* LienHolder, UConsoleVariableLienAsset* LienAsset, bool& bSuccess, bool bActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAssetLiensActivate"));
    struct Params_ConsoleVariableAssetLiensActivate {
        UObject* LienHolder; // 0x0
        UConsoleVariableLienAsset* LienAsset; // 0x8
        bool bSuccess; // 0x10
        bool bActivate; // 0x11
    }; // Size: 0x12
    Params_ConsoleVariableAssetLiensActivate params{};
    params.LienHolder = (UObject*)LienHolder;
    params.LienAsset = (UConsoleVariableLienAsset*)LienAsset;
    params.bSuccess = (bool)bSuccess;
    params.bActivate = (bool)bActivate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableAddStringLien(UObject* LienHolder, FString Variable, FString Value, bool& bSuccess, float Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddStringLien"));
    struct Params_ConsoleVariableAddStringLien {
        UObject* LienHolder; // 0x0
        FString Variable; // 0x8
        FString Value; // 0x18
        bool bSuccess; // 0x28
        char pad_29[0x3];
        float Priority; // 0x2c
    }; // Size: 0x30
    Params_ConsoleVariableAddStringLien params{};
    params.LienHolder = (UObject*)LienHolder;
    params.Variable = (FString)Variable;
    params.Value = (FString)Value;
    params.bSuccess = (bool)bSuccess;
    params.Priority = (float)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableAddIntegerLien(UObject* LienHolder, FString Variable, int32_t Value, bool& bSuccess, float Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddIntegerLien"));
    struct Params_ConsoleVariableAddIntegerLien {
        UObject* LienHolder; // 0x0
        FString Variable; // 0x8
        int32_t Value; // 0x18
        bool bSuccess; // 0x1c
        char pad_1d[0x3];
        float Priority; // 0x20
    }; // Size: 0x24
    Params_ConsoleVariableAddIntegerLien params{};
    params.LienHolder = (UObject*)LienHolder;
    params.Variable = (FString)Variable;
    params.Value = (int32_t)Value;
    params.bSuccess = (bool)bSuccess;
    params.Priority = (float)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableAddFloatLien(UObject* LienHolder, FString Variable, float Value, bool& bSuccess, float Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddFloatLien"));
    struct Params_ConsoleVariableAddFloatLien {
        UObject* LienHolder; // 0x0
        FString Variable; // 0x8
        float Value; // 0x18
        bool bSuccess; // 0x1c
        char pad_1d[0x3];
        float Priority; // 0x20
    }; // Size: 0x24
    Params_ConsoleVariableAddFloatLien params{};
    params.LienHolder = (UObject*)LienHolder;
    params.Variable = (FString)Variable;
    params.Value = (float)Value;
    params.bSuccess = (bool)bSuccess;
    params.Priority = (float)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableAddDefaultLien(UObject* LienHolder, FString Variable, bool& bSuccess, float Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddDefaultLien"));
    struct Params_ConsoleVariableAddDefaultLien {
        UObject* LienHolder; // 0x0
        FString Variable; // 0x8
        bool bSuccess; // 0x18
        char pad_19[0x3];
        float Priority; // 0x1c
    }; // Size: 0x20
    Params_ConsoleVariableAddDefaultLien params{};
    params.LienHolder = (UObject*)LienHolder;
    params.Variable = (FString)Variable;
    params.bSuccess = (bool)bSuccess;
    params.Priority = (float)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UConsoleVariableLienFunctionLibrary::ConsoleVariableAddAssetLiens(UObject* LienHolder, UConsoleVariableLienAsset* LienAsset, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddAssetLiens"));
    struct Params_ConsoleVariableAddAssetLiens {
        UObject* LienHolder; // 0x0
        UConsoleVariableLienAsset* LienAsset; // 0x8
        bool bSuccess; // 0x10
    }; // Size: 0x11
    Params_ConsoleVariableAddAssetLiens params{};
    params.LienHolder = (UObject*)LienHolder;
    params.LienAsset = (UConsoleVariableLienAsset*)LienAsset;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}

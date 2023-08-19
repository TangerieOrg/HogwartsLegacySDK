#include "EIntroCheckpoint.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UIntroBlueprintFunctionLibrary.hpp"
#include "UObject.hpp"
UIntroBlueprintFunctionLibrary* UIntroBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IntroBlueprintFunctionLibrary");
    return (UIntroBlueprintFunctionLibrary*)res;
}
void UIntroBlueprintFunctionLibrary::IntroSave(UObject* WorldContextObject, EIntroCheckpoint Checkpoint, FVector PlayerSpawnLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.IntroSave"));
    struct Params_IntroSave {
        UObject* WorldContextObject; // 0x0
        EIntroCheckpoint Checkpoint; // 0x8
        char pad_9[0x3];
        FVector PlayerSpawnLocation; // 0xc
    }; // Size: 0x18
    Params_IntroSave params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Checkpoint = (EIntroCheckpoint)Checkpoint;
    params.PlayerSpawnLocation = (FVector)PlayerSpawnLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UIntroBlueprintFunctionLibrary::IsCheating() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.IsCheating"));
    struct Params_IsCheating {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCheating params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIntroBlueprintFunctionLibrary::SetLoadingRootLevel(bool bLoadingRootLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.SetLoadingRootLevel"));
    struct Params_SetLoadingRootLevel {
        bool bLoadingRootLevel; // 0x0
    }; // Size: 0x1
    Params_SetLoadingRootLevel params{};
    params.bLoadingRootLevel = (bool)bLoadingRootLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UIntroBlueprintFunctionLibrary::SetCheating(bool bCheating) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.SetCheating"));
    struct Params_SetCheating {
        bool bCheating; // 0x0
    }; // Size: 0x1
    Params_SetCheating params{};
    params.bCheating = (bool)bCheating;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UIntroBlueprintFunctionLibrary::IsLoadingRootLevel(bool bReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.IsLoadingRootLevel"));
    struct Params_IsLoadingRootLevel {
        bool bReset; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsLoadingRootLevel params{};
    params.bReset = (bool)bReset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIntroBlueprintFunctionLibrary::IntroStart(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.IntroStart"));
    struct Params_IntroStart {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_IntroStart params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UIntroBlueprintFunctionLibrary::IntroEnd(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.IntroEnd"));
    struct Params_IntroEnd {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_IntroEnd params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EIntroCheckpoint UIntroBlueprintFunctionLibrary::GetIntroCheckpoint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntroBlueprintFunctionLibrary.GetIntroCheckpoint"));
    struct Params_GetIntroCheckpoint {
        EIntroCheckpoint ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIntroCheckpoint params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EIntroCheckpoint)params.ReturnValue;
}

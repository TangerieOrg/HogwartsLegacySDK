#include "AActor.hpp"
#include "FLightComponentStates.hpp"
#include "FLightComponentStatesSaveData.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULightComponentStatesLibrary.hpp"
#include "UObject.hpp"
ULightComponentStatesLibrary* ULightComponentStatesLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStatesLibrary");
    return (ULightComponentStatesLibrary*)res;
}
void ULightComponentStatesLibrary::LightComponentStatesInitialize(UObject* Owner, FLightComponentStatesSaveData& LightComponentStatesSaveData, FLightComponentStates LightComponentStates) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightComponentStatesLibrary.LightComponentStatesInitialize"));
    struct Params_LightComponentStatesInitialize {
        UObject* Owner; // 0x0
        FLightComponentStatesSaveData LightComponentStatesSaveData; // 0x8
        FLightComponentStates LightComponentStates; // 0x18
    }; // Size: 0x28
    Params_LightComponentStatesInitialize params{};
    params.Owner = (UObject*)Owner;
    params.LightComponentStatesSaveData = (FLightComponentStatesSaveData)LightComponentStatesSaveData;
    params.LightComponentStates = (FLightComponentStates)LightComponentStates;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightComponentStatesSaveData = params.LightComponentStatesSaveData;
}
void ULightComponentStatesLibrary::LightComponentStatesUpdate(AActor* Actor, FLightComponentStatesSaveData& LightComponentStatesSaveData, bool bIncludeChildActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightComponentStatesLibrary.LightComponentStatesUpdate"));
    struct Params_LightComponentStatesUpdate {
        AActor* Actor; // 0x0
        FLightComponentStatesSaveData LightComponentStatesSaveData; // 0x8
        bool bIncludeChildActors; // 0x18
    }; // Size: 0x19
    Params_LightComponentStatesUpdate params{};
    params.Actor = (AActor*)Actor;
    params.LightComponentStatesSaveData = (FLightComponentStatesSaveData)LightComponentStatesSaveData;
    params.bIncludeChildActors = (bool)bIncludeChildActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightComponentStatesSaveData = params.LightComponentStatesSaveData;
}
void ULightComponentStatesLibrary::LightComponentStatesRestore(FLightComponentStatesSaveData& LightComponentStatesSaveData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightComponentStatesLibrary.LightComponentStatesRestore"));
    struct Params_LightComponentStatesRestore {
        FLightComponentStatesSaveData LightComponentStatesSaveData; // 0x0
    }; // Size: 0x10
    Params_LightComponentStatesRestore params{};
    params.LightComponentStatesSaveData = (FLightComponentStatesSaveData)LightComponentStatesSaveData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightComponentStatesSaveData = params.LightComponentStatesSaveData;
}
void ULightComponentStatesLibrary::AddLightComponentStateVisibility(UObject* Owner, FLightComponentStatesSaveData& LightComponentStatesSaveData, bool bVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightComponentStatesLibrary.AddLightComponentStateVisibility"));
    struct Params_AddLightComponentStateVisibility {
        UObject* Owner; // 0x0
        FLightComponentStatesSaveData LightComponentStatesSaveData; // 0x8
        bool bVisible; // 0x18
    }; // Size: 0x19
    Params_AddLightComponentStateVisibility params{};
    params.Owner = (UObject*)Owner;
    params.LightComponentStatesSaveData = (FLightComponentStatesSaveData)LightComponentStatesSaveData;
    params.bVisible = (bool)bVisible;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightComponentStatesSaveData = params.LightComponentStatesSaveData;
}
void ULightComponentStatesLibrary::AddLightComponentStateCastShadow(UObject* Owner, FLightComponentStatesSaveData& LightComponentStatesSaveData, bool bCastShadow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightComponentStatesLibrary.AddLightComponentStateCastShadow"));
    struct Params_AddLightComponentStateCastShadow {
        UObject* Owner; // 0x0
        FLightComponentStatesSaveData LightComponentStatesSaveData; // 0x8
        bool bCastShadow; // 0x18
    }; // Size: 0x19
    Params_AddLightComponentStateCastShadow params{};
    params.Owner = (UObject*)Owner;
    params.LightComponentStatesSaveData = (FLightComponentStatesSaveData)LightComponentStatesSaveData;
    params.bCastShadow = (bool)bCastShadow;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightComponentStatesSaveData = params.LightComponentStatesSaveData;
}

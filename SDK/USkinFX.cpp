#include "AActor.hpp"
#include "ASkinFXDefinition.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USkinFX.hpp"
#include "USkinFXComponent.hpp"
#include "UTexture.hpp"
USkinFX* USkinFX::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFX");
    return (USkinFX*)res;
}
FMaterialPermuterKey USkinFX::SkinFXNameMaterialPermuterKey(FName FX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.SkinFXNameMaterialPermuterKey"));
    struct Params_SkinFXNameMaterialPermuterKey {
        FName FX; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SkinFXNameMaterialPermuterKey params{};
    params.FX = (FName)FX;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
void USkinFX::ActorGetSkinFXTimeFactor(AActor* Actor, FName FXName, float& TimeFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorGetSkinFXTimeFactor"));
    struct Params_ActorGetSkinFXTimeFactor {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        float TimeFactor; // 0x10
    }; // Size: 0x14
    Params_ActorGetSkinFXTimeFactor params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.TimeFactor = (float)TimeFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TimeFactor = params.TimeFactor;
}
void USkinFX::ActorUpdateSkinFXRules(AActor* Actor, FName FX, FMaterialSwapRules newRules, bool& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorUpdateSkinFXRules"));
    struct Params_ActorUpdateSkinFXRules {
        AActor* Actor; // 0x0
        FName FX; // 0x8
        FMaterialSwapRules newRules; // 0x10
        bool Result; // 0xf0
    }; // Size: 0xf1
    Params_ActorUpdateSkinFXRules params{};
    params.Actor = (AActor*)Actor;
    params.FX = (FName)FX;
    params.newRules = (FMaterialSwapRules)newRules;
    params.Result = (bool)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
}
void USkinFX::SkinFXName(UClass* FX, FName& Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.SkinFXName"));
    struct Params_SkinFXName {
        UClass* FX; // 0x0
        FName Name; // 0x8
    }; // Size: 0x10
    Params_SkinFXName params{};
    params.FX = (UClass*)FX;
    params.Name = (FName)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Name = params.Name;
}
FMaterialPermuterKey USkinFX::SkinFXMaterialPermuterKey(UClass* FX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.SkinFXMaterialPermuterKey"));
    struct Params_SkinFXMaterialPermuterKey {
        UClass* FX; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SkinFXMaterialPermuterKey params{};
    params.FX = (UClass*)FX;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
void USkinFX::ActorSetSkinFXTimeFactor(AActor* Actor, FName FXName, float TimeFactor, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorSetSkinFXTimeFactor"));
    struct Params_ActorSetSkinFXTimeFactor {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        float TimeFactor; // 0x10
        bool Success; // 0x14
    }; // Size: 0x15
    Params_ActorSetSkinFXTimeFactor params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.TimeFactor = (float)TimeFactor;
    params.Success = (bool)Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
void USkinFX::ActorStartSkinFXWithRulesAndInitialParameters(AActor* Actor, USkinFXComponent*& SkinFXComponent, FName StartFX, FMaterialSwapRules swapRules, FMaterialSwapParameters& parameterValues, bool detachAndDestroyWhenDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorStartSkinFXWithRulesAndInitialParameters"));
    struct Params_ActorStartSkinFXWithRulesAndInitialParameters {
        AActor* Actor; // 0x0
        USkinFXComponent* SkinFXComponent; // 0x8
        FName StartFX; // 0x10
        FMaterialSwapRules swapRules; // 0x18
        FMaterialSwapParameters parameterValues; // 0xf8
        bool detachAndDestroyWhenDone; // 0x148
    }; // Size: 0x149
    Params_ActorStartSkinFXWithRulesAndInitialParameters params{};
    params.Actor = (AActor*)Actor;
    params.SkinFXComponent = (USkinFXComponent*)SkinFXComponent;
    params.StartFX = (FName)StartFX;
    params.swapRules = (FMaterialSwapRules)swapRules;
    params.parameterValues = (FMaterialSwapParameters)parameterValues;
    params.detachAndDestroyWhenDone = (bool)detachAndDestroyWhenDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkinFXComponent = params.SkinFXComponent;
    parameterValues = params.parameterValues;
}
FMaterialPermuterKey USkinFX::SkinFXEffectMaterialPermuterKey(ASkinFXDefinition* Effect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.SkinFXEffectMaterialPermuterKey"));
    struct Params_SkinFXEffectMaterialPermuterKey {
        ASkinFXDefinition* Effect; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SkinFXEffectMaterialPermuterKey params{};
    params.Effect = (ASkinFXDefinition*)Effect;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
void USkinFX::EffectName(UClass* FX, FName& Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.EffectName"));
    struct Params_EffectName {
        UClass* FX; // 0x0
        FName Name; // 0x8
    }; // Size: 0x10
    Params_EffectName params{};
    params.FX = (UClass*)FX;
    params.Name = (FName)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Name = params.Name;
}
void USkinFX::ActorStartSkinFXWithRules(AActor* Actor, USkinFXComponent*& SkinFXComponent, FName StartFX, FMaterialSwapRules swapRules, bool detachAndDestroyWhenDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorStartSkinFXWithRules"));
    struct Params_ActorStartSkinFXWithRules {
        AActor* Actor; // 0x0
        USkinFXComponent* SkinFXComponent; // 0x8
        FName StartFX; // 0x10
        FMaterialSwapRules swapRules; // 0x18
        bool detachAndDestroyWhenDone; // 0xf8
    }; // Size: 0xf9
    Params_ActorStartSkinFXWithRules params{};
    params.Actor = (AActor*)Actor;
    params.SkinFXComponent = (USkinFXComponent*)SkinFXComponent;
    params.StartFX = (FName)StartFX;
    params.swapRules = (FMaterialSwapRules)swapRules;
    params.detachAndDestroyWhenDone = (bool)detachAndDestroyWhenDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkinFXComponent = params.SkinFXComponent;
}
void USkinFX::ActorStartSkinFXWithInitialParameters(AActor* Actor, FName StartFX, FMaterialSwapParameters& parameterValues, USkinFXComponent*& SkinFXComponent, bool detachAndDestroyWhenDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorStartSkinFXWithInitialParameters"));
    struct Params_ActorStartSkinFXWithInitialParameters {
        AActor* Actor; // 0x0
        FName StartFX; // 0x8
        FMaterialSwapParameters parameterValues; // 0x10
        USkinFXComponent* SkinFXComponent; // 0x60
        bool detachAndDestroyWhenDone; // 0x68
    }; // Size: 0x69
    Params_ActorStartSkinFXWithInitialParameters params{};
    params.Actor = (AActor*)Actor;
    params.StartFX = (FName)StartFX;
    params.parameterValues = (FMaterialSwapParameters)parameterValues;
    params.SkinFXComponent = (USkinFXComponent*)SkinFXComponent;
    params.detachAndDestroyWhenDone = (bool)detachAndDestroyWhenDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkinFXComponent = params.SkinFXComponent;
    parameterValues = params.parameterValues;
}
void USkinFX::ActorStartSkinFX(AActor* Actor, USkinFXComponent*& SkinFXComponent, FName StartFX, bool detachAndDestroyWhenDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorStartSkinFX"));
    struct Params_ActorStartSkinFX {
        AActor* Actor; // 0x0
        USkinFXComponent* SkinFXComponent; // 0x8
        FName StartFX; // 0x10
        bool detachAndDestroyWhenDone; // 0x18
    }; // Size: 0x19
    Params_ActorStartSkinFX params{};
    params.Actor = (AActor*)Actor;
    params.SkinFXComponent = (USkinFXComponent*)SkinFXComponent;
    params.StartFX = (FName)StartFX;
    params.detachAndDestroyWhenDone = (bool)detachAndDestroyWhenDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkinFXComponent = params.SkinFXComponent;
}
void USkinFX::ActorSetExternalVectorParameter(AActor* Actor, FName FXName, FName ParameterName, FVector Value, float packAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorSetExternalVectorParameter"));
    struct Params_ActorSetExternalVectorParameter {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        FName ParameterName; // 0x10
        FVector Value; // 0x18
        float packAlpha; // 0x24
    }; // Size: 0x28
    Params_ActorSetExternalVectorParameter params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.ParameterName = (FName)ParameterName;
    params.Value = (FVector)Value;
    params.packAlpha = (float)packAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFX::ActorSetExternalTextureParameter(AActor* Owner, FName FXName, FName ParameterName, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorSetExternalTextureParameter"));
    struct Params_ActorSetExternalTextureParameter {
        AActor* Owner; // 0x0
        FName FXName; // 0x8
        FName ParameterName; // 0x10
        UTexture* Value; // 0x18
    }; // Size: 0x20
    Params_ActorSetExternalTextureParameter params{};
    params.Owner = (AActor*)Owner;
    params.FXName = (FName)FXName;
    params.ParameterName = (FName)ParameterName;
    params.Value = (UTexture*)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFX::ActorSetExternalScalarParameter(AActor* Actor, FName FXName, FName ParameterName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorSetExternalScalarParameter"));
    struct Params_ActorSetExternalScalarParameter {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        FName ParameterName; // 0x10
        float Value; // 0x18
    }; // Size: 0x1c
    Params_ActorSetExternalScalarParameter params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.ParameterName = (FName)ParameterName;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFX::ActorSetExternalParameters(AActor* Actor, FName FXName, FMaterialSwapParameters& parameterValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorSetExternalParameters"));
    struct Params_ActorSetExternalParameters {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        FMaterialSwapParameters parameterValues; // 0x10
    }; // Size: 0x60
    Params_ActorSetExternalParameters params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.parameterValues = (FMaterialSwapParameters)parameterValues;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    parameterValues = params.parameterValues;
}
void USkinFX::ActorSetExternalColorParameter(AActor* Actor, FName FXName, FName ParameterName, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorSetExternalColorParameter"));
    struct Params_ActorSetExternalColorParameter {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        FName ParameterName; // 0x10
        FLinearColor Value; // 0x18
    }; // Size: 0x28
    Params_ActorSetExternalColorParameter params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.ParameterName = (FName)ParameterName;
    params.Value = (FLinearColor)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFX::ActorEndAllSkinFX(AActor* Actor, ESkinFXEffectEndStyle EndStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorEndAllSkinFX"));
    struct Params_ActorEndAllSkinFX {
        AActor* Actor; // 0x0
        ESkinFXEffectEndStyle EndStyle; // 0x8
    }; // Size: 0x9
    Params_ActorEndAllSkinFX params{};
    params.Actor = (AActor*)Actor;
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFX::ActorIsSkinFXRunning(AActor* Actor, FName FXName, bool& IsRunning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorIsSkinFXRunning"));
    struct Params_ActorIsSkinFXRunning {
        AActor* Actor; // 0x0
        FName FXName; // 0x8
        bool IsRunning; // 0x10
    }; // Size: 0x11
    Params_ActorIsSkinFXRunning params{};
    params.Actor = (AActor*)Actor;
    params.FXName = (FName)FXName;
    params.IsRunning = (bool)IsRunning;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IsRunning = params.IsRunning;
}
void USkinFX::ActorAnySkinFXRunning(AActor* Actor, bool& IsRunning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorAnySkinFXRunning"));
    struct Params_ActorAnySkinFXRunning {
        AActor* Actor; // 0x0
        bool IsRunning; // 0x8
    }; // Size: 0x9
    Params_ActorAnySkinFXRunning params{};
    params.Actor = (AActor*)Actor;
    params.IsRunning = (bool)IsRunning;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IsRunning = params.IsRunning;
}
void USkinFX::ActorGetSkinFX(AActor* Actor, USkinFXComponent*& SkinFXComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorGetSkinFX"));
    struct Params_ActorGetSkinFX {
        AActor* Actor; // 0x0
        USkinFXComponent* SkinFXComponent; // 0x8
    }; // Size: 0x10
    Params_ActorGetSkinFX params{};
    params.Actor = (AActor*)Actor;
    params.SkinFXComponent = (USkinFXComponent*)SkinFXComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkinFXComponent = params.SkinFXComponent;
}
void USkinFX::ActorEndSkinFX(AActor* Actor, FName endFX, ESkinFXEffectEndStyle EndStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorEndSkinFX"));
    struct Params_ActorEndSkinFX {
        AActor* Actor; // 0x0
        FName endFX; // 0x8
        ESkinFXEffectEndStyle EndStyle; // 0x10
    }; // Size: 0x11
    Params_ActorEndSkinFX params{};
    params.Actor = (AActor*)Actor;
    params.endFX = (FName)endFX;
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFX::ActorAddSkinFXComponent(AActor* Actor, USkinFXComponent*& SkinFXComponent, bool detachAndDestroyWhenDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFX.ActorAddSkinFXComponent"));
    struct Params_ActorAddSkinFXComponent {
        AActor* Actor; // 0x0
        USkinFXComponent* SkinFXComponent; // 0x8
        bool detachAndDestroyWhenDone; // 0x10
    }; // Size: 0x11
    Params_ActorAddSkinFXComponent params{};
    params.Actor = (AActor*)Actor;
    params.SkinFXComponent = (USkinFXComponent*)SkinFXComponent;
    params.detachAndDestroyWhenDone = (bool)detachAndDestroyWhenDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkinFXComponent = params.SkinFXComponent;
}

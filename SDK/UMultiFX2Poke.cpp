#include "FFXPokeNiagara.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMultiFX2Handle.hpp"
#include "FPokeNiagaraFXBool.hpp"
#include "FPokeNiagaraFXColor.hpp"
#include "FPokeNiagaraFXFloat.hpp"
#include "FPokeNiagaraFXInt.hpp"
#include "FPokeNiagaraFXQuat.hpp"
#include "FPokeNiagaraFXVector.hpp"
#include "FPokeNiagaraFXVector4.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMultiFX2Poke.hpp"
void UMultiFX2Poke::FXPokeNiagaraFloat(FMultiFX2Handle& FXHandle, FPokeNiagaraFXFloat FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraFloat"));
    struct Params_FXPokeNiagaraFloat {
        FMultiFX2Handle FXHandle; // 0x0
        FPokeNiagaraFXFloat FXPoke; // 0x8
        bool bSuccess; // 0x20
    }; // Size: 0x21
    Params_FXPokeNiagaraFloat params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXFloat)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagaraVector4(FMultiFX2Handle& FXHandle, FPokeNiagaraFXVector4 FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraVector4"));
    struct Params_FXPokeNiagaraVector4 {
        FMultiFX2Handle FXHandle; // 0x0
        char pad_8[0x8];
        FPokeNiagaraFXVector4 FXPoke; // 0x10
        bool bSuccess; // 0x30
    }; // Size: 0x31
    Params_FXPokeNiagaraVector4 params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXVector4)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
UMultiFX2Poke* UMultiFX2Poke::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2Poke");
    return (UMultiFX2Poke*)res;
}
void UMultiFX2Poke::FXPokeSkinFXVectorParameter(FMultiFX2Handle& FXHandle, UClass* FX, FName Parameter, FVector Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeSkinFXVectorParameter"));
    struct Params_FXPokeSkinFXVectorParameter {
        FMultiFX2Handle FXHandle; // 0x0
        UClass* FX; // 0x8
        FName Parameter; // 0x10
        FVector Value; // 0x18
        bool bSuccess; // 0x24
    }; // Size: 0x25
    Params_FXPokeSkinFXVectorParameter params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FX = (UClass*)FX;
    params.Parameter = (FName)Parameter;
    params.Value = (FVector)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagaraVector(FMultiFX2Handle& FXHandle, FPokeNiagaraFXVector FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraVector"));
    struct Params_FXPokeNiagaraVector {
        FMultiFX2Handle FXHandle; // 0x0
        FPokeNiagaraFXVector FXPoke; // 0x8
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_FXPokeNiagaraVector params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXVector)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeSkinFXScalarParameter(FMultiFX2Handle& FXHandle, UClass* FX, FName Parameter, float Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeSkinFXScalarParameter"));
    struct Params_FXPokeSkinFXScalarParameter {
        FMultiFX2Handle FXHandle; // 0x0
        UClass* FX; // 0x8
        FName Parameter; // 0x10
        float Value; // 0x18
        bool bSuccess; // 0x1c
    }; // Size: 0x1d
    Params_FXPokeSkinFXScalarParameter params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FX = (UClass*)FX;
    params.Parameter = (FName)Parameter;
    params.Value = (float)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeSkinFXParameters(FMultiFX2Handle& FXHandle, UClass* FX, FMaterialSwapParameters Parameters, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeSkinFXParameters"));
    struct Params_FXPokeSkinFXParameters {
        FMultiFX2Handle FXHandle; // 0x0
        UClass* FX; // 0x8
        FMaterialSwapParameters Parameters; // 0x10
        bool bSuccess; // 0x60
    }; // Size: 0x61
    Params_FXPokeSkinFXParameters params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FX = (UClass*)FX;
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagaraQuat(FMultiFX2Handle& FXHandle, FPokeNiagaraFXQuat FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraQuat"));
    struct Params_FXPokeNiagaraQuat {
        FMultiFX2Handle FXHandle; // 0x0
        FPokeNiagaraFXQuat FXPoke; // 0x8
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_FXPokeNiagaraQuat params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXQuat)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeSkinFXColorParameter(FMultiFX2Handle& FXHandle, UClass* FX, FName Parameter, FLinearColor Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeSkinFXColorParameter"));
    struct Params_FXPokeSkinFXColorParameter {
        FMultiFX2Handle FXHandle; // 0x0
        UClass* FX; // 0x8
        FName Parameter; // 0x10
        FLinearColor Value; // 0x18
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_FXPokeSkinFXColorParameter params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FX = (UClass*)FX;
    params.Parameter = (FName)Parameter;
    params.Value = (FLinearColor)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagaraInt(FMultiFX2Handle& FXHandle, FPokeNiagaraFXInt FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraInt"));
    struct Params_FXPokeNiagaraInt {
        FMultiFX2Handle FXHandle; // 0x0
        FPokeNiagaraFXInt FXPoke; // 0x8
        bool bSuccess; // 0x20
    }; // Size: 0x21
    Params_FXPokeNiagaraInt params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXInt)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagaraColor(FMultiFX2Handle& FXHandle, FPokeNiagaraFXColor FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraColor"));
    struct Params_FXPokeNiagaraColor {
        FMultiFX2Handle FXHandle; // 0x0
        FPokeNiagaraFXColor FXPoke; // 0x8
        bool bSuccess; // 0x28
    }; // Size: 0x29
    Params_FXPokeNiagaraColor params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXColor)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagaraBool(FMultiFX2Handle& FXHandle, FPokeNiagaraFXBool FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagaraBool"));
    struct Params_FXPokeNiagaraBool {
        FMultiFX2Handle FXHandle; // 0x0
        FPokeNiagaraFXBool FXPoke; // 0x8
        bool bSuccess; // 0x20
    }; // Size: 0x21
    Params_FXPokeNiagaraBool params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FPokeNiagaraFXBool)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeNiagara(FMultiFX2Handle& FXHandle, FFXPokeNiagara FXPoke, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeNiagara"));
    struct Params_FXPokeNiagara {
        FMultiFX2Handle FXHandle; // 0x0
        FFXPokeNiagara FXPoke; // 0x8
        bool bSuccess; // 0x80
    }; // Size: 0x81
    Params_FXPokeNiagara params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.FXPoke = (FFXPokeNiagara)FXPoke;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeMaterialSwapVectorParameter(FMultiFX2Handle& FXHandle, FName Parameter, FVector Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeMaterialSwapVectorParameter"));
    struct Params_FXPokeMaterialSwapVectorParameter {
        FMultiFX2Handle FXHandle; // 0x0
        FName Parameter; // 0x8
        FVector Value; // 0x10
        bool bSuccess; // 0x1c
    }; // Size: 0x1d
    Params_FXPokeMaterialSwapVectorParameter params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.Parameter = (FName)Parameter;
    params.Value = (FVector)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeMaterialSwapScalarParameter(FMultiFX2Handle& FXHandle, FName Parameter, float Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeMaterialSwapScalarParameter"));
    struct Params_FXPokeMaterialSwapScalarParameter {
        FMultiFX2Handle FXHandle; // 0x0
        FName Parameter; // 0x8
        float Value; // 0x10
        bool bSuccess; // 0x14
    }; // Size: 0x15
    Params_FXPokeMaterialSwapScalarParameter params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.Parameter = (FName)Parameter;
    params.Value = (float)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeMaterialSwapParameters(FMultiFX2Handle& FXHandle, FMaterialSwapParameters Parameters, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeMaterialSwapParameters"));
    struct Params_FXPokeMaterialSwapParameters {
        FMultiFX2Handle FXHandle; // 0x0
        FMaterialSwapParameters Parameters; // 0x8
        bool bSuccess; // 0x58
    }; // Size: 0x59
    Params_FXPokeMaterialSwapParameters params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}
void UMultiFX2Poke::FXPokeMaterialSwapColorParameter(FMultiFX2Handle& FXHandle, FName Parameter, FLinearColor Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2Poke.FXPokeMaterialSwapColorParameter"));
    struct Params_FXPokeMaterialSwapColorParameter {
        FMultiFX2Handle FXHandle; // 0x0
        FName Parameter; // 0x8
        FLinearColor Value; // 0x10
        bool bSuccess; // 0x20
    }; // Size: 0x21
    Params_FXPokeMaterialSwapColorParameter params{};
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    params.Parameter = (FName)Parameter;
    params.Value = (FLinearColor)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
    bSuccess = params.bSuccess;
}

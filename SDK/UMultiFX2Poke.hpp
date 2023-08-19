#pragma once
#include <cstdint>
#include "FFXPokeNiagara.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FPokeNiagaraFXBool.hpp"
#include "FPokeNiagaraFXColor.hpp"
#include "FPokeNiagaraFXFloat.hpp"
#include "FPokeNiagaraFXInt.hpp"
#include "FPokeNiagaraFXQuat.hpp"
#include "FPokeNiagaraFXVector.hpp"
#include "FPokeNiagaraFXVector4.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FMultiFX2Handle;
class UClass;
#pragma pack(push, 1)
class UMultiFX2Poke : public UBlueprintFunctionLibrary {
public:
    static UMultiFX2Poke* StaticClass();
    static void FXPokeSkinFXVectorParameter(FMultiFX2Handle& FXHandle, UClass* FX, FName Parameter, FVector Value, bool& bSuccess);
    static void FXPokeSkinFXScalarParameter(FMultiFX2Handle& FXHandle, UClass* FX, FName Parameter, float Value, bool& bSuccess);
    static void FXPokeSkinFXParameters(FMultiFX2Handle& FXHandle, UClass* FX, FMaterialSwapParameters Parameters, bool& bSuccess);
    static void FXPokeSkinFXColorParameter(FMultiFX2Handle& FXHandle, UClass* FX, FName Parameter, FLinearColor Value, bool& bSuccess);
    static void FXPokeNiagaraVector4(FMultiFX2Handle& FXHandle, FPokeNiagaraFXVector4 FXPoke, bool& bSuccess);
    static void FXPokeNiagaraVector(FMultiFX2Handle& FXHandle, FPokeNiagaraFXVector FXPoke, bool& bSuccess);
    static void FXPokeNiagaraQuat(FMultiFX2Handle& FXHandle, FPokeNiagaraFXQuat FXPoke, bool& bSuccess);
    static void FXPokeNiagaraInt(FMultiFX2Handle& FXHandle, FPokeNiagaraFXInt FXPoke, bool& bSuccess);
    static void FXPokeNiagaraFloat(FMultiFX2Handle& FXHandle, FPokeNiagaraFXFloat FXPoke, bool& bSuccess);
    static void FXPokeNiagaraColor(FMultiFX2Handle& FXHandle, FPokeNiagaraFXColor FXPoke, bool& bSuccess);
    static void FXPokeNiagaraBool(FMultiFX2Handle& FXHandle, FPokeNiagaraFXBool FXPoke, bool& bSuccess);
    static void FXPokeNiagara(FMultiFX2Handle& FXHandle, FFXPokeNiagara FXPoke, bool& bSuccess);
    static void FXPokeMaterialSwapVectorParameter(FMultiFX2Handle& FXHandle, FName Parameter, FVector Value, bool& bSuccess);
    static void FXPokeMaterialSwapScalarParameter(FMultiFX2Handle& FXHandle, FName Parameter, float Value, bool& bSuccess);
    static void FXPokeMaterialSwapParameters(FMultiFX2Handle& FXHandle, FMaterialSwapParameters Parameters, bool& bSuccess);
    static void FXPokeMaterialSwapColorParameter(FMultiFX2Handle& FXHandle, FName Parameter, FLinearColor Value, bool& bSuccess);
}; // Size: 0x28
#pragma pack(pop)

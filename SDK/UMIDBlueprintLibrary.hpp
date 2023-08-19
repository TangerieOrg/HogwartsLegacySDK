#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMIDParameters.hpp"
#include "FMIDScalarParameter.hpp"
#include "FMIDTextureParameter.hpp"
#include "FMIDVectorParameter.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UPrimitiveComponent;
class UTexture;
class UMaterialInstanceDynamic;
class AActor;
#pragma pack(push, 1)
class UMIDBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UMIDBlueprintLibrary* StaticClass();
    static void SetMIDParametersVector(FMIDParameters& Parameters, FMIDVectorParameter Vector);
    static void SetMIDParametersTexture(FMIDParameters& Parameters, FMIDTextureParameter Texture);
    static void SetMIDParametersScalar(FMIDParameters& Parameters, FMIDScalarParameter Scalar);
    static void PrimitiveCreateMIDs(UPrimitiveComponent* Component);
    static void PrimitiveApplyMIDParameters(UPrimitiveComponent* Component, FMIDParameters& Parameters, bool bAutoCreateMIDs);
    static void MIDParametersIsEmpty(FMIDParameters& ParameterSet, bool& bIsEmpty);
    static FMIDVectorParameter MakeMIDVectorParameter(FName Name, FLinearColor Vector);
    static FMIDTextureParameter MakeMIDTextureParameter(FName Name, UTexture* Texture);
    static FMIDScalarParameter MakeMIDScalarParameter(FName Name, float Scalar);
    static FMIDParameters MakeMIDParametersVector(FMIDVectorParameter Vector);
    static FMIDParameters MakeMIDParametersTexture(FMIDTextureParameter Texture);
    static FMIDParameters MakeMIDParametersScalar(FMIDScalarParameter Scalar);
    static FMIDParameters MakeMIDParameters(TArray<FMIDScalarParameter>& Scalars, TArray<FMIDVectorParameter>& Vectors, TArray<FMIDTextureParameter>& Textures);
    static FMIDParameters EmptyMIDParameters(FMIDParameters& ParameterSet);
    static FMIDParameters CombineMIDParameters(FMIDParameters A, FMIDParameters B);
    static void ApplyMIDParameters(UMaterialInstanceDynamic* Mid, FMIDParameters& Parameters);
    static void ActorCreateMIDs(AActor* Actor, bool bIncludeChildActors);
    static void ActorApplyMIDParameters(AActor* Actor, FMIDParameters& Parameters, bool bIncludeChildActors, bool bAutoCreateMIDs);
}; // Size: 0x28
#pragma pack(pop)

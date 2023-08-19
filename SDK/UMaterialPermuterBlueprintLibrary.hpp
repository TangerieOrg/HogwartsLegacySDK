#pragma once
#include <cstdint>
#include "ETransformedParameterSource.hpp"
#include "ETransformedParameterSpace.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapParametersSimple.hpp"
#include "FMaterialSwapScalarParameter.hpp"
#include "FMaterialSwapTextureParameter.hpp"
#include "FMaterialSwapTransformedPosition.hpp"
#include "FMaterialSwapTransformedVector.hpp"
#include "FMaterialSwapVectorParameter.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
#pragma pack(push, 1)
class UMaterialPermuterBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UMaterialPermuterBlueprintLibrary* StaticClass();
    static void SimpleMaterialSwapParametersIsEmpty(FMaterialSwapParametersSimple& ParameterSet, bool& bIsEmpty);
    static FString SimpleMaterialSwapParametersDump(FMaterialSwapParametersSimple ParameterSet, FString Delimiter);
    static FMaterialSwapParametersSimple SimpleCombineMaterialSwapParameters(FMaterialSwapParametersSimple A, FMaterialSwapParametersSimple B);
    static FMaterialSwapParametersSimple SetSimpleMaterialSwapParametersVector(FMaterialSwapParametersSimple& Parameters, FMaterialSwapVectorParameter Vector);
    static FMaterialSwapParametersSimple SetSimpleMaterialSwapParametersTexture(FMaterialSwapParametersSimple& Parameters, FMaterialSwapTextureParameter Texture);
    static FMaterialSwapParametersSimple SetSimpleMaterialSwapParametersScalar(FMaterialSwapParametersSimple& Parameters, FMaterialSwapScalarParameter Scalar);
    static void SetMaterialSwapTransformedPairClosestBone(FMaterialSwapParameters& Parameters, AActor* Actor, FName PositionParameterName, FName VectorParameterName, FVector WorldPosition, FVector WorldVector);
    static FMaterialSwapParameters SetMaterialSwapParametersVector(FMaterialSwapParameters& Parameters, FMaterialSwapVectorParameter Vector);
    static FMaterialSwapParameters SetMaterialSwapParametersTransformedVector(FMaterialSwapParameters& Parameters, FMaterialSwapTransformedVector TransformedVector);
    static FMaterialSwapParameters SetMaterialSwapParametersTransformedPosition(FMaterialSwapParameters& Parameters, FMaterialSwapTransformedPosition TransformedPosition);
    static FMaterialSwapParameters SetMaterialSwapParametersTexture(FMaterialSwapParameters& Parameters, FMaterialSwapTextureParameter Texture);
    static FMaterialSwapParameters SetMaterialSwapParametersScalar(FMaterialSwapParameters& Parameters, FMaterialSwapScalarParameter Scalar);
    static void MaterialSwapParametersIsEmpty(FMaterialSwapParameters& ParameterSet, bool& bIsEmpty);
    static FString MaterialSwapParametersDump(FMaterialSwapParameters ParameterSet, FString Delimiter);
    static FMaterialSwapParametersSimple MakeSimpleMaterialSwapParametersVector(FMaterialSwapVectorParameter Vector);
    static FMaterialSwapParametersSimple MakeSimpleMaterialSwapParametersTexture(FMaterialSwapTextureParameter Texture);
    static FMaterialSwapParametersSimple MakeSimpleMaterialSwapParametersScalar(FMaterialSwapScalarParameter Scalar);
    static FMaterialSwapParametersSimple MakeSimpleMaterialSwapParameters(TArray<FMaterialSwapScalarParameter> Scalars, TArray<FMaterialSwapVectorParameter> Vectors, TArray<FMaterialSwapTextureParameter> Textures);
    static FMaterialSwapTransformedVector MakeMaterialSwapTransformedVectorClosestBone(AActor* Actor, FName ParameterName, FVector WorldPosition, FVector WorldVector);
    static FMaterialSwapTransformedVector MakeMaterialSwapTransformedVector(AActor* Actor, FName ParameterName, FVector Vector, ETransformedParameterSpace Space, FName TransformSource, ETransformedParameterSource TransformType);
    static FMaterialSwapTransformedPosition MakeMaterialSwapTransformedPositionClosestBone(AActor* Actor, FName ParameterName, FVector WorldPosition);
    static FMaterialSwapTransformedPosition MakeMaterialSwapTransformedPosition(AActor* Actor, FName ParameterName, FVector Position, ETransformedParameterSpace Space, FName TransformSource, ETransformedParameterSource TransformType);
    static FMaterialSwapParameters MakeMaterialSwapTransformedPairClosestBone(AActor* Actor, FName PositionParameterName, FName VectorParameterName, FVector WorldPosition, FVector WorldVector);
    static FMaterialSwapParameters MakeMaterialSwapParametersVector(FMaterialSwapVectorParameter Vector);
    static FMaterialSwapParameters MakeMaterialSwapParametersTexture(FMaterialSwapTextureParameter Texture);
    static FMaterialSwapParameters MakeMaterialSwapParametersScalar(FMaterialSwapScalarParameter Scalar);
    static FMaterialSwapParameters MakeMaterialSwapParametersFromSimple(FMaterialSwapParametersSimple Parameters);
    static FMaterialSwapParametersSimple MakeMaterialSwapParametersFromNotSimple(FMaterialSwapParameters Parameters);
    static FMaterialSwapParameters MakeMaterialSwapParameters(TArray<FMaterialSwapScalarParameter>& Scalars, TArray<FMaterialSwapVectorParameter>& Vectors, TArray<FMaterialSwapTextureParameter>& Textures, TArray<FMaterialSwapTransformedPosition>& TransformedPositions, TArray<FMaterialSwapTransformedVector>& TransformedVectors);
    static FMaterialSwapParametersSimple EmptySimpleMaterialSwapParameters(FMaterialSwapParametersSimple& ParameterSet);
    static FMaterialSwapParameters EmptyMaterialSwapParameters(FMaterialSwapParameters& ParameterSet);
    static FMaterialSwapParameters CombineSimpleMaterialSwapParameters(FMaterialSwapParameters A, FMaterialSwapParametersSimple B);
    static FMaterialSwapParameters CombineMaterialSwapParameters(FMaterialSwapParameters A, FMaterialSwapParameters B);
}; // Size: 0x28
#pragma pack(pop)

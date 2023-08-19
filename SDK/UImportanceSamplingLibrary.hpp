#pragma once
#include <cstdint>
#include "EImportanceWeight\Type.hpp"
#include "FImportanceTexture.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UTexture2D;
struct FLinearColor;
#pragma pack(push, 1)
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary {
public:
    static UImportanceSamplingLibrary* StaticClass();
    static float RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed);
    static FVector RandomSobolCell3D(int32_t Index, int32_t NumCells, FVector Cell, FVector Seed);
    static FVector2D RandomSobolCell2D(int32_t Index, int32_t NumCells, FVector2D Cell, FVector2D Seed);
    static float NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue);
    static FVector NextSobolCell3D(int32_t Index, int32_t NumCells, FVector PreviousValue);
    static FVector2D NextSobolCell2D(int32_t Index, int32_t NumCells, FVector2D PreviousValue);
    static FImportanceTexture MakeImportanceTexture(UTexture2D* Texture, EImportanceWeight::Type WeightingFunc);
    static void ImportanceSample(FImportanceTexture& Texture, FVector2D& Rand, int32_t Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize);
    static void BreakImportanceTexture(FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, EImportanceWeight::Type& WeightingFunc);
}; // Size: 0x28
#pragma pack(pop)

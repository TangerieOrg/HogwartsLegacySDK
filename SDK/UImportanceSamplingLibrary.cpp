#include "EImportanceWeight\Type.hpp"
#include "FImportanceTexture.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UImportanceSamplingLibrary.hpp"
#include "UTexture2D.hpp"
UImportanceSamplingLibrary* UImportanceSamplingLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ImportanceSamplingLibrary");
    return (UImportanceSamplingLibrary*)res;
}
float UImportanceSamplingLibrary::NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.NextSobolFloat"));
    struct Params_NextSobolFloat {
        int32_t Index; // 0x0
        int32_t Dimension; // 0x4
        float PreviousValue; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_NextSobolFloat params{};
    params.Index = (int32_t)Index;
    params.Dimension = (int32_t)Dimension;
    params.PreviousValue = (float)PreviousValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UImportanceSamplingLibrary::RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.RandomSobolFloat"));
    struct Params_RandomSobolFloat {
        int32_t Index; // 0x0
        int32_t Dimension; // 0x4
        float Seed; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_RandomSobolFloat params{};
    params.Index = (int32_t)Index;
    params.Dimension = (int32_t)Dimension;
    params.Seed = (float)Seed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UImportanceSamplingLibrary::RandomSobolCell3D(int32_t Index, int32_t NumCells, FVector Cell, FVector Seed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.RandomSobolCell3D"));
    struct Params_RandomSobolCell3D {
        int32_t Index; // 0x0
        int32_t NumCells; // 0x4
        FVector Cell; // 0x8
        FVector Seed; // 0x14
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_RandomSobolCell3D params{};
    params.Index = (int32_t)Index;
    params.NumCells = (int32_t)NumCells;
    params.Cell = (FVector)Cell;
    params.Seed = (FVector)Seed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UImportanceSamplingLibrary::NextSobolCell2D(int32_t Index, int32_t NumCells, FVector2D PreviousValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.NextSobolCell2D"));
    struct Params_NextSobolCell2D {
        int32_t Index; // 0x0
        int32_t NumCells; // 0x4
        FVector2D PreviousValue; // 0x8
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_NextSobolCell2D params{};
    params.Index = (int32_t)Index;
    params.NumCells = (int32_t)NumCells;
    params.PreviousValue = (FVector2D)PreviousValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UImportanceSamplingLibrary::RandomSobolCell2D(int32_t Index, int32_t NumCells, FVector2D Cell, FVector2D Seed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.RandomSobolCell2D"));
    struct Params_RandomSobolCell2D {
        int32_t Index; // 0x0
        int32_t NumCells; // 0x4
        FVector2D Cell; // 0x8
        FVector2D Seed; // 0x10
        FVector2D ReturnValue; // 0x18
    }; // Size: 0x20
    Params_RandomSobolCell2D params{};
    params.Index = (int32_t)Index;
    params.NumCells = (int32_t)NumCells;
    params.Cell = (FVector2D)Cell;
    params.Seed = (FVector2D)Seed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UImportanceSamplingLibrary::NextSobolCell3D(int32_t Index, int32_t NumCells, FVector PreviousValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.NextSobolCell3D"));
    struct Params_NextSobolCell3D {
        int32_t Index; // 0x0
        int32_t NumCells; // 0x4
        FVector PreviousValue; // 0x8
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_NextSobolCell3D params{};
    params.Index = (int32_t)Index;
    params.NumCells = (int32_t)NumCells;
    params.PreviousValue = (FVector)PreviousValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FImportanceTexture UImportanceSamplingLibrary::MakeImportanceTexture(UTexture2D* Texture, EImportanceWeight::Type WeightingFunc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.MakeImportanceTexture"));
    struct Params_MakeImportanceTexture {
        UTexture2D* Texture; // 0x0
        EImportanceWeight::Type WeightingFunc; // 0x8
        char pad_9[0x7];
        FImportanceTexture ReturnValue; // 0x10
    }; // Size: 0x60
    Params_MakeImportanceTexture params{};
    params.Texture = (UTexture2D*)Texture;
    params.WeightingFunc = (EImportanceWeight::Type)WeightingFunc;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FImportanceTexture)params.ReturnValue;
}
void UImportanceSamplingLibrary::ImportanceSample(FImportanceTexture& Texture, FVector2D& Rand, int32_t Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.ImportanceSample"));
    struct Params_ImportanceSample {
        FImportanceTexture Texture; // 0x0
        FVector2D Rand; // 0x50
        int32_t Samples; // 0x58
        float Intensity; // 0x5c
        FVector2D SamplePosition; // 0x60
        FLinearColor SampleColor; // 0x68
        float SampleIntensity; // 0x78
        float SampleSize; // 0x7c
    }; // Size: 0x80
    Params_ImportanceSample params{};
    params.Texture = (FImportanceTexture)Texture;
    params.Rand = (FVector2D)Rand;
    params.Samples = (int32_t)Samples;
    params.Intensity = (float)Intensity;
    params.SamplePosition = (FVector2D)SamplePosition;
    params.SampleColor = (FLinearColor)SampleColor;
    params.SampleIntensity = (float)SampleIntensity;
    params.SampleSize = (float)SampleSize;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Texture = params.Texture;
    Rand = params.Rand;
    SampleColor = params.SampleColor;
    SamplePosition = params.SamplePosition;
    SampleIntensity = params.SampleIntensity;
    SampleSize = params.SampleSize;
}
void UImportanceSamplingLibrary::BreakImportanceTexture(FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, EImportanceWeight::Type& WeightingFunc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ImportanceSamplingLibrary.BreakImportanceTexture"));
    struct Params_BreakImportanceTexture {
        FImportanceTexture ImportanceTexture; // 0x0
        UTexture2D* Texture; // 0x50
        EImportanceWeight::Type WeightingFunc; // 0x58
    }; // Size: 0x59
    Params_BreakImportanceTexture params{};
    params.ImportanceTexture = (FImportanceTexture)ImportanceTexture;
    params.Texture = (UTexture2D*)Texture;
    params.WeightingFunc = (EImportanceWeight::Type)WeightingFunc;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WeightingFunc = params.WeightingFunc;
    ImportanceTexture = params.ImportanceTexture;
    Texture = params.Texture;
}

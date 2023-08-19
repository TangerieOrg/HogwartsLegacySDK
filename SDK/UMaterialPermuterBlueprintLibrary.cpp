#include "AActor.hpp"
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
#include "UFunction.hpp"
#include "UMaterialPermuterBlueprintLibrary.hpp"
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::EmptyMaterialSwapParameters(FMaterialSwapParameters& ParameterSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.EmptyMaterialSwapParameters"));
    struct Params_EmptyMaterialSwapParameters {
        FMaterialSwapParameters ParameterSet; // 0x0
        FMaterialSwapParameters ReturnValue; // 0x50
    }; // Size: 0xa0
    Params_EmptyMaterialSwapParameters params{};
    params.ParameterSet = (FMaterialSwapParameters)ParameterSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterSet = params.ParameterSet;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::SetSimpleMaterialSwapParametersScalar(FMaterialSwapParametersSimple& Parameters, FMaterialSwapScalarParameter Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetSimpleMaterialSwapParametersScalar"));
    struct Params_SetSimpleMaterialSwapParametersScalar {
        FMaterialSwapParametersSimple Parameters; // 0x0
        FMaterialSwapScalarParameter Scalar; // 0x30
        char pad_3c[0x4];
        FMaterialSwapParametersSimple ReturnValue; // 0x40
    }; // Size: 0x70
    Params_SetSimpleMaterialSwapParametersScalar params{};
    params.Parameters = (FMaterialSwapParametersSimple)Parameters;
    params.Scalar = (FMaterialSwapScalarParameter)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FString UMaterialPermuterBlueprintLibrary::SimpleMaterialSwapParametersDump(FMaterialSwapParametersSimple ParameterSet, FString Delimiter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SimpleMaterialSwapParametersDump"));
    struct Params_SimpleMaterialSwapParametersDump {
        FMaterialSwapParametersSimple ParameterSet; // 0x0
        FString Delimiter; // 0x30
        FString ReturnValue; // 0x40
    }; // Size: 0x50
    Params_SimpleMaterialSwapParametersDump params{};
    params.ParameterSet = (FMaterialSwapParametersSimple)ParameterSet;
    params.Delimiter = (FString)Delimiter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::MakeMaterialSwapTransformedPairClosestBone(AActor* Actor, FName PositionParameterName, FName VectorParameterName, FVector WorldPosition, FVector WorldVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedPairClosestBone"));
    struct Params_MakeMaterialSwapTransformedPairClosestBone {
        AActor* Actor; // 0x0
        FName PositionParameterName; // 0x8
        FName VectorParameterName; // 0x10
        FVector WorldPosition; // 0x18
        FVector WorldVector; // 0x24
        FMaterialSwapParameters ReturnValue; // 0x30
    }; // Size: 0x80
    Params_MakeMaterialSwapTransformedPairClosestBone params{};
    params.Actor = (AActor*)Actor;
    params.PositionParameterName = (FName)PositionParameterName;
    params.VectorParameterName = (FName)VectorParameterName;
    params.WorldPosition = (FVector)WorldPosition;
    params.WorldVector = (FVector)WorldVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}
UMaterialPermuterBlueprintLibrary* UMaterialPermuterBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary");
    return (UMaterialPermuterBlueprintLibrary*)res;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::MakeSimpleMaterialSwapParametersScalar(FMaterialSwapScalarParameter Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParametersScalar"));
    struct Params_MakeSimpleMaterialSwapParametersScalar {
        FMaterialSwapScalarParameter Scalar; // 0x0
        char pad_c[0x4];
        FMaterialSwapParametersSimple ReturnValue; // 0x10
    }; // Size: 0x40
    Params_MakeSimpleMaterialSwapParametersScalar params{};
    params.Scalar = (FMaterialSwapScalarParameter)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
void UMaterialPermuterBlueprintLibrary::SimpleMaterialSwapParametersIsEmpty(FMaterialSwapParametersSimple& ParameterSet, bool& bIsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SimpleMaterialSwapParametersIsEmpty"));
    struct Params_SimpleMaterialSwapParametersIsEmpty {
        FMaterialSwapParametersSimple ParameterSet; // 0x0
        bool bIsEmpty; // 0x30
    }; // Size: 0x31
    Params_SimpleMaterialSwapParametersIsEmpty params{};
    params.ParameterSet = (FMaterialSwapParametersSimple)ParameterSet;
    params.bIsEmpty = (bool)bIsEmpty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterSet = params.ParameterSet;
    bIsEmpty = params.bIsEmpty;
}
void UMaterialPermuterBlueprintLibrary::MaterialSwapParametersIsEmpty(FMaterialSwapParameters& ParameterSet, bool& bIsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MaterialSwapParametersIsEmpty"));
    struct Params_MaterialSwapParametersIsEmpty {
        FMaterialSwapParameters ParameterSet; // 0x0
        bool bIsEmpty; // 0x50
    }; // Size: 0x51
    Params_MaterialSwapParametersIsEmpty params{};
    params.ParameterSet = (FMaterialSwapParameters)ParameterSet;
    params.bIsEmpty = (bool)bIsEmpty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterSet = params.ParameterSet;
    bIsEmpty = params.bIsEmpty;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::SetMaterialSwapParametersTexture(FMaterialSwapParameters& Parameters, FMaterialSwapTextureParameter Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersTexture"));
    struct Params_SetMaterialSwapParametersTexture {
        FMaterialSwapParameters Parameters; // 0x0
        FMaterialSwapTextureParameter Texture; // 0x50
        FMaterialSwapParameters ReturnValue; // 0x60
    }; // Size: 0xb0
    Params_SetMaterialSwapParametersTexture params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.Texture = (FMaterialSwapTextureParameter)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::SetSimpleMaterialSwapParametersVector(FMaterialSwapParametersSimple& Parameters, FMaterialSwapVectorParameter Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetSimpleMaterialSwapParametersVector"));
    struct Params_SetSimpleMaterialSwapParametersVector {
        FMaterialSwapParametersSimple Parameters; // 0x0
        FMaterialSwapVectorParameter Vector; // 0x30
        FMaterialSwapParametersSimple ReturnValue; // 0x48
    }; // Size: 0x78
    Params_SetSimpleMaterialSwapParametersVector params{};
    params.Parameters = (FMaterialSwapParametersSimple)Parameters;
    params.Vector = (FMaterialSwapVectorParameter)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::SimpleCombineMaterialSwapParameters(FMaterialSwapParametersSimple A, FMaterialSwapParametersSimple B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SimpleCombineMaterialSwapParameters"));
    struct Params_SimpleCombineMaterialSwapParameters {
        FMaterialSwapParametersSimple A; // 0x0
        FMaterialSwapParametersSimple B; // 0x30
        FMaterialSwapParametersSimple ReturnValue; // 0x60
    }; // Size: 0x90
    Params_SimpleCombineMaterialSwapParameters params{};
    params.A = (FMaterialSwapParametersSimple)A;
    params.B = (FMaterialSwapParametersSimple)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::SetSimpleMaterialSwapParametersTexture(FMaterialSwapParametersSimple& Parameters, FMaterialSwapTextureParameter Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetSimpleMaterialSwapParametersTexture"));
    struct Params_SetSimpleMaterialSwapParametersTexture {
        FMaterialSwapParametersSimple Parameters; // 0x0
        FMaterialSwapTextureParameter Texture; // 0x30
        FMaterialSwapParametersSimple ReturnValue; // 0x40
    }; // Size: 0x70
    Params_SetSimpleMaterialSwapParametersTexture params{};
    params.Parameters = (FMaterialSwapParametersSimple)Parameters;
    params.Texture = (FMaterialSwapTextureParameter)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::MakeMaterialSwapParametersFromNotSimple(FMaterialSwapParameters Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersFromNotSimple"));
    struct Params_MakeMaterialSwapParametersFromNotSimple {
        FMaterialSwapParameters Parameters; // 0x0
        FMaterialSwapParametersSimple ReturnValue; // 0x50
    }; // Size: 0x80
    Params_MakeMaterialSwapParametersFromNotSimple params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::MakeSimpleMaterialSwapParametersTexture(FMaterialSwapTextureParameter Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParametersTexture"));
    struct Params_MakeSimpleMaterialSwapParametersTexture {
        FMaterialSwapTextureParameter Texture; // 0x0
        FMaterialSwapParametersSimple ReturnValue; // 0x10
    }; // Size: 0x40
    Params_MakeSimpleMaterialSwapParametersTexture params{};
    params.Texture = (FMaterialSwapTextureParameter)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
void UMaterialPermuterBlueprintLibrary::SetMaterialSwapTransformedPairClosestBone(FMaterialSwapParameters& Parameters, AActor* Actor, FName PositionParameterName, FName VectorParameterName, FVector WorldPosition, FVector WorldVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapTransformedPairClosestBone"));
    struct Params_SetMaterialSwapTransformedPairClosestBone {
        FMaterialSwapParameters Parameters; // 0x0
        AActor* Actor; // 0x50
        FName PositionParameterName; // 0x58
        FName VectorParameterName; // 0x60
        FVector WorldPosition; // 0x68
        FVector WorldVector; // 0x74
    }; // Size: 0x80
    Params_SetMaterialSwapTransformedPairClosestBone params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.Actor = (AActor*)Actor;
    params.PositionParameterName = (FName)PositionParameterName;
    params.VectorParameterName = (FName)VectorParameterName;
    params.WorldPosition = (FVector)WorldPosition;
    params.WorldVector = (FVector)WorldVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::SetMaterialSwapParametersVector(FMaterialSwapParameters& Parameters, FMaterialSwapVectorParameter Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersVector"));
    struct Params_SetMaterialSwapParametersVector {
        FMaterialSwapParameters Parameters; // 0x0
        FMaterialSwapVectorParameter Vector; // 0x50
        FMaterialSwapParameters ReturnValue; // 0x68
    }; // Size: 0xb8
    Params_SetMaterialSwapParametersVector params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.Vector = (FMaterialSwapVectorParameter)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::SetMaterialSwapParametersTransformedVector(FMaterialSwapParameters& Parameters, FMaterialSwapTransformedVector TransformedVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersTransformedVector"));
    struct Params_SetMaterialSwapParametersTransformedVector {
        FMaterialSwapParameters Parameters; // 0x0
        FMaterialSwapTransformedVector TransformedVector; // 0x50
        char pad_84[0x4];
        FMaterialSwapParameters ReturnValue; // 0x88
    }; // Size: 0xd8
    Params_SetMaterialSwapParametersTransformedVector params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.TransformedVector = (FMaterialSwapTransformedVector)TransformedVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::SetMaterialSwapParametersTransformedPosition(FMaterialSwapParameters& Parameters, FMaterialSwapTransformedPosition TransformedPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersTransformedPosition"));
    struct Params_SetMaterialSwapParametersTransformedPosition {
        FMaterialSwapParameters Parameters; // 0x0
        FMaterialSwapTransformedPosition TransformedPosition; // 0x50
        char pad_84[0x4];
        FMaterialSwapParameters ReturnValue; // 0x88
    }; // Size: 0xd8
    Params_SetMaterialSwapParametersTransformedPosition params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.TransformedPosition = (FMaterialSwapTransformedPosition)TransformedPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::SetMaterialSwapParametersScalar(FMaterialSwapParameters& Parameters, FMaterialSwapScalarParameter Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersScalar"));
    struct Params_SetMaterialSwapParametersScalar {
        FMaterialSwapParameters Parameters; // 0x0
        FMaterialSwapScalarParameter Scalar; // 0x50
        char pad_5c[0x4];
        FMaterialSwapParameters ReturnValue; // 0x60
    }; // Size: 0xb0
    Params_SetMaterialSwapParametersScalar params{};
    params.Parameters = (FMaterialSwapParameters)Parameters;
    params.Scalar = (FMaterialSwapScalarParameter)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FString UMaterialPermuterBlueprintLibrary::MaterialSwapParametersDump(FMaterialSwapParameters ParameterSet, FString Delimiter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MaterialSwapParametersDump"));
    struct Params_MaterialSwapParametersDump {
        FMaterialSwapParameters ParameterSet; // 0x0
        FString Delimiter; // 0x50
        FString ReturnValue; // 0x60
    }; // Size: 0x70
    Params_MaterialSwapParametersDump params{};
    params.ParameterSet = (FMaterialSwapParameters)ParameterSet;
    params.Delimiter = (FString)Delimiter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::MakeSimpleMaterialSwapParametersVector(FMaterialSwapVectorParameter Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParametersVector"));
    struct Params_MakeSimpleMaterialSwapParametersVector {
        FMaterialSwapVectorParameter Vector; // 0x0
        FMaterialSwapParametersSimple ReturnValue; // 0x18
    }; // Size: 0x48
    Params_MakeSimpleMaterialSwapParametersVector params{};
    params.Vector = (FMaterialSwapVectorParameter)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::MakeSimpleMaterialSwapParameters(TArray<FMaterialSwapScalarParameter> Scalars, TArray<FMaterialSwapVectorParameter> Vectors, TArray<FMaterialSwapTextureParameter> Textures) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParameters"));
    struct Params_MakeSimpleMaterialSwapParameters {
        TArray<FMaterialSwapScalarParameter> Scalars; // 0x0
        TArray<FMaterialSwapVectorParameter> Vectors; // 0x10
        TArray<FMaterialSwapTextureParameter> Textures; // 0x20
        FMaterialSwapParametersSimple ReturnValue; // 0x30
    }; // Size: 0x60
    Params_MakeSimpleMaterialSwapParameters params{};
    params.Scalars = (TArray<FMaterialSwapScalarParameter>)Scalars;
    params.Vectors = (TArray<FMaterialSwapVectorParameter>)Vectors;
    params.Textures = (TArray<FMaterialSwapTextureParameter>)Textures;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapTransformedVector UMaterialPermuterBlueprintLibrary::MakeMaterialSwapTransformedVectorClosestBone(AActor* Actor, FName ParameterName, FVector WorldPosition, FVector WorldVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedVectorClosestBone"));
    struct Params_MakeMaterialSwapTransformedVectorClosestBone {
        AActor* Actor; // 0x0
        FName ParameterName; // 0x8
        FVector WorldPosition; // 0x10
        FVector WorldVector; // 0x1c
        FMaterialSwapTransformedVector ReturnValue; // 0x28
    }; // Size: 0x5c
    Params_MakeMaterialSwapTransformedVectorClosestBone params{};
    params.Actor = (AActor*)Actor;
    params.ParameterName = (FName)ParameterName;
    params.WorldPosition = (FVector)WorldPosition;
    params.WorldVector = (FVector)WorldVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapTransformedVector)params.ReturnValue;
}
FMaterialSwapTransformedVector UMaterialPermuterBlueprintLibrary::MakeMaterialSwapTransformedVector(AActor* Actor, FName ParameterName, FVector Vector, ETransformedParameterSpace Space, FName TransformSource, ETransformedParameterSource TransformType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedVector"));
    struct Params_MakeMaterialSwapTransformedVector {
        AActor* Actor; // 0x0
        FName ParameterName; // 0x8
        FVector Vector; // 0x10
        ETransformedParameterSpace Space; // 0x1c
        char pad_1d[0x3];
        FName TransformSource; // 0x20
        ETransformedParameterSource TransformType; // 0x28
        char pad_29[0x3];
        FMaterialSwapTransformedVector ReturnValue; // 0x2c
    }; // Size: 0x60
    Params_MakeMaterialSwapTransformedVector params{};
    params.Actor = (AActor*)Actor;
    params.ParameterName = (FName)ParameterName;
    params.Vector = (FVector)Vector;
    params.Space = (ETransformedParameterSpace)Space;
    params.TransformSource = (FName)TransformSource;
    params.TransformType = (ETransformedParameterSource)TransformType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapTransformedVector)params.ReturnValue;
}
FMaterialSwapTransformedPosition UMaterialPermuterBlueprintLibrary::MakeMaterialSwapTransformedPositionClosestBone(AActor* Actor, FName ParameterName, FVector WorldPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedPositionClosestBone"));
    struct Params_MakeMaterialSwapTransformedPositionClosestBone {
        AActor* Actor; // 0x0
        FName ParameterName; // 0x8
        FVector WorldPosition; // 0x10
        FMaterialSwapTransformedPosition ReturnValue; // 0x1c
    }; // Size: 0x50
    Params_MakeMaterialSwapTransformedPositionClosestBone params{};
    params.Actor = (AActor*)Actor;
    params.ParameterName = (FName)ParameterName;
    params.WorldPosition = (FVector)WorldPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapTransformedPosition)params.ReturnValue;
}
FMaterialSwapTransformedPosition UMaterialPermuterBlueprintLibrary::MakeMaterialSwapTransformedPosition(AActor* Actor, FName ParameterName, FVector Position, ETransformedParameterSpace Space, FName TransformSource, ETransformedParameterSource TransformType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedPosition"));
    struct Params_MakeMaterialSwapTransformedPosition {
        AActor* Actor; // 0x0
        FName ParameterName; // 0x8
        FVector Position; // 0x10
        ETransformedParameterSpace Space; // 0x1c
        char pad_1d[0x3];
        FName TransformSource; // 0x20
        ETransformedParameterSource TransformType; // 0x28
        char pad_29[0x3];
        FMaterialSwapTransformedPosition ReturnValue; // 0x2c
    }; // Size: 0x60
    Params_MakeMaterialSwapTransformedPosition params{};
    params.Actor = (AActor*)Actor;
    params.ParameterName = (FName)ParameterName;
    params.Position = (FVector)Position;
    params.Space = (ETransformedParameterSpace)Space;
    params.TransformSource = (FName)TransformSource;
    params.TransformType = (ETransformedParameterSource)TransformType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapTransformedPosition)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::MakeMaterialSwapParametersVector(FMaterialSwapVectorParameter Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersVector"));
    struct Params_MakeMaterialSwapParametersVector {
        FMaterialSwapVectorParameter Vector; // 0x0
        FMaterialSwapParameters ReturnValue; // 0x18
    }; // Size: 0x68
    Params_MakeMaterialSwapParametersVector params{};
    params.Vector = (FMaterialSwapVectorParameter)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::MakeMaterialSwapParametersTexture(FMaterialSwapTextureParameter Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersTexture"));
    struct Params_MakeMaterialSwapParametersTexture {
        FMaterialSwapTextureParameter Texture; // 0x0
        FMaterialSwapParameters ReturnValue; // 0x10
    }; // Size: 0x60
    Params_MakeMaterialSwapParametersTexture params{};
    params.Texture = (FMaterialSwapTextureParameter)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::MakeMaterialSwapParametersScalar(FMaterialSwapScalarParameter Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersScalar"));
    struct Params_MakeMaterialSwapParametersScalar {
        FMaterialSwapScalarParameter Scalar; // 0x0
        char pad_c[0x4];
        FMaterialSwapParameters ReturnValue; // 0x10
    }; // Size: 0x60
    Params_MakeMaterialSwapParametersScalar params{};
    params.Scalar = (FMaterialSwapScalarParameter)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::MakeMaterialSwapParametersFromSimple(FMaterialSwapParametersSimple Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersFromSimple"));
    struct Params_MakeMaterialSwapParametersFromSimple {
        FMaterialSwapParametersSimple Parameters; // 0x0
        FMaterialSwapParameters ReturnValue; // 0x30
    }; // Size: 0x80
    Params_MakeMaterialSwapParametersFromSimple params{};
    params.Parameters = (FMaterialSwapParametersSimple)Parameters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::MakeMaterialSwapParameters(TArray<FMaterialSwapScalarParameter>& Scalars, TArray<FMaterialSwapVectorParameter>& Vectors, TArray<FMaterialSwapTextureParameter>& Textures, TArray<FMaterialSwapTransformedPosition>& TransformedPositions, TArray<FMaterialSwapTransformedVector>& TransformedVectors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParameters"));
    struct Params_MakeMaterialSwapParameters {
        TArray<FMaterialSwapScalarParameter> Scalars; // 0x0
        TArray<FMaterialSwapVectorParameter> Vectors; // 0x10
        TArray<FMaterialSwapTextureParameter> Textures; // 0x20
        TArray<FMaterialSwapTransformedPosition> TransformedPositions; // 0x30
        TArray<FMaterialSwapTransformedVector> TransformedVectors; // 0x40
        FMaterialSwapParameters ReturnValue; // 0x50
    }; // Size: 0xa0
    Params_MakeMaterialSwapParameters params{};
    params.Scalars = (TArray<FMaterialSwapScalarParameter>)Scalars;
    params.Vectors = (TArray<FMaterialSwapVectorParameter>)Vectors;
    params.Textures = (TArray<FMaterialSwapTextureParameter>)Textures;
    params.TransformedPositions = (TArray<FMaterialSwapTransformedPosition>)TransformedPositions;
    params.TransformedVectors = (TArray<FMaterialSwapTransformedVector>)TransformedVectors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Scalars = params.Scalars;
    Vectors = params.Vectors;
    TransformedPositions = params.TransformedPositions;
    Textures = params.Textures;
    TransformedVectors = params.TransformedVectors;
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParametersSimple UMaterialPermuterBlueprintLibrary::EmptySimpleMaterialSwapParameters(FMaterialSwapParametersSimple& ParameterSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.EmptySimpleMaterialSwapParameters"));
    struct Params_EmptySimpleMaterialSwapParameters {
        FMaterialSwapParametersSimple ParameterSet; // 0x0
        FMaterialSwapParametersSimple ReturnValue; // 0x30
    }; // Size: 0x60
    Params_EmptySimpleMaterialSwapParameters params{};
    params.ParameterSet = (FMaterialSwapParametersSimple)ParameterSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterSet = params.ParameterSet;
    return (FMaterialSwapParametersSimple)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::CombineSimpleMaterialSwapParameters(FMaterialSwapParameters A, FMaterialSwapParametersSimple B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.CombineSimpleMaterialSwapParameters"));
    struct Params_CombineSimpleMaterialSwapParameters {
        FMaterialSwapParameters A; // 0x0
        FMaterialSwapParametersSimple B; // 0x50
        FMaterialSwapParameters ReturnValue; // 0x80
    }; // Size: 0xd0
    Params_CombineSimpleMaterialSwapParameters params{};
    params.A = (FMaterialSwapParameters)A;
    params.B = (FMaterialSwapParametersSimple)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}
FMaterialSwapParameters UMaterialPermuterBlueprintLibrary::CombineMaterialSwapParameters(FMaterialSwapParameters A, FMaterialSwapParameters B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterBlueprintLibrary.CombineMaterialSwapParameters"));
    struct Params_CombineMaterialSwapParameters {
        FMaterialSwapParameters A; // 0x0
        FMaterialSwapParameters B; // 0x50
        FMaterialSwapParameters ReturnValue; // 0xa0
    }; // Size: 0xf0
    Params_CombineMaterialSwapParameters params{};
    params.A = (FMaterialSwapParameters)A;
    params.B = (FMaterialSwapParameters)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialSwapParameters)params.ReturnValue;
}

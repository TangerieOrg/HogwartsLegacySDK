#include "AActor.hpp"
#include "FLinearColor.hpp"
#include "FMIDParameters.hpp"
#include "FMIDScalarParameter.hpp"
#include "FMIDTextureParameter.hpp"
#include "FMIDVectorParameter.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMIDBlueprintLibrary.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTexture.hpp"
FMIDTextureParameter UMIDBlueprintLibrary::MakeMIDTextureParameter(FName Name, UTexture* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDTextureParameter"));
    struct Params_MakeMIDTextureParameter {
        FName Name; // 0x0
        UTexture* Texture; // 0x8
        FMIDTextureParameter ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeMIDTextureParameter params{};
    params.Name = (FName)Name;
    params.Texture = (UTexture*)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDTextureParameter)params.ReturnValue;
}
void UMIDBlueprintLibrary::MIDParametersIsEmpty(FMIDParameters& ParameterSet, bool& bIsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MIDParametersIsEmpty"));
    struct Params_MIDParametersIsEmpty {
        FMIDParameters ParameterSet; // 0x0
        bool bIsEmpty; // 0x30
    }; // Size: 0x31
    Params_MIDParametersIsEmpty params{};
    params.ParameterSet = (FMIDParameters)ParameterSet;
    params.bIsEmpty = (bool)bIsEmpty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterSet = params.ParameterSet;
    bIsEmpty = params.bIsEmpty;
}
UMIDBlueprintLibrary* UMIDBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MIDBlueprintLibrary");
    return (UMIDBlueprintLibrary*)res;
}
void UMIDBlueprintLibrary::SetMIDParametersVector(FMIDParameters& Parameters, FMIDVectorParameter Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.SetMIDParametersVector"));
    struct Params_SetMIDParametersVector {
        FMIDParameters Parameters; // 0x0
        FMIDVectorParameter Vector; // 0x30
    }; // Size: 0x48
    Params_SetMIDParametersVector params{};
    params.Parameters = (FMIDParameters)Parameters;
    params.Vector = (FMIDVectorParameter)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
void UMIDBlueprintLibrary::PrimitiveApplyMIDParameters(UPrimitiveComponent* Component, FMIDParameters& Parameters, bool bAutoCreateMIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.PrimitiveApplyMIDParameters"));
    struct Params_PrimitiveApplyMIDParameters {
        UPrimitiveComponent* Component; // 0x0
        FMIDParameters Parameters; // 0x8
        bool bAutoCreateMIDs; // 0x38
    }; // Size: 0x39
    Params_PrimitiveApplyMIDParameters params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.Parameters = (FMIDParameters)Parameters;
    params.bAutoCreateMIDs = (bool)bAutoCreateMIDs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
FMIDParameters UMIDBlueprintLibrary::MakeMIDParameters(TArray<FMIDScalarParameter>& Scalars, TArray<FMIDVectorParameter>& Vectors, TArray<FMIDTextureParameter>& Textures) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDParameters"));
    struct Params_MakeMIDParameters {
        TArray<FMIDScalarParameter> Scalars; // 0x0
        TArray<FMIDVectorParameter> Vectors; // 0x10
        TArray<FMIDTextureParameter> Textures; // 0x20
        FMIDParameters ReturnValue; // 0x30
    }; // Size: 0x60
    Params_MakeMIDParameters params{};
    params.Scalars = (TArray<FMIDScalarParameter>)Scalars;
    params.Vectors = (TArray<FMIDVectorParameter>)Vectors;
    params.Textures = (TArray<FMIDTextureParameter>)Textures;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Scalars = params.Scalars;
    Vectors = params.Vectors;
    Textures = params.Textures;
    return (FMIDParameters)params.ReturnValue;
}
void UMIDBlueprintLibrary::SetMIDParametersTexture(FMIDParameters& Parameters, FMIDTextureParameter Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.SetMIDParametersTexture"));
    struct Params_SetMIDParametersTexture {
        FMIDParameters Parameters; // 0x0
        FMIDTextureParameter Texture; // 0x30
    }; // Size: 0x40
    Params_SetMIDParametersTexture params{};
    params.Parameters = (FMIDParameters)Parameters;
    params.Texture = (FMIDTextureParameter)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
FMIDVectorParameter UMIDBlueprintLibrary::MakeMIDVectorParameter(FName Name, FLinearColor Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDVectorParameter"));
    struct Params_MakeMIDVectorParameter {
        FName Name; // 0x0
        FLinearColor Vector; // 0x8
        FMIDVectorParameter ReturnValue; // 0x18
    }; // Size: 0x30
    Params_MakeMIDVectorParameter params{};
    params.Name = (FName)Name;
    params.Vector = (FLinearColor)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDVectorParameter)params.ReturnValue;
}
void UMIDBlueprintLibrary::ActorApplyMIDParameters(AActor* Actor, FMIDParameters& Parameters, bool bIncludeChildActors, bool bAutoCreateMIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.ActorApplyMIDParameters"));
    struct Params_ActorApplyMIDParameters {
        AActor* Actor; // 0x0
        FMIDParameters Parameters; // 0x8
        bool bIncludeChildActors; // 0x38
        bool bAutoCreateMIDs; // 0x39
    }; // Size: 0x3a
    Params_ActorApplyMIDParameters params{};
    params.Actor = (AActor*)Actor;
    params.Parameters = (FMIDParameters)Parameters;
    params.bIncludeChildActors = (bool)bIncludeChildActors;
    params.bAutoCreateMIDs = (bool)bAutoCreateMIDs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
void UMIDBlueprintLibrary::SetMIDParametersScalar(FMIDParameters& Parameters, FMIDScalarParameter Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.SetMIDParametersScalar"));
    struct Params_SetMIDParametersScalar {
        FMIDParameters Parameters; // 0x0
        FMIDScalarParameter Scalar; // 0x30
    }; // Size: 0x3c
    Params_SetMIDParametersScalar params{};
    params.Parameters = (FMIDParameters)Parameters;
    params.Scalar = (FMIDScalarParameter)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
FMIDParameters UMIDBlueprintLibrary::MakeMIDParametersVector(FMIDVectorParameter Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDParametersVector"));
    struct Params_MakeMIDParametersVector {
        FMIDVectorParameter Vector; // 0x0
        FMIDParameters ReturnValue; // 0x18
    }; // Size: 0x48
    Params_MakeMIDParametersVector params{};
    params.Vector = (FMIDVectorParameter)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDParameters)params.ReturnValue;
}
void UMIDBlueprintLibrary::PrimitiveCreateMIDs(UPrimitiveComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.PrimitiveCreateMIDs"));
    struct Params_PrimitiveCreateMIDs {
        UPrimitiveComponent* Component; // 0x0
    }; // Size: 0x8
    Params_PrimitiveCreateMIDs params{};
    params.Component = (UPrimitiveComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FMIDScalarParameter UMIDBlueprintLibrary::MakeMIDScalarParameter(FName Name, float Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDScalarParameter"));
    struct Params_MakeMIDScalarParameter {
        FName Name; // 0x0
        float Scalar; // 0x8
        FMIDScalarParameter ReturnValue; // 0xc
    }; // Size: 0x18
    Params_MakeMIDScalarParameter params{};
    params.Name = (FName)Name;
    params.Scalar = (float)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDScalarParameter)params.ReturnValue;
}
void UMIDBlueprintLibrary::ActorCreateMIDs(AActor* Actor, bool bIncludeChildActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.ActorCreateMIDs"));
    struct Params_ActorCreateMIDs {
        AActor* Actor; // 0x0
        bool bIncludeChildActors; // 0x8
    }; // Size: 0x9
    Params_ActorCreateMIDs params{};
    params.Actor = (AActor*)Actor;
    params.bIncludeChildActors = (bool)bIncludeChildActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FMIDParameters UMIDBlueprintLibrary::MakeMIDParametersTexture(FMIDTextureParameter Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDParametersTexture"));
    struct Params_MakeMIDParametersTexture {
        FMIDTextureParameter Texture; // 0x0
        FMIDParameters ReturnValue; // 0x10
    }; // Size: 0x40
    Params_MakeMIDParametersTexture params{};
    params.Texture = (FMIDTextureParameter)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDParameters)params.ReturnValue;
}
FMIDParameters UMIDBlueprintLibrary::MakeMIDParametersScalar(FMIDScalarParameter Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.MakeMIDParametersScalar"));
    struct Params_MakeMIDParametersScalar {
        FMIDScalarParameter Scalar; // 0x0
        char pad_c[0x4];
        FMIDParameters ReturnValue; // 0x10
    }; // Size: 0x40
    Params_MakeMIDParametersScalar params{};
    params.Scalar = (FMIDScalarParameter)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDParameters)params.ReturnValue;
}
void UMIDBlueprintLibrary::ApplyMIDParameters(UMaterialInstanceDynamic* Mid, FMIDParameters& Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.ApplyMIDParameters"));
    struct Params_ApplyMIDParameters {
        UMaterialInstanceDynamic* Mid; // 0x0
        FMIDParameters Parameters; // 0x8
    }; // Size: 0x38
    Params_ApplyMIDParameters params{};
    params.Mid = (UMaterialInstanceDynamic*)Mid;
    params.Parameters = (FMIDParameters)Parameters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
FMIDParameters UMIDBlueprintLibrary::EmptyMIDParameters(FMIDParameters& ParameterSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.EmptyMIDParameters"));
    struct Params_EmptyMIDParameters {
        FMIDParameters ParameterSet; // 0x0
        FMIDParameters ReturnValue; // 0x30
    }; // Size: 0x60
    Params_EmptyMIDParameters params{};
    params.ParameterSet = (FMIDParameters)ParameterSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterSet = params.ParameterSet;
    return (FMIDParameters)params.ReturnValue;
}
FMIDParameters UMIDBlueprintLibrary::CombineMIDParameters(FMIDParameters A, FMIDParameters B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MIDBlueprintLibrary.CombineMIDParameters"));
    struct Params_CombineMIDParameters {
        FMIDParameters A; // 0x0
        FMIDParameters B; // 0x30
        FMIDParameters ReturnValue; // 0x60
    }; // Size: 0x90
    Params_CombineMIDParameters params{};
    params.A = (FMIDParameters)A;
    params.B = (FMIDParameters)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMIDParameters)params.ReturnValue;
}

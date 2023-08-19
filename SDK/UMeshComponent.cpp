#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMeshComponent.hpp"
#include "UPrimitiveComponent.hpp"
UMeshComponent* UMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MeshComponent");
    return (UMeshComponent*)res;
}
void UMeshComponent::SetVectorParameterValueOnMaterials(FName ParameterName, FVector ParameterValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.SetVectorParameterValueOnMaterials"));
    struct Params_SetVectorParameterValueOnMaterials {
        FName ParameterName; // 0x0
        FVector ParameterValue; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameterValueOnMaterials params{};
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (FVector)ParameterValue;
    ProcessEvent(func, &params);
}
void UMeshComponent::SetScalarParameterValueOnMaterials(FName ParameterName, float ParameterValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.SetScalarParameterValueOnMaterials"));
    struct Params_SetScalarParameterValueOnMaterials {
        FName ParameterName; // 0x0
        float ParameterValue; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameterValueOnMaterials params{};
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (float)ParameterValue;
    ProcessEvent(func, &params);
}
void UMeshComponent::PrestreamMesh(float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.PrestreamMesh"));
    struct Params_PrestreamMesh {
        float Seconds; // 0x0
    }; // Size: 0x4
    Params_PrestreamMesh params{};
    params.Seconds = (float)Seconds;
    ProcessEvent(func, &params);
}
TArray<FName> UMeshComponent::GetMaterialSlotNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.GetMaterialSlotNames"));
    struct Params_GetMaterialSlotNames {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMaterialSlotNames params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UMeshComponent::SetDitheredAlpha(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.SetDitheredAlpha"));
    struct Params_SetDitheredAlpha {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetDitheredAlpha params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UMeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.PrestreamTextures"));
    struct Params_PrestreamTextures {
        float Seconds; // 0x0
        bool bPrioritizeCharacterTextures; // 0x4
        char pad_5[0x3];
        int32_t CinematicTextureGroups; // 0x8
    }; // Size: 0xc
    Params_PrestreamTextures params{};
    params.Seconds = (float)Seconds;
    params.bPrioritizeCharacterTextures = (bool)bPrioritizeCharacterTextures;
    params.CinematicTextureGroups = (int32_t)CinematicTextureGroups;
    ProcessEvent(func, &params);
}
bool UMeshComponent::IsMaterialSlotNameValid(FName MaterialSlotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.IsMaterialSlotNameValid"));
    struct Params_IsMaterialSlotNameValid {
        FName MaterialSlotName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsMaterialSlotNameValid params{};
    params.MaterialSlotName = (FName)MaterialSlotName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<UMaterialInterface*> UMeshComponent::GetMaterials() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.GetMaterials"));
    struct Params_GetMaterials {
        TArray<UMaterialInterface*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMaterials params{};
    ProcessEvent(func, &params);
    return (TArray<UMaterialInterface*>)params.ReturnValue;
}
int32_t UMeshComponent::GetMaterialIndex(FName MaterialSlotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.GetMaterialIndex"));
    struct Params_GetMaterialIndex {
        FName MaterialSlotName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaterialIndex params{};
    params.MaterialSlotName = (FName)MaterialSlotName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UMeshComponent::GetDitheredAlpha() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshComponent.GetDitheredAlpha"));
    struct Params_GetDitheredAlpha {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDitheredAlpha params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

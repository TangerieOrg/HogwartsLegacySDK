#include "AActor.hpp"
#include "EGenderEnum.hpp"
#include "EPhysicalSurface.hpp"
#include "FColor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FLinearColor.hpp"
#include "FOutfit.hpp"
#include "FOutfitType.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "UActorComponent.hpp"
#include "UAddOnMesh.hpp"
#include "UAddOnMeshProperties.hpp"
#include "UClass.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UCustomizableCharacterDefinition.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPoseAsset.hpp"
#include "UTexture.hpp"
#include "UTexture2D.hpp"
#include "UTextureRenderTarget2D.hpp"
void UCustomizableCharacterComponent::SetScale(float NewScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetScale"));
    struct Params_SetScale {
        float NewScale; // 0x0
    }; // Size: 0x4
    Params_SetScale params{};
    params.NewScale = (float)NewScale;
    ProcessEvent(func, &params);
}
UCustomizableCharacterComponent* UCustomizableCharacterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.CustomizableCharacterComponent");
    return (UCustomizableCharacterComponent*)res;
}
void UCustomizableCharacterComponent::SpawnEditorCharacter(UObject* InWorldContextObject, FTransform& InTransform, FName InCharacterID, UClass* CharacterClass) {}
FName UCustomizableCharacterComponent::GetSurfaceNameBelowActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceNameBelowActor"));
    struct Params_GetSurfaceNameBelowActor {
        AActor* Actor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSurfaceNameBelowActor params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetVectorParameter(FName MeshName, FName ParameterName, FLinearColor Value, bool bResetMaterialParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        FLinearColor Value; // 0x10
        bool bResetMaterialParameters; // 0x20
    }; // Size: 0x21
    Params_SetVectorParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    params.Value = (FLinearColor)Value;
    params.bResetMaterialParameters = (bool)bResetMaterialParameters;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::GetTextureParameters(FName MeshName) {}
bool UCustomizableCharacterComponent::IsAsyncLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.IsAsyncLoad"));
    struct Params_IsAsyncLoad {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAsyncLoad params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::SortNames(TArray<FName> Names) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SortNames"));
    struct Params_SortNames {
        TArray<FName> Names; // 0x0
        TArray<FName> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortNames params{};
    params.Names = (TArray<FName>)Names;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
EPhysicalSurface UCustomizableCharacterComponent::GetSurfaceTypeByName(FName SurfaceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceTypeByName"));
    struct Params_GetSurfaceTypeByName {
        FName SurfaceName; // 0x0
        EPhysicalSurface ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSurfaceTypeByName params{};
    params.SurfaceName = (FName)SurfaceName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EPhysicalSurface)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetTextureParameter(FName MeshName, FName ParameterName, UTexture* Texture, bool bResetMaterialParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        UTexture* Texture; // 0x10
        bool bResetMaterialParameters; // 0x18
    }; // Size: 0x19
    Params_SetTextureParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    params.Texture = (UTexture*)Texture;
    params.bResetMaterialParameters = (bool)bResetMaterialParameters;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::SetScalarParameter(FName MeshName, FName ParameterName, float Value, bool bResetMaterialParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        float Value; // 0x10
        bool bResetMaterialParameters; // 0x14
    }; // Size: 0x15
    Params_SetScalarParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    params.Value = (float)Value;
    params.bResetMaterialParameters = (bool)bResetMaterialParameters;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::SetCurrentOutfit(FName OutfitName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetCurrentOutfit"));
    struct Params_SetCurrentOutfit {
        FName OutfitName; // 0x0
    }; // Size: 0x8
    Params_SetCurrentOutfit params{};
    params.OutfitName = (FName)OutfitName;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::SetScaleRootMotion(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetScaleRootMotion"));
    struct Params_SetScaleRootMotion {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetScaleRootMotion params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
float UCustomizableCharacterComponent::GetRandomFloat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetRandomFloat"));
    struct Params_GetRandomFloat {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRandomFloat params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetForcedLOD(int32_t LOD, bool bInFOV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetForcedLOD"));
    struct Params_SetForcedLOD {
        int32_t LOD; // 0x0
        bool bInFOV; // 0x4
    }; // Size: 0x5
    Params_SetForcedLOD params{};
    params.LOD = (int32_t)LOD;
    params.bInFOV = (bool)bInFOV;
    ProcessEvent(func, &params);
}
bool UCustomizableCharacterComponent::IsVectorParameterOverriden(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.IsVectorParameterOverriden"));
    struct Params_IsVectorParameterOverriden {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsVectorParameterOverriden params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetFlipped(FName CharacterPieceType, bool bFlip) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetFlipped"));
    struct Params_SetFlipped {
        FName CharacterPieceType; // 0x0
        bool bFlip; // 0x8
    }; // Size: 0x9
    Params_SetFlipped params{};
    params.CharacterPieceType = (FName)CharacterPieceType;
    params.bFlip = (bool)bFlip;
    ProcessEvent(func, &params);
}
FName UCustomizableCharacterComponent::GetTypeClassication() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetTypeClassication"));
    struct Params_GetTypeClassication {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTypeClassication params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetCharacterID(FName InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetCharacterID"));
    struct Params_SetCharacterID {
        FName InRegistryID; // 0x0
    }; // Size: 0x8
    Params_SetCharacterID params{};
    params.InRegistryID = (FName)InRegistryID;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::GetOutfits() {}
void UCustomizableCharacterComponent::SetBoneSliderScale(FName BoneName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetBoneSliderScale"));
    struct Params_SetBoneSliderScale {
        FName BoneName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetBoneSliderScale params{};
    params.BoneName = (FName)BoneName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
bool UCustomizableCharacterComponent::SetAsyncLoad(bool bInAsyncLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetAsyncLoad"));
    struct Params_SetAsyncLoad {
        bool bInAsyncLoad; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetAsyncLoad params{};
    params.bInAsyncLoad = (bool)bInAsyncLoad;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetAnimInstanceClass(UClass* NewClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetAnimInstanceClass"));
    struct Params_SetAnimInstanceClass {
        UClass* NewClass; // 0x0
    }; // Size: 0x8
    Params_SetAnimInstanceClass params{};
    params.NewClass = (UClass*)NewClass;
    ProcessEvent(func, &params);
}
bool UCustomizableCharacterComponent::ResetOverridenVectorParameter(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.ResetOverridenVectorParameter"));
    struct Params_ResetOverridenVectorParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ResetOverridenVectorParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCustomizableCharacterComponent::SetAddOnMesh(FName CharacterPieceType, FName CharacterPieceName, bool bResetMaterialParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.SetAddOnMesh"));
    struct Params_SetAddOnMesh {
        FName CharacterPieceType; // 0x0
        FName CharacterPieceName; // 0x8
        bool bResetMaterialParams; // 0x10
    }; // Size: 0x11
    Params_SetAddOnMesh params{};
    params.CharacterPieceType = (FName)CharacterPieceType;
    params.CharacterPieceName = (FName)CharacterPieceName;
    params.bResetMaterialParams = (bool)bResetMaterialParams;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::GetCharacterItems() {}
void UCustomizableCharacterComponent::ResolveTextureSoftObjectReference() {}
UAddOnMeshProperties* UCustomizableCharacterComponent::GetAddOnMeshProperties(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshProperties"));
    struct Params_GetAddOnMeshProperties {
        FName Name; // 0x0
        UAddOnMeshProperties* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAddOnMeshProperties params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (UAddOnMeshProperties*)params.ReturnValue;
}
bool UCustomizableCharacterComponent::ResetOverridenTextureParameter(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.ResetOverridenTextureParameter"));
    struct Params_ResetOverridenTextureParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ResetOverridenTextureParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTexture* UCustomizableCharacterComponent::GetTextureParameterDefault(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetTextureParameterDefault"));
    struct Params_GetTextureParameterDefault {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        UTexture* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetTextureParameterDefault params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
bool UCustomizableCharacterComponent::ResetOverridenScalarParameter(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.ResetOverridenScalarParameter"));
    struct Params_ResetOverridenScalarParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ResetOverridenScalarParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCustomizableCharacterComponent::ReloadCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.ReloadCharacter"));
    struct Params_ReloadCharacter {
    }; // Size: 0x0
    Params_ReloadCharacter params{};
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::GetLODInfo(int32_t LOD, int32_t& TriangleCount, int32_t& DrawCallCount, int32_t& MeshCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetLODInfo"));
    struct Params_GetLODInfo {
        int32_t LOD; // 0x0
        int32_t TriangleCount; // 0x4
        int32_t DrawCallCount; // 0x8
        int32_t MeshCount; // 0xc
    }; // Size: 0x10
    Params_GetLODInfo params{};
    params.LOD = (int32_t)LOD;
    params.TriangleCount = (int32_t)TriangleCount;
    params.DrawCallCount = (int32_t)DrawCallCount;
    params.MeshCount = (int32_t)MeshCount;
    ProcessEvent(func, &params);
    TriangleCount = params.TriangleCount;
    DrawCallCount = params.DrawCallCount;
    MeshCount = params.MeshCount;
}
TArray<FName> UCustomizableCharacterComponent::GetClassicationSubTypes(FName Classification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetClassicationSubTypes"));
    struct Params_GetClassicationSubTypes {
        FName Classification; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetClassicationSubTypes params{};
    params.Classification = (FName)Classification;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UCustomizableCharacterComponent::GetVectorParameters(FName MeshName) {}
void UCustomizableCharacterComponent::RecreateClothingActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.RecreateClothingActors"));
    struct Params_RecreateClothingActors {
    }; // Size: 0x0
    Params_RecreateClothingActors params{};
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::RebuildAddOnMeshes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.RebuildAddOnMeshes"));
    struct Params_RebuildAddOnMeshes {
    }; // Size: 0x0
    Params_RebuildAddOnMeshes params{};
    ProcessEvent(func, &params);
}
bool UCustomizableCharacterComponent::IsTextureParameterOverriden(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.IsTextureParameterOverriden"));
    struct Params_IsTextureParameterOverriden {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsTextureParameterOverriden params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::GetAllOutfitItemTypes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAllOutfitItemTypes"));
    struct Params_GetAllOutfitItemTypes {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllOutfitItemTypes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FLinearColor UCustomizableCharacterComponent::GetVectorParameter(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetVectorParameter"));
    struct Params_GetVectorParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetVectorParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UCustomizableCharacterComponent::IsScalarParameterOverriden(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.IsScalarParameterOverriden"));
    struct Params_IsScalarParameterOverriden {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsScalarParameterOverriden params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCustomizableCharacterComponent::IsLoading() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.IsLoading"));
    struct Params_IsLoading {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoading params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UCustomizableCharacterComponent::GetVectorParameterDefault(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetVectorParameterDefault"));
    struct Params_GetVectorParameterDefault {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetVectorParameterDefault params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
UTexture* UCustomizableCharacterComponent::GetTextureParameter(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetTextureParameter"));
    struct Params_GetTextureParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        UTexture* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetTextureParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
float UCustomizableCharacterComponent::GetScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetScale"));
    struct Params_GetScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EPhysicalSurface UCustomizableCharacterComponent::GetSurfaceTypeBelowActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceTypeBelowActor"));
    struct Params_GetSurfaceTypeBelowActor {
        AActor* Actor; // 0x0
        EPhysicalSurface ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSurfaceTypeBelowActor params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EPhysicalSurface)params.ReturnValue;
}
FName UCustomizableCharacterComponent::GetSurfaceName(EPhysicalSurface SurfaceType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceName"));
    struct Params_GetSurfaceName {
        EPhysicalSurface SurfaceType; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSurfaceName params{};
    params.SurfaceType = (EPhysicalSurface)SurfaceType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UCustomizableCharacterComponent::GetSkeletalMeshName(FName MeshName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetSkeletalMeshName"));
    struct Params_GetSkeletalMeshName {
        FName MeshName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSkeletalMeshName params{};
    params.MeshName = (FName)MeshName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCustomizableCharacterComponent::GetScaleRootMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetScaleRootMotion"));
    struct Params_GetScaleRootMotion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetScaleRootMotion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAddOnMeshProperties* UCustomizableCharacterComponent::GetHeadAddOnMeshProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetHeadAddOnMeshProperties"));
    struct Params_GetHeadAddOnMeshProperties {
        UAddOnMeshProperties* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHeadAddOnMeshProperties params{};
    ProcessEvent(func, &params);
    return (UAddOnMeshProperties*)params.ReturnValue;
}
float UCustomizableCharacterComponent::GetBoneSliderScale(FName BoneSliderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetBoneSliderScale"));
    struct Params_GetBoneSliderScale {
        FName BoneSliderName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetBoneSliderScale params{};
    params.BoneSliderName = (FName)BoneSliderName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCustomizableCharacterComponent::GetScalarParameters(FName MeshName) {}
TArray<FName> UCustomizableCharacterComponent::GetAllSurfaceNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAllSurfaceNames"));
    struct Params_GetAllSurfaceNames {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllSurfaceNames params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FColor UCustomizableCharacterComponent::GetRandomColorFromColorPalette() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetRandomColorFromColorPalette"));
    struct Params_GetRandomColorFromColorPalette {
        FColor ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRandomColorFromColorPalette params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
float UCustomizableCharacterComponent::GetScalarParameterDefault(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetScalarParameterDefault"));
    struct Params_GetScalarParameterDefault {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetScalarParameterDefault params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::GetAllCharacterTypes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterTypes"));
    struct Params_GetAllCharacterTypes {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllCharacterTypes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
float UCustomizableCharacterComponent::GetScalarParameter(FName MeshName, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetScalarParameter"));
    struct Params_GetScalarParameter {
        FName MeshName; // 0x0
        FName ParameterName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetScalarParameter params{};
    params.MeshName = (FName)MeshName;
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRandomStream UCustomizableCharacterComponent::GetRandomStream() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetRandomStream"));
    struct Params_GetRandomStream {
        FRandomStream ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRandomStream params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRandomStream)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::GetMeshNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetMeshNames"));
    struct Params_GetMeshNames {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMeshNames params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
int32_t UCustomizableCharacterComponent::GetMeshTriangleCount(FName Name, int32_t LOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetMeshTriangleCount"));
    struct Params_GetMeshTriangleCount {
        FName Name; // 0x0
        int32_t LOD; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetMeshTriangleCount params{};
    params.Name = (FName)Name;
    params.LOD = (int32_t)LOD;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UCustomizableCharacterComponent::GetMeshDrawCount(FName Name, int32_t LOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetMeshDrawCount"));
    struct Params_GetMeshDrawCount {
        FName Name; // 0x0
        int32_t LOD; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetMeshDrawCount params{};
    params.Name = (FName)Name;
    params.LOD = (int32_t)LOD;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FOutfit UCustomizableCharacterComponent::GetCurrentOutfit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetCurrentOutfit"));
    struct Params_GetCurrentOutfit {
        FOutfit ReturnValue; // 0x0
    }; // Size: 0x50
    Params_GetCurrentOutfit params{};
    ProcessEvent(func, &params);
    return (FOutfit)params.ReturnValue;
}
FName UCustomizableCharacterComponent::GetClassicationFromSubType(FName SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetClassicationFromSubType"));
    struct Params_GetClassicationFromSubType {
        FName SubType; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetClassicationFromSubType params{};
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCustomizableCharacterComponent::GetCharacterID(FName& OutCharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetCharacterID"));
    struct Params_GetCharacterID {
        FName OutCharacterID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetCharacterID params{};
    params.OutCharacterID = (FName)OutCharacterID;
    ProcessEvent(func, &params);
    OutCharacterID = params.OutCharacterID;
    return (bool)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::GetAllCharacterPieceClassifications() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterPieceClassifications"));
    struct Params_GetAllCharacterPieceClassifications {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllCharacterPieceClassifications params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::GetAllCharacterItemTypes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterItemTypes"));
    struct Params_GetAllCharacterItemTypes {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllCharacterItemTypes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
TArray<FName> UCustomizableCharacterComponent::GetAllCharacterIDsOfTypeForEditor(FName SubtypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterIDsOfTypeForEditor"));
    struct Params_GetAllCharacterIDsOfTypeForEditor {
        FName SubtypeID; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllCharacterIDsOfTypeForEditor params{};
    params.SubtypeID = (FName)SubtypeID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FName UCustomizableCharacterComponent::GetAddOnMeshPieceName(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshPieceName"));
    struct Params_GetAddOnMeshPieceName {
        FName Name; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAddOnMeshPieceName params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UCustomizableCharacterComponent::GetAddOnMeshes() {}
bool UCustomizableCharacterComponent::GetAddOnMeshBP(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshBP"));
    struct Params_GetAddOnMeshBP {
        FName Name; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetAddOnMeshBP params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCustomizableCharacterComponent::EditorSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.EditorSave"));
    struct Params_EditorSave {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EditorSave params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCustomizableCharacterComponent::DrawSkeletalCapsules(FLinearColor Color, float LineThickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.DrawSkeletalCapsules"));
    struct Params_DrawSkeletalCapsules {
        FLinearColor Color; // 0x0
        float LineThickness; // 0x10
    }; // Size: 0x14
    Params_DrawSkeletalCapsules params{};
    params.Color = (FLinearColor)Color;
    params.LineThickness = (float)LineThickness;
    ProcessEvent(func, &params);
}
void UCustomizableCharacterComponent::DrawClothCapsules(FLinearColor Color, float LineThickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.DrawClothCapsules"));
    struct Params_DrawClothCapsules {
        FLinearColor Color; // 0x0
        float LineThickness; // 0x10
    }; // Size: 0x14
    Params_DrawClothCapsules params{};
    params.Color = (FLinearColor)Color;
    params.LineThickness = (float)LineThickness;
    ProcessEvent(func, &params);
}
UTexture2D* UCustomizableCharacterComponent::CreateTextureFromRenderTarget(UTextureRenderTarget2D* RenderTarget, FString PackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.CreateTextureFromRenderTarget"));
    struct Params_CreateTextureFromRenderTarget {
        UTextureRenderTarget2D* RenderTarget; // 0x0
        FString PackageName; // 0x8
        UTexture2D* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateTextureFromRenderTarget params{};
    params.RenderTarget = (UTextureRenderTarget2D*)RenderTarget;
    params.PackageName = (FString)PackageName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
float UCustomizableCharacterComponent::ComputeBoundsScreenSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CustomizableCharacterComponent.ComputeBoundsScreenSize"));
    struct Params_ComputeBoundsScreenSize {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_ComputeBoundsScreenSize params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

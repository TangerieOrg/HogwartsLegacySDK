#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "EPhysicalSurface.hpp"
#include "FColor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FLinearColor.hpp"
#include "FOutfit.hpp"
#include "FOutfitType.hpp"
#include "FRandomStream.hpp"
#include "UActorComponent.hpp"
class UObject;
class UAddOnMesh;
class UTexture2D;
class UTexture;
class UPoseAsset;
class UClass;
class UCustomizableCharacterDefinition;
struct FTransform;
class AActor;
class UAddOnMeshProperties;
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class UCustomizableCharacterComponent : public UActorComponent {
public:
    FName CharacterName; // 0xc8
    FName Type; // 0xd0
    EGenderEnum Gender; // 0xd8
    char pad_d9[0x7];
    FGameplayTagContainer Tags; // 0xe0
    char pad_100[0x1f0];
    FOutfitType CurrentOutfit; // 0x2f0
    char pad_2f8[0x70];
    bool bDoAsyncLoad; // 0x368
    char pad_369[0xa7];
    UAddOnMesh* MergedMesh; // 0x410
    UPoseAsset* HeadPoseAsset; // 0x418
    UPoseAsset* FacialPoseAsset; // 0x420
    char pad_428[0x148];
    UCustomizableCharacterDefinition* CurrentCCDLoading; // 0x570
    UCustomizableCharacterDefinition* CacheCCD; // 0x578
    char pad_580[0x8];
    static UCustomizableCharacterComponent* StaticClass();
    static void SpawnEditorCharacter(UObject* InWorldContextObject, FTransform& InTransform, FName InCharacterID, UClass* CharacterClass);
    static TArray<FName> SortNames(TArray<FName> Names);
    void SetVectorParameter(FName MeshName, FName ParameterName, FLinearColor Value, bool bResetMaterialParameters);
    void SetTextureParameter(FName MeshName, FName ParameterName, UTexture* Texture, bool bResetMaterialParameters);
    void SetScaleRootMotion(bool State);
    void SetScale(float NewScale);
    void SetScalarParameter(FName MeshName, FName ParameterName, float Value, bool bResetMaterialParameters);
    void SetForcedLOD(int32_t LOD, bool bInFOV);
    void SetFlipped(FName CharacterPieceType, bool bFlip);
    void SetCurrentOutfit(FName OutfitName);
    void SetCharacterID(FName InRegistryID);
    void SetBoneSliderScale(FName BoneName, float Value);
    bool SetAsyncLoad(bool bInAsyncLoad);
    void SetAnimInstanceClass(UClass* NewClass);
    void SetAddOnMesh(FName CharacterPieceType, FName CharacterPieceName, bool bResetMaterialParams);
    static void ResolveTextureSoftObjectReference();
    bool ResetOverridenVectorParameter(FName MeshName, FName ParameterName);
    bool ResetOverridenTextureParameter(FName MeshName, FName ParameterName);
    bool ResetOverridenScalarParameter(FName MeshName, FName ParameterName);
    void ReloadCharacter();
    void RecreateClothingActors();
    void RebuildAddOnMeshes();
    bool IsVectorParameterOverriden(FName MeshName, FName ParameterName);
    bool IsTextureParameterOverriden(FName MeshName, FName ParameterName);
    bool IsScalarParameterOverriden(FName MeshName, FName ParameterName);
    bool IsLoading();
    bool IsAsyncLoad();
    void GetVectorParameters(FName MeshName);
    FLinearColor GetVectorParameterDefault(FName MeshName, FName ParameterName);
    FLinearColor GetVectorParameter(FName MeshName, FName ParameterName);
    FName GetTypeClassication();
    void GetTextureParameters(FName MeshName);
    UTexture* GetTextureParameterDefault(FName MeshName, FName ParameterName);
    UTexture* GetTextureParameter(FName MeshName, FName ParameterName);
    static EPhysicalSurface GetSurfaceTypeByName(FName SurfaceName);
    static EPhysicalSurface GetSurfaceTypeBelowActor(AActor* Actor);
    static FName GetSurfaceNameBelowActor(AActor* Actor);
    static FName GetSurfaceName(EPhysicalSurface SurfaceType);
    FName GetSkeletalMeshName(FName MeshName);
    bool GetScaleRootMotion();
    float GetScale();
    void GetScalarParameters(FName MeshName);
    float GetScalarParameterDefault(FName MeshName, FName ParameterName);
    float GetScalarParameter(FName MeshName, FName ParameterName);
    static FRandomStream GetRandomStream();
    static float GetRandomFloat();
    static FColor GetRandomColorFromColorPalette();
    void GetOutfits();
    int32_t GetMeshTriangleCount(FName Name, int32_t LOD);
    TArray<FName> GetMeshNames();
    int32_t GetMeshDrawCount(FName Name, int32_t LOD);
    void GetLODInfo(int32_t LOD, int32_t& TriangleCount, int32_t& DrawCallCount, int32_t& MeshCount);
    UAddOnMeshProperties* GetHeadAddOnMeshProperties();
    FOutfit GetCurrentOutfit();
    static TArray<FName> GetClassicationSubTypes(FName Classification);
    static FName GetClassicationFromSubType(FName SubType);
    void GetCharacterItems();
    bool GetCharacterID(FName& OutCharacterID);
    float GetBoneSliderScale(FName BoneSliderName);
    static TArray<FName> GetAllSurfaceNames();
    static TArray<FName> GetAllOutfitItemTypes();
    static TArray<FName> GetAllCharacterTypes();
    static TArray<FName> GetAllCharacterPieceClassifications();
    static TArray<FName> GetAllCharacterItemTypes();
    static TArray<FName> GetAllCharacterIDsOfTypeForEditor(FName SubtypeID);
    UAddOnMeshProperties* GetAddOnMeshProperties(FName Name);
    FName GetAddOnMeshPieceName(FName Name);
    void GetAddOnMeshes();
    bool GetAddOnMeshBP(FName Name);
    bool EditorSave();
    void DrawSkeletalCapsules(FLinearColor Color, float LineThickness);
    void DrawClothCapsules(FLinearColor Color, float LineThickness);
    static UTexture2D* CreateTextureFromRenderTarget(UTextureRenderTarget2D* RenderTarget, FString PackageName);
    float ComputeBoundsScreenSize();
}; // Size: 0x588
#pragma pack(pop)

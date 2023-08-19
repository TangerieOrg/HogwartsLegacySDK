#pragma once
#include <cstdint>
#include "EMaterialParameterAssociation.hpp"
#include "FLightmassMaterialInterfaceSettings.hpp"
#include "FMaterialParameterInfo.hpp"
#include "FMaterialTextureInfo.hpp"
#include "UObject.hpp"
class USubsurfaceProfile;
class UAssetUserData;
class UPhysicalMaterialMask;
class UMaterial;
class UPhysicalMaterial;
class UMaterialFunctionInterface;
#pragma pack(push, 1)
class UMaterialInterface : public UObject {
public:
    char pad_28[0x10];
    USubsurfaceProfile* SubsurfaceProfile; // 0x38
    char pad_40[0x10];
    FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
    TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
    TArray<UAssetUserData*> AssetUserData; // 0x70
    char pad_80[0x18];
    static UMaterialInterface* StaticClass();
    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse);
    UPhysicalMaterialMask* GetPhysicalMaterialMask();
    UPhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index);
    UPhysicalMaterial* GetPhysicalMaterial();
    FMaterialParameterInfo GetParameterInfo(EMaterialParameterAssociation Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction);
    UMaterial* GetBaseMaterial();
}; // Size: 0x98
#pragma pack(pop)

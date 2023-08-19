#pragma once
#include <cstdint>
#include "FStencilManagerEffectInfo.hpp"
#include "FStencilManagerMPCGlobals.hpp"
#include "FStencilPrimitiveTagRules.hpp"
#include "UDataAsset.hpp"
class UMaterialInterface;
class UStencilManagerWholeActorOverrides;
class UMaterialParameterCollection;
class UStencilManagerAccessibilityOverrides;
class ULocalStencilEffectActorOverrides;
#pragma pack(push, 1)
class UStencilManagerSettings : public UDataAsset {
public:
    TArray<UMaterialInterface*> StencilPostProcessingMaterials; // 0x30
    UMaterialInterface* PreferredStencilPostProcessingMaterial; // 0x40
    bool bForcePreferredStencilPostProcessingMaterial; // 0x48
    char pad_49[0x7];
    UMaterialParameterCollection* MaterialParameterCollection; // 0x50
    FStencilManagerMPCGlobals MaterialParameterGlobals; // 0x58
    char pad_64[0x4];
    TArray<FName> Groups; // 0x68
    TArray<FStencilManagerEffectInfo> EffectsList; // 0x78
    UStencilManagerAccessibilityOverrides* AccessibilityOverrides; // 0x88
    UStencilManagerWholeActorOverrides* WholeActorOverrides; // 0x90
    FStencilPrimitiveTagRules DefaultLocalStencilTagRules; // 0x98
    ULocalStencilEffectActorOverrides* LocalStencilFXOverrides; // 0xe8
    static UStencilManagerSettings* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)

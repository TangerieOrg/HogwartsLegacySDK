#pragma once
#include <cstdint>
#include "ESanctuaryIdentity.hpp"
#include "FSanctuaryPortalMaterialSettings.hpp"
#include "USceneComponent.hpp"
class UMaterialInstanceDynamic;
class UObject;
#pragma pack(push, 1)
class USanctuaryPortalMaterialComponent : public USceneComponent {
public:
    FSanctuaryPortalMaterialSettings MaterialSettings; // 0x220
    char pad_23c[0x54];
    bool bSeparateSettingsForPreRenderedCubemap; // 0x290
    char pad_291[0x3];
    FSanctuaryPortalMaterialSettings PreRenderedCubemapMaterialSettings; // 0x294
    char pad_2b0[0x50];
    TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x300
    char pad_310[0x10];
    static USanctuaryPortalMaterialComponent* StaticClass();
    void OnUpdateIdentity(ESanctuaryIdentity PreviousIdentity, ESanctuaryIdentity CurrentIdentity, float BlendWeight);
    void OnUpdateEntranceMaterials(UObject* InCaller);
}; // Size: 0x320
#pragma pack(pop)

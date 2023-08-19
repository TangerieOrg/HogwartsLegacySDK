#pragma once
#include <cstdint>
#include "EBeaconState.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UTexture2D;
class UObject;
class URUserVectorArtData;
class UMapIconInstance;
class UBeaconInfo;
#pragma pack(push, 1)
class UMapIconMeshRenderWidget : public UUserWidget {
public:
    FString Name; // 0x268
    UMaterialInterface* Material; // 0x278
    int32_t NumIcons; // 0x280
    char pad_284[0x4];
    UMaterialInstanceDynamic* MaterialDynamic; // 0x288
    char pad_290[0x10];
    URUserVectorArtData* MeshAsset; // 0x2a0
    char pad_2a8[0x90];
    TArray<void*> BeaconsInList; // 0x338
    static UMapIconMeshRenderWidget* StaticClass();
    void SetTexture(UTexture2D* Texture);
    void SetOutlineTexture(UTexture2D* Texture);
    void SetName(FString pName);
    void SetMaterial(UMaterialInterface* pMaterial);
    void SetLayer3Texture(UTexture2D* Texture);
    void SetLayer2Texture(UTexture2D* Texture);
    void SetCurrentTextureName(FString pTextureName);
    void SetCurrentBeaconState(EBeaconState pCurrentBeaconState);
    bool RemoveIcon(UMapIconInstance* Icon);
    void IconTextureCallback(UTexture2D* Texture, UObject* Param);
    FString GetWidgetName();
    UMaterialInstanceDynamic* GetMaterialDynamic();
    UMaterialInterface* GetMaterial();
    FString GetCurrentTextureName();
    EBeaconState GetCurrentBeaconState();
    FLinearColor GetColorAndOpacity();
    UMaterialInstanceDynamic* CreateMaterial(UMaterialInterface* pMaterial);
    bool CONTAINS(UMapIconInstance* Icon);
    void ClearIcons();
    void ClearBeaconList();
    void AddIconToList(UMapIconInstance* MapIconInstance);
    UMapIconInstance* AddIcon(UBeaconInfo* Beacon, FVector2D Position, float Scale, float flags, FLinearColor Color);
    void AddBeaconToList(UBeaconInfo* pBeaconInfo);
}; // Size: 0x348
#pragma pack(pop)

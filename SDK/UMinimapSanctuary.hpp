#pragma once
#include <cstdint>
#include "ESanctuaryMiniMapType\Type.hpp"
#include "UMinimapBase.hpp"
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UMinimapSanctuary : public UMinimapBase {
public:
    UTexture2D* BlackTexture; // 0x4a0
    char pad_4a8[0x88];
    static UMinimapSanctuary* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void SetMapType(ESanctuaryMiniMapType::Type MapType, bool LoadNavMesh, bool fromInit);
    void SetHubLevelUnlock(FString NameOfUnlock, bool LoadTexture, bool FromLoadGame);
    void Init(bool LoadNavMesh);
    void ChangeLevel(int32_t LevelIndex, bool fromInit);
}; // Size: 0x530
#pragma pack(pop)

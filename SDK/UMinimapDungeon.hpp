#pragma once
#include <cstdint>
#include "UMinimapBase.hpp"
class UTexture2D;
class UObject;
class UMapDungeon;
class UTextureUtil;
#pragma pack(push, 1)
class UMinimapDungeon : public UMinimapBase {
public:
    char pad_4a0[0x8];
    UTexture2D* BlackTexture; // 0x4a8
    UMapDungeon* DungeonMap; // 0x4b0
    char pad_4b8[0x50];
    UTextureUtil* DungeonTextureBlitter; // 0x508
    UTexture2D* MapTexture; // 0x510
    UTexture2D* RevealTexture; // 0x518
    UTexture2D* SeenTexture; // 0x520
    char pad_528[0x50];
    static UMinimapDungeon* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void Init(bool LoadNavMesh);
    void ChangeLevel(int32_t LevelIndex, bool fromInit);
}; // Size: 0x578
#pragma pack(pop)

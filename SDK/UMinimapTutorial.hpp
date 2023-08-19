#pragma once
#include <cstdint>
#include "UMinimapBase.hpp"
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UMinimapTutorial : public UMinimapBase {
public:
    UTexture2D* BlackTexture; // 0x4a0
    char pad_4a8[0x30];
    UTexture2D* MapTexture; // 0x4d8
    static UMinimapTutorial* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void Init(bool LoadNavMesh);
    void ChangeLevel(int32_t LevelIndex, bool fromInit);
}; // Size: 0x4e0
#pragma pack(pop)

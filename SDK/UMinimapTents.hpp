#pragma once
#include <cstdint>
#include "UMinimapBase.hpp"
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UMinimapTents : public UMinimapBase {
public:
    char pad_4a0[0x40];
    static UMinimapTents* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void Init(bool LoadNavMesh);
    void ChangeLevel(int32_t LevelIndex, bool fromInit);
}; // Size: 0x4e0
#pragma pack(pop)

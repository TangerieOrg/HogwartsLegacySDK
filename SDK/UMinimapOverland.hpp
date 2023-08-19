#pragma once
#include <cstdint>
#include "UMinimapBase.hpp"
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UMinimapOverland : public UMinimapBase {
public:
    char pad_4a0[0x30];
    static UMinimapOverland* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void Init(bool LoadNavMesh);
}; // Size: 0x4d0
#pragma pack(pop)

#pragma once
#include <cstdint>
class UFXRule;
class UTexture2D;
#pragma pack(push, 1)
struct FModifyMaterials_TextureOverride {
    TArray<UFXRule*> Rules; // 0x0
    UTexture2D* Texture; // 0x10
}; // Size: 0x18
#pragma pack(pop)

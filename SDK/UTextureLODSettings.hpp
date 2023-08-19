#pragma once
#include <cstdint>
#include "FTextureLODGroup.hpp"
#include "FTextureOverride.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTextureLODSettings : public UObject {
public:
    TArray<FTextureLODGroup> TextureLODGroups; // 0x28
    TArray<FTextureOverride> TextureOverrides; // 0x38
    static UTextureLODSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

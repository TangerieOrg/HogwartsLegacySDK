#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
class UClass;
class UTexture2D;
#pragma pack(push, 1)
class UTutorialPreCacheEntry : public UObject {
public:
    UClass* WidgetClass; // 0x28
    UTexture2D* Texture; // 0x30
    FSoftObjectPath Video; // 0x38
    static UTutorialPreCacheEntry* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

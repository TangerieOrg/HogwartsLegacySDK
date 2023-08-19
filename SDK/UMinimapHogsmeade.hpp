#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UMinimapBase.hpp"
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UMinimapHogsmeade : public UMinimapBase {
public:
    char pad_4a0[0x30];
    static UMinimapHogsmeade* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void Init(bool LoadNavMesh);
    FVector2D GetTopLeftBound();
    FVector GetDebugPlayerOffset();
    FVector2D GetBottomRightBound();
    void ChangeLevel(int32_t LevelIndex, bool fromInit);
}; // Size: 0x4d0
#pragma pack(pop)

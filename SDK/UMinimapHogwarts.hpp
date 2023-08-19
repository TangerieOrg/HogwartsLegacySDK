#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UMinimapBase.hpp"
class UDataTable;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UMinimapHogwarts : public UMinimapBase {
public:
    UDataTable* ZLevelData; // 0x4a0
    char pad_4a8[0x48];
    static UMinimapHogwarts* StaticClass();
    void TextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void SetCurrentFloor(int32_t Floor);
    void Init(bool LoadNavMesh);
    FVector2D GetTopLeftBound();
    FVector GetDebugPlayerOffset();
    int32_t GetCurrentFloor();
    FVector2D GetBottomRightBound();
    void ChangeLevel(int32_t LevelIndex, bool fromInit);
}; // Size: 0x4f0
#pragma pack(pop)

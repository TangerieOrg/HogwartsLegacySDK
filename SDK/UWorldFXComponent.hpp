#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FWorldFXFull.hpp"
#include "UWorldFXComponentBase.hpp"
class UWorldFXRule;
class USceneComponent;
#pragma pack(push, 1)
class UWorldFXComponent : public UWorldFXComponentBase {
public:
    FWorldFXFull WorldFX; // 0x240
    bool bSpawnAttached; // 0x360
    char pad_361[0xf];
    static UWorldFXComponent* StaticClass();
    void SetSpawnAttached(bool bNewSpawnAttached);
    void ResetCascadeParameters();
    void RefreshCascadeParameters();
    void GetSpawnAttached(bool& bIsSpawnAttached);
    static UWorldFXComponent* CreateWorldFX(USceneComponent* AttachTo, FWorldFXFull WorldFXSetup, FTransform RelativeTransform);
}; // Size: 0x370
#pragma pack(pop)

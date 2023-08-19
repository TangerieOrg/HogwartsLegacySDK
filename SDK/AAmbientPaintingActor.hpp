#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDataTableRowHandle.hpp"
class USceneComponent;
class UStaticMeshComponent;
class UDataTable;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPhysicalResponseComponent;
class UBinkMediaPlayer;
#pragma pack(push, 1)
class AAmbientPaintingActor : public AActor {
public:
    char pad_248[0x10];
    USceneComponent* RootSceneComponent; // 0x258
    UStaticMeshComponent* FrameT; // 0x260
    FDataTableRowHandle AtlasHandle; // 0x268
    FDataTableRowHandle PaintingHandle; // 0x278
    UMaterialInterface* PaintingMaterial; // 0x288
    UDataTable* AmbientPaintingsLibraryDT; // 0x290
    UPhysicalResponseComponent* PhysicalResponse; // 0x298
    UBinkMediaPlayer* BinkMediaPlayer; // 0x2a0
    char pad_2a8[0x10];
    UMaterialInstanceDynamic* MaterialInstance; // 0x2b8
    char pad_2c0[0x10];
    static AAmbientPaintingActor* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)

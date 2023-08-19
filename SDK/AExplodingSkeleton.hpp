#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FExplodingSkeletonImpulse.hpp"
#include "FExplodingSkeletonInitialDelay.hpp"
#include "FExplodingSkeletonPieceTracker.hpp"
#include "FVector.hpp"
class USkinFXComponent;
class UMaterialSwapMeshPool;
class UExplodingSkeletonPieceSetup;
class UClass;
#pragma pack(push, 1)
class AExplodingSkeleton : public AActor {
public:
    char pad_248[0x10];
    TArray<FExplodingSkeletonPieceTracker> Pieces; // 0x258
    int32_t AlivePieces; // 0x268
    char pad_26c[0x4];
    USkinFXComponent* SkinFXComponent; // 0x270
    FName ObjectFadeMaterialParmeter; // 0x278
    UMaterialSwapMeshPool* MaterialSwap; // 0x280
    FExplodingSkeletonImpulse Impulse; // 0x288
    float Age; // 0x2b0
    bool bDitheredAlphaFade; // 0x2b4
    char pad_2b5[0x3];
    static AExplodingSkeleton* StaticClass();
    static AExplodingSkeleton* SpawnExplodingSkeletonSkinFX(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, UClass* SkinFXEffect, FName InCollisionProfileName, FVector BaseOffset);
    static AExplodingSkeleton* SpawnExplodingSkeletonMIDFade(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, FName FadeMaterialParmeter, FName InCollisionProfileName, FVector BaseOffset);
    static AExplodingSkeleton* SpawnExplodingSkeletonFade(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, FName FadeMaterialKey, FName FadeMaterialParmeter, FName InCollisionProfileName, FVector BaseOffset);
    static AExplodingSkeleton* SpawnExplodingSkeleton_CollisionOverride(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, FName InCollisionProfileName, FVector BaseOffset);
    static AExplodingSkeleton* SpawnExplodingSkeleton(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, bool bUseDitheredAlphaFade, FName InCollisionProfileName, FVector BaseOffset);
    void ExplodingSkeletonPieces(int32_t& TotalPieces, int32_t& CurrentlyAlivePieces);
}; // Size: 0x2b8
#pragma pack(pop)

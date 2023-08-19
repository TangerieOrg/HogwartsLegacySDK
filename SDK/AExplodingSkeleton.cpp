#include "AActor.hpp"
#include "AExplodingSkeleton.hpp"
#include "FExplodingSkeletonImpulse.hpp"
#include "FExplodingSkeletonInitialDelay.hpp"
#include "FExplodingSkeletonPieceTracker.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UExplodingSkeletonPieceSetup.hpp"
#include "UFunction.hpp"
#include "UMaterialSwapMeshPool.hpp"
#include "USkinFXComponent.hpp"
void AExplodingSkeleton::ExplodingSkeletonPieces(int32_t& TotalPieces, int32_t& CurrentlyAlivePieces) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplodingSkeleton.ExplodingSkeletonPieces"));
    struct Params_ExplodingSkeletonPieces {
        int32_t TotalPieces; // 0x0
        int32_t CurrentlyAlivePieces; // 0x4
    }; // Size: 0x8
    Params_ExplodingSkeletonPieces params{};
    params.TotalPieces = (int32_t)TotalPieces;
    params.CurrentlyAlivePieces = (int32_t)CurrentlyAlivePieces;
    ProcessEvent(func, &params);
    TotalPieces = params.TotalPieces;
    CurrentlyAlivePieces = params.CurrentlyAlivePieces;
}
AExplodingSkeleton* AExplodingSkeleton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExplodingSkeleton");
    return (AExplodingSkeleton*)res;
}
AExplodingSkeleton* AExplodingSkeleton::SpawnExplodingSkeletonFade(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, FName FadeMaterialKey, FName FadeMaterialParmeter, FName InCollisionProfileName, FVector BaseOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplodingSkeleton.SpawnExplodingSkeletonFade"));
    struct Params_SpawnExplodingSkeletonFade {
        AActor* SourceActor; // 0x0
        UExplodingSkeletonPieceSetup* PieceSetup; // 0x8
        FExplodingSkeletonImpulse InitialImpulse; // 0x10
        FExplodingSkeletonInitialDelay InitialDelay; // 0x38
        FName FadeMaterialKey; // 0x44
        FName FadeMaterialParmeter; // 0x4c
        FName InCollisionProfileName; // 0x54
        FVector BaseOffset; // 0x5c
        AExplodingSkeleton* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnExplodingSkeletonFade params{};
    params.SourceActor = (AActor*)SourceActor;
    params.PieceSetup = (UExplodingSkeletonPieceSetup*)PieceSetup;
    params.InitialImpulse = (FExplodingSkeletonImpulse)InitialImpulse;
    params.InitialDelay = (FExplodingSkeletonInitialDelay)InitialDelay;
    params.FadeMaterialKey = (FName)FadeMaterialKey;
    params.FadeMaterialParmeter = (FName)FadeMaterialParmeter;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.BaseOffset = (FVector)BaseOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AExplodingSkeleton*)params.ReturnValue;
}
AExplodingSkeleton* AExplodingSkeleton::SpawnExplodingSkeletonSkinFX(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, UClass* SkinFXEffect, FName InCollisionProfileName, FVector BaseOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplodingSkeleton.SpawnExplodingSkeletonSkinFX"));
    struct Params_SpawnExplodingSkeletonSkinFX {
        AActor* SourceActor; // 0x0
        UExplodingSkeletonPieceSetup* PieceSetup; // 0x8
        FExplodingSkeletonImpulse InitialImpulse; // 0x10
        FExplodingSkeletonInitialDelay InitialDelay; // 0x38
        char pad_44[0x4];
        UClass* SkinFXEffect; // 0x48
        FName InCollisionProfileName; // 0x50
        FVector BaseOffset; // 0x58
        char pad_64[0x4];
        AExplodingSkeleton* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnExplodingSkeletonSkinFX params{};
    params.SourceActor = (AActor*)SourceActor;
    params.PieceSetup = (UExplodingSkeletonPieceSetup*)PieceSetup;
    params.InitialImpulse = (FExplodingSkeletonImpulse)InitialImpulse;
    params.InitialDelay = (FExplodingSkeletonInitialDelay)InitialDelay;
    params.SkinFXEffect = (UClass*)SkinFXEffect;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.BaseOffset = (FVector)BaseOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AExplodingSkeleton*)params.ReturnValue;
}
AExplodingSkeleton* AExplodingSkeleton::SpawnExplodingSkeleton(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, bool bUseDitheredAlphaFade, FName InCollisionProfileName, FVector BaseOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplodingSkeleton.SpawnExplodingSkeleton"));
    struct Params_SpawnExplodingSkeleton {
        AActor* SourceActor; // 0x0
        UExplodingSkeletonPieceSetup* PieceSetup; // 0x8
        FExplodingSkeletonImpulse InitialImpulse; // 0x10
        FExplodingSkeletonInitialDelay InitialDelay; // 0x38
        bool bUseDitheredAlphaFade; // 0x44
        char pad_45[0x3];
        FName InCollisionProfileName; // 0x48
        FVector BaseOffset; // 0x50
        char pad_5c[0x4];
        AExplodingSkeleton* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_SpawnExplodingSkeleton params{};
    params.SourceActor = (AActor*)SourceActor;
    params.PieceSetup = (UExplodingSkeletonPieceSetup*)PieceSetup;
    params.InitialImpulse = (FExplodingSkeletonImpulse)InitialImpulse;
    params.InitialDelay = (FExplodingSkeletonInitialDelay)InitialDelay;
    params.bUseDitheredAlphaFade = (bool)bUseDitheredAlphaFade;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.BaseOffset = (FVector)BaseOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AExplodingSkeleton*)params.ReturnValue;
}
AExplodingSkeleton* AExplodingSkeleton::SpawnExplodingSkeletonMIDFade(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, FName FadeMaterialParmeter, FName InCollisionProfileName, FVector BaseOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplodingSkeleton.SpawnExplodingSkeletonMIDFade"));
    struct Params_SpawnExplodingSkeletonMIDFade {
        AActor* SourceActor; // 0x0
        UExplodingSkeletonPieceSetup* PieceSetup; // 0x8
        FExplodingSkeletonImpulse InitialImpulse; // 0x10
        FExplodingSkeletonInitialDelay InitialDelay; // 0x38
        FName FadeMaterialParmeter; // 0x44
        FName InCollisionProfileName; // 0x4c
        FVector BaseOffset; // 0x54
        AExplodingSkeleton* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_SpawnExplodingSkeletonMIDFade params{};
    params.SourceActor = (AActor*)SourceActor;
    params.PieceSetup = (UExplodingSkeletonPieceSetup*)PieceSetup;
    params.InitialImpulse = (FExplodingSkeletonImpulse)InitialImpulse;
    params.InitialDelay = (FExplodingSkeletonInitialDelay)InitialDelay;
    params.FadeMaterialParmeter = (FName)FadeMaterialParmeter;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.BaseOffset = (FVector)BaseOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AExplodingSkeleton*)params.ReturnValue;
}
AExplodingSkeleton* AExplodingSkeleton::SpawnExplodingSkeleton_CollisionOverride(AActor* SourceActor, UExplodingSkeletonPieceSetup* PieceSetup, FExplodingSkeletonImpulse InitialImpulse, FExplodingSkeletonInitialDelay InitialDelay, FName InCollisionProfileName, FVector BaseOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplodingSkeleton.SpawnExplodingSkeleton_CollisionOverride"));
    struct Params_SpawnExplodingSkeleton_CollisionOverride {
        AActor* SourceActor; // 0x0
        UExplodingSkeletonPieceSetup* PieceSetup; // 0x8
        FExplodingSkeletonImpulse InitialImpulse; // 0x10
        FExplodingSkeletonInitialDelay InitialDelay; // 0x38
        FName InCollisionProfileName; // 0x44
        FVector BaseOffset; // 0x4c
        AExplodingSkeleton* ReturnValue; // 0x58
    }; // Size: 0x60
    Params_SpawnExplodingSkeleton_CollisionOverride params{};
    params.SourceActor = (AActor*)SourceActor;
    params.PieceSetup = (UExplodingSkeletonPieceSetup*)PieceSetup;
    params.InitialImpulse = (FExplodingSkeletonImpulse)InitialImpulse;
    params.InitialDelay = (FExplodingSkeletonInitialDelay)InitialDelay;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.BaseOffset = (FVector)BaseOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AExplodingSkeleton*)params.ReturnValue;
}

#pragma once
#include <cstdint>
#include "ELocalStencilMaterialMode.hpp"
#include "FBox.hpp"
#include "FLocalStencilEffect.hpp"
#include "UActorComponent.hpp"
class UStaticMesh;
class AActor;
#pragma pack(push, 1)
class ULocalStencilComponentBase : public UActorComponent {
public:
    UStaticMesh* Mesh; // 0xc8
    float MeshScaleFactor; // 0xd0
    int32_t TranslucentSortPriority; // 0xd4
    bool bSetTranslucentSortPriority; // 0xd8
    char pad_d9[0x7];
    FLocalStencilEffect CurrentEffect; // 0xe0
    FBox WorldObjectBounds; // 0x2b0
    float Age; // 0x2cc
    float FadeInAge; // 0x2d0
    float FadeOutAge; // 0x2d4
    ELocalStencilMaterialMode MaterialMode; // 0x2d8
    bool bEffectActive; // 0x2d9
    bool bStencilManagerLock; // 0x2da
    bool bFadingOut; // 0x2db
    char pad_2dc[0x4];
    static ULocalStencilComponentBase* StaticClass();
    bool StartLocalStencilEffect(FLocalStencilEffect Effect);
    void LocalStencilEffectIsRunning(bool& bIsRunning, FLocalStencilEffect& RunningEffect);
    bool EndLocalStencilEffect();
    static void ActorStartLocalStencilEffect(AActor* Actor, FLocalStencilEffect Effect, bool& Success);
    static void ActorLocalStencilEffectIsRunning(AActor* Actor, bool& bIsRunning, FLocalStencilEffect& RunningEffect);
    static void ActorEndLocalStencilEffect(AActor* Actor, bool& Success);
}; // Size: 0x2e0
#pragma pack(pop)

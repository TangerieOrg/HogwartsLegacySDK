#include "AActor.hpp"
#include "APortraitPaintingActor.hpp"
#include "EMaterialPermuterLoadingBundleAndSwapType.hpp"
#include "FLinearColor.hpp"
#include "FPortraitPaintingComponentState.hpp"
#include "FPortraitPaintingEntities.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UCameraComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialPermuterLoadingBundleAndSwap.hpp"
#include "USceneComponent.hpp"
#include "UScheduledEntity.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture.hpp"
void APortraitPaintingActor::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortraitPaintingActor.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void APortraitPaintingActor::OnFleshLoaded(AActor* Actor, UScheduledEntity* ScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortraitPaintingActor.OnFleshLoaded"));
    struct Params_OnFleshLoaded {
        AActor* Actor; // 0x0
        UScheduledEntity* ScheduledEntity; // 0x8
    }; // Size: 0x10
    Params_OnFleshLoaded params{};
    params.Actor = (AActor*)Actor;
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    ProcessEvent(func, &params);
}
APortraitPaintingActor* APortraitPaintingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PortraitPaintingActor");
    return (APortraitPaintingActor*)res;
}
void APortraitPaintingActor::SetPaintingFrameMask(UTexture* PaintingFrameMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortraitPaintingActor.SetPaintingFrameMask"));
    struct Params_SetPaintingFrameMask {
        UTexture* PaintingFrameMask; // 0x0
    }; // Size: 0x8
    Params_SetPaintingFrameMask params{};
    params.PaintingFrameMask = (UTexture*)PaintingFrameMask;
    ProcessEvent(func, &params);
}
void APortraitPaintingActor::SetPaintingBackground(UTexture* PaintingBackground) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortraitPaintingActor.SetPaintingBackground"));
    struct Params_SetPaintingBackground {
        UTexture* PaintingBackground; // 0x0
    }; // Size: 0x8
    Params_SetPaintingBackground params{};
    params.PaintingBackground = (UTexture*)PaintingBackground;
    ProcessEvent(func, &params);
}

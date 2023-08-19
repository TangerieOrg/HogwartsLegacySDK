#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FMaterialPermuterLoadTriggerProperty.hpp"
#include "FMaterialPermuterMIDCache.hpp"
#include "FMaterialPermuterSwapTracker.hpp"
#include "FMaterialSwapActorFadeStates.hpp"
#include "FTimerHandle.hpp"
class UMaterialPermuterLibrary;
class UMaterialPermuterLiveMaterials;
class UObject;
#pragma pack(push, 1)
class AMaterialPermuterSingleton : public AActor {
public:
    UMaterialPermuterLibrary* Library; // 0x248
    UMaterialPermuterLiveMaterials* LiveMaterials; // 0x250
    FMaterialPermuterMIDCache MIDCache; // 0x258
    FMaterialPermuterSwapTracker ActiveSwaps; // 0x2b0
    FTimerHandle ActiveSwapsUpdateTimerHandle; // 0x300
    FMaterialSwapActorFadeStates ActorFadeStates; // 0x308
    static AMaterialPermuterSingleton* StaticClass();
    static void SetLoadingTrigger(UObject* TriggerOwner, FName Trigger);
    static void ProhibitActorFade(AActor* Actor, bool bProhibit);
    static void PauseAllActorFading(UObject* WorldContextObject, bool bPause);
    static void LoadingTriggerSet(FName Trigger, bool& bSet);
    static void IsLoadingTriggerSet(UObject* TriggerOwner, FName Trigger, bool& bSet);
    static bool IsAllActorFadingPaused(UObject* WorldContextObject);
    static bool IsActorFadeProhibited(AActor* Actor);
    static FName GetTriggerPropertyName(FMaterialPermuterLoadTriggerProperty TriggerProperty);
    static void ClearLoadingTrigger(UObject* TriggerOwner, FName Trigger);
}; // Size: 0x3d8
#pragma pack(pop)

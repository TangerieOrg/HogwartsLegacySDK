#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AController.hpp"
#include "AGameModeBase.hpp"
#include "AGameStateBase.hpp"
#include "APawn.hpp"
#include "APlayerCameraManager.hpp"
#include "APlayerController.hpp"
#include "EAttachLocation\Type.hpp"
#include "ECollisionChannel.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "EMouseCaptureMode.hpp"
#include "EObjectTypeQuery.hpp"
#include "EPSCPoolMethod.hpp"
#include "EPhysicalSurface.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESuggestProjVelocityTraceOption\Type.hpp"
#include "FDialogueContext.hpp"
#include "FHitResult.hpp"
#include "FIntVector.hpp"
#include "FLatentActionInfo.hpp"
#include "FMatrix.hpp"
#include "FMinimalViewInfo.hpp"
#include "FPredictProjectilePathParams.hpp"
#include "FPredictProjectilePathResult.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAudioComponent.hpp"
#include "UBlueprint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UDecalComponent.hpp"
#include "UDialogueWave.hpp"
#include "UForceFeedbackAttenuation.hpp"
#include "UForceFeedbackComponent.hpp"
#include "UForceFeedbackEffect.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "UGameplayStatics.hpp"
#include "ULevelStreaming.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "UReverbEffect.hpp"
#include "USaveGame.hpp"
#include "USceneComponent.hpp"
#include "USoundAttenuation.hpp"
#include "USoundBase.hpp"
#include "USoundClass.hpp"
#include "USoundConcurrency.hpp"
#include "USoundMix.hpp"
#include "UStaticMesh.hpp"
#include "UWorld.hpp"
void UGameplayStatics::PlayDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PlayDialogueAtLocation"));
    struct Params_PlayDialogueAtLocation {
        UObject* WorldContextObject; // 0x0
        UDialogueWave* Dialogue; // 0x8
        FDialogueContext Context; // 0x10
        FVector Location; // 0x28
        FRotator Rotation; // 0x34
        float VolumeMultiplier; // 0x40
        float PitchMultiplier; // 0x44
        float StartTime; // 0x48
        char pad_4c[0x4];
        USoundAttenuation* AttenuationSettings; // 0x50
    }; // Size: 0x58
    Params_PlayDialogueAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Dialogue = (UDialogueWave*)Dialogue;
    params.Context = (FDialogueContext)Context;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (USoundAttenuation*)AttenuationSettings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
}
void UGameplayStatics::PrimeSound(USoundBase* InSound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PrimeSound"));
    struct Params_PrimeSound {
        USoundBase* InSound; // 0x0
    }; // Size: 0x8
    Params_PrimeSound params{};
    params.InSound = (USoundBase*)InSound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAudioComponent* UGameplayStatics::SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnSoundAttached"));
    struct Params_SpawnSoundAttached {
        USoundBase* Sound; // 0x0
        USceneComponent* AttachToComponent; // 0x8
        FName AttachPointName; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        EAttachLocation::Type LocationType; // 0x30
        bool bStopWhenAttachedToDestroyed; // 0x31
        char pad_32[0x2];
        float VolumeMultiplier; // 0x34
        float PitchMultiplier; // 0x38
        float StartTime; // 0x3c
        USoundAttenuation* AttenuationSettings; // 0x40
        USoundConcurrency* ConcurrencySettings; // 0x48
        bool bAutoDestroy; // 0x50
        char pad_51[0x7];
        UAudioComponent* ReturnValue; // 0x58
    }; // Size: 0x60
    Params_SpawnSoundAttached params{};
    params.Sound = (USoundBase*)Sound;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (USoundAttenuation*)AttenuationSettings;
    params.ConcurrencySettings = (USoundConcurrency*)ConcurrencySettings;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAudioComponent*)params.ReturnValue;
}
void UGameplayStatics::UnRetainAllSoundsInSoundClass(USoundClass* InSoundClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.UnRetainAllSoundsInSoundClass"));
    struct Params_UnRetainAllSoundsInSoundClass {
        USoundClass* InSoundClass; // 0x0
    }; // Size: 0x8
    Params_UnRetainAllSoundsInSoundClass params{};
    params.InSoundClass = (USoundClass*)InSoundClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::SetGlobalPitchModulation(UObject* WorldContextObject, float PitchModulation, float TimeSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetGlobalPitchModulation"));
    struct Params_SetGlobalPitchModulation {
        UObject* WorldContextObject; // 0x0
        float PitchModulation; // 0x8
        float TimeSec; // 0xc
    }; // Size: 0x10
    Params_SetGlobalPitchModulation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PitchModulation = (float)PitchModulation;
    params.TimeSec = (float)TimeSec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UGameplayStatics* UGameplayStatics::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameplayStatics");
    return (UGameplayStatics*)res;
}
void UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(UObject* WorldContextObject) {}
bool UGameplayStatics::SuggestProjectileVelocity_CustomArc(UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SuggestProjectileVelocity_CustomArc"));
    struct Params_SuggestProjectileVelocity_CustomArc {
        UObject* WorldContextObject; // 0x0
        FVector OutLaunchVelocity; // 0x8
        FVector StartPos; // 0x14
        FVector EndPos; // 0x20
        float OverrideGravityZ; // 0x2c
        float ArcParam; // 0x30
        bool ReturnValue; // 0x34
    }; // Size: 0x35
    Params_SuggestProjectileVelocity_CustomArc params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OutLaunchVelocity = (FVector)OutLaunchVelocity;
    params.StartPos = (FVector)StartPos;
    params.EndPos = (FVector)EndPos;
    params.OverrideGravityZ = (float)OverrideGravityZ;
    params.ArcParam = (float)ArcParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutLaunchVelocity = params.OutLaunchVelocity;
    return (bool)params.ReturnValue;
}
void UGameplayStatics::UnloadStreamLevel(UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.UnloadStreamLevel"));
    struct Params_UnloadStreamLevel {
        UObject* WorldContextObject; // 0x0
        FName LevelName; // 0x8
        FLatentActionInfo LatentInfo; // 0x10
        bool bShouldBlockOnUnload; // 0x28
    }; // Size: 0x29
    Params_UnloadStreamLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelName = (FName)LevelName;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.bShouldBlockOnUnload = (bool)bShouldBlockOnUnload;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UGameplayStatics::ProjectWorldToScreen(APlayerController* Player, FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ProjectWorldToScreen"));
    struct Params_ProjectWorldToScreen {
        APlayerController* Player; // 0x0
        FVector WorldPosition; // 0x8
        FVector2D ScreenPosition; // 0x14
        bool bPlayerViewportRelative; // 0x1c
        bool ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_ProjectWorldToScreen params{};
    params.Player = (APlayerController*)Player;
    params.WorldPosition = (FVector)WorldPosition;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.bPlayerViewportRelative = (bool)bPlayerViewportRelative;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WorldPosition = params.WorldPosition;
    ScreenPosition = params.ScreenPosition;
    return (bool)params.ReturnValue;
}
void UGameplayStatics::OpenLevelBySoftObjectPtr(UObject* WorldContextObject) {}
UAudioComponent* UGameplayStatics::SpawnSoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnSoundAtLocation"));
    struct Params_SpawnSoundAtLocation {
        UObject* WorldContextObject; // 0x0
        USoundBase* Sound; // 0x8
        FVector Location; // 0x10
        FRotator Rotation; // 0x1c
        float VolumeMultiplier; // 0x28
        float PitchMultiplier; // 0x2c
        float StartTime; // 0x30
        char pad_34[0x4];
        USoundAttenuation* AttenuationSettings; // 0x38
        USoundConcurrency* ConcurrencySettings; // 0x40
        bool bAutoDestroy; // 0x48
        char pad_49[0x7];
        UAudioComponent* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_SpawnSoundAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sound = (USoundBase*)Sound;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (USoundAttenuation*)AttenuationSettings;
    params.ConcurrencySettings = (USoundConcurrency*)ConcurrencySettings;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAudioComponent*)params.ReturnValue;
}
UAudioComponent* UGameplayStatics::SpawnSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnSound2D"));
    struct Params_SpawnSound2D {
        UObject* WorldContextObject; // 0x0
        USoundBase* Sound; // 0x8
        float VolumeMultiplier; // 0x10
        float PitchMultiplier; // 0x14
        float StartTime; // 0x18
        char pad_1c[0x4];
        USoundConcurrency* ConcurrencySettings; // 0x20
        bool bPersistAcrossLevelTransition; // 0x28
        bool bAutoDestroy; // 0x29
        char pad_2a[0x6];
        UAudioComponent* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_SpawnSound2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sound = (USoundBase*)Sound;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.ConcurrencySettings = (USoundConcurrency*)ConcurrencySettings;
    params.bPersistAcrossLevelTransition = (bool)bPersistAcrossLevelTransition;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAudioComponent*)params.ReturnValue;
}
UObject* UGameplayStatics::SpawnObject(UClass* ObjectClass, UObject* Outer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnObject"));
    struct Params_SpawnObject {
        UClass* ObjectClass; // 0x0
        UObject* Outer; // 0x8
        UObject* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SpawnObject params{};
    params.ObjectClass = (UClass*)ObjectClass;
    params.Outer = (UObject*)Outer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
APlayerController* UGameplayStatics::GetPlayerController(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlayerController"));
    struct Params_GetPlayerController {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        APlayerController* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPlayerController params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
UForceFeedbackComponent* UGameplayStatics::SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnForceFeedbackAttached"));
    struct Params_SpawnForceFeedbackAttached {
        UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
        USceneComponent* AttachToComponent; // 0x8
        FName AttachPointName; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        EAttachLocation::Type LocationType; // 0x30
        bool bStopWhenAttachedToDestroyed; // 0x31
        bool bLooping; // 0x32
        char pad_33[0x1];
        float IntensityMultiplier; // 0x34
        float StartTime; // 0x38
        char pad_3c[0x4];
        UForceFeedbackAttenuation* AttenuationSettings; // 0x40
        bool bAutoDestroy; // 0x48
        char pad_49[0x7];
        UForceFeedbackComponent* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_SpawnForceFeedbackAttached params{};
    params.ForceFeedbackEffect = (UForceFeedbackEffect*)ForceFeedbackEffect;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.bLooping = (bool)bLooping;
    params.IntensityMultiplier = (float)IntensityMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (UForceFeedbackAttenuation*)AttenuationSettings;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UForceFeedbackComponent*)params.ReturnValue;
}
float UGameplayStatics::GetAudioTimeSeconds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetAudioTimeSeconds"));
    struct Params_GetAudioTimeSeconds {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAudioTimeSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGameplayStatics::LoadStreamLevel(UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.LoadStreamLevel"));
    struct Params_LoadStreamLevel {
        UObject* WorldContextObject; // 0x0
        FName LevelName; // 0x8
        bool bMakeVisibleAfterLoad; // 0x10
        bool bShouldBlockOnLoad; // 0x11
        char pad_12[0x6];
        FLatentActionInfo LatentInfo; // 0x18
    }; // Size: 0x30
    Params_LoadStreamLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelName = (FName)LevelName;
    params.bMakeVisibleAfterLoad = (bool)bMakeVisibleAfterLoad;
    params.bShouldBlockOnLoad = (bool)bShouldBlockOnLoad;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UForceFeedbackComponent* UGameplayStatics::SpawnForceFeedbackAtLocation(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnForceFeedbackAtLocation"));
    struct Params_SpawnForceFeedbackAtLocation {
        UObject* WorldContextObject; // 0x0
        UForceFeedbackEffect* ForceFeedbackEffect; // 0x8
        FVector Location; // 0x10
        FRotator Rotation; // 0x1c
        bool bLooping; // 0x28
        char pad_29[0x3];
        float IntensityMultiplier; // 0x2c
        float StartTime; // 0x30
        char pad_34[0x4];
        UForceFeedbackAttenuation* AttenuationSettings; // 0x38
        bool bAutoDestroy; // 0x40
        char pad_41[0x7];
        UForceFeedbackComponent* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_SpawnForceFeedbackAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ForceFeedbackEffect = (UForceFeedbackEffect*)ForceFeedbackEffect;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.bLooping = (bool)bLooping;
    params.IntensityMultiplier = (float)IntensityMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (UForceFeedbackAttenuation*)AttenuationSettings;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UForceFeedbackComponent*)params.ReturnValue;
}
UParticleSystemComponent* UGameplayStatics::SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnEmitterAttached"));
    struct Params_SpawnEmitterAttached {
        UParticleSystem* EmitterTemplate; // 0x0
        USceneComponent* AttachToComponent; // 0x8
        FName AttachPointName; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        FVector Scale; // 0x30
        EAttachLocation::Type LocationType; // 0x3c
        bool bAutoDestroy; // 0x3d
        EPSCPoolMethod PoolingMethod; // 0x3e
        bool bAutoActivate; // 0x3f
        UParticleSystemComponent* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_SpawnEmitterAttached params{};
    params.EmitterTemplate = (UParticleSystem*)EmitterTemplate;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.bAutoDestroy = (bool)bAutoDestroy;
    params.PoolingMethod = (EPSCPoolMethod)PoolingMethod;
    params.bAutoActivate = (bool)bAutoActivate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UParticleSystemComponent*)params.ReturnValue;
}
bool UGameplayStatics::HasLaunchOption(FString OptionToCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.HasLaunchOption"));
    struct Params_HasLaunchOption {
        FString OptionToCheck; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasLaunchOption params{};
    params.OptionToCheck = (FString)OptionToCheck;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UParticleSystemComponent* UGameplayStatics::SpawnEmitterAtLocation(UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnEmitterAtLocation"));
    struct Params_SpawnEmitterAtLocation {
        UObject* WorldContextObject; // 0x0
        UParticleSystem* EmitterTemplate; // 0x8
        FVector Location; // 0x10
        FRotator Rotation; // 0x1c
        FVector Scale; // 0x28
        bool bAutoDestroy; // 0x34
        EPSCPoolMethod PoolingMethod; // 0x35
        bool bAutoActivateSystem; // 0x36
        char pad_37[0x1];
        UParticleSystemComponent* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnEmitterAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.EmitterTemplate = (UParticleSystem*)EmitterTemplate;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    params.bAutoDestroy = (bool)bAutoDestroy;
    params.PoolingMethod = (EPSCPoolMethod)PoolingMethod;
    params.bAutoActivateSystem = (bool)bAutoActivateSystem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UParticleSystemComponent*)params.ReturnValue;
}
UAudioComponent* UGameplayStatics::SpawnDialogueAttached(UDialogueWave* Dialogue, FDialogueContext& Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnDialogueAttached"));
    struct Params_SpawnDialogueAttached {
        UDialogueWave* Dialogue; // 0x0
        FDialogueContext Context; // 0x8
        USceneComponent* AttachToComponent; // 0x20
        FName AttachPointName; // 0x28
        FVector Location; // 0x30
        FRotator Rotation; // 0x3c
        EAttachLocation::Type LocationType; // 0x48
        bool bStopWhenAttachedToDestroyed; // 0x49
        char pad_4a[0x2];
        float VolumeMultiplier; // 0x4c
        float PitchMultiplier; // 0x50
        float StartTime; // 0x54
        USoundAttenuation* AttenuationSettings; // 0x58
        bool bAutoDestroy; // 0x60
        char pad_61[0x7];
        UAudioComponent* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnDialogueAttached params{};
    params.Dialogue = (UDialogueWave*)Dialogue;
    params.Context = (FDialogueContext)Context;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (USoundAttenuation*)AttenuationSettings;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
    return (UAudioComponent*)params.ReturnValue;
}
UAudioComponent* UGameplayStatics::SpawnDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnDialogueAtLocation"));
    struct Params_SpawnDialogueAtLocation {
        UObject* WorldContextObject; // 0x0
        UDialogueWave* Dialogue; // 0x8
        FDialogueContext Context; // 0x10
        FVector Location; // 0x28
        FRotator Rotation; // 0x34
        float VolumeMultiplier; // 0x40
        float PitchMultiplier; // 0x44
        float StartTime; // 0x48
        char pad_4c[0x4];
        USoundAttenuation* AttenuationSettings; // 0x50
        bool bAutoDestroy; // 0x58
        char pad_59[0x7];
        UAudioComponent* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_SpawnDialogueAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Dialogue = (UDialogueWave*)Dialogue;
    params.Context = (FDialogueContext)Context;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (USoundAttenuation*)AttenuationSettings;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
    return (UAudioComponent*)params.ReturnValue;
}
void UGameplayStatics::PlaySound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor, bool bIsUISound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PlaySound2D"));
    struct Params_PlaySound2D {
        UObject* WorldContextObject; // 0x0
        USoundBase* Sound; // 0x8
        float VolumeMultiplier; // 0x10
        float PitchMultiplier; // 0x14
        float StartTime; // 0x18
        char pad_1c[0x4];
        USoundConcurrency* ConcurrencySettings; // 0x20
        AActor* OwningActor; // 0x28
        bool bIsUISound; // 0x30
    }; // Size: 0x31
    Params_PlaySound2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sound = (USoundBase*)Sound;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.ConcurrencySettings = (USoundConcurrency*)ConcurrencySettings;
    params.OwningActor = (AActor*)OwningActor;
    params.bIsUISound = (bool)bIsUISound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::SetBaseSoundMix(UObject* WorldContextObject, USoundMix* InSoundMix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetBaseSoundMix"));
    struct Params_SetBaseSoundMix {
        UObject* WorldContextObject; // 0x0
        USoundMix* InSoundMix; // 0x8
    }; // Size: 0x10
    Params_SetBaseSoundMix params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundMix = (USoundMix*)InSoundMix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAudioComponent* UGameplayStatics::SpawnDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnDialogue2D"));
    struct Params_SpawnDialogue2D {
        UObject* WorldContextObject; // 0x0
        UDialogueWave* Dialogue; // 0x8
        FDialogueContext Context; // 0x10
        float VolumeMultiplier; // 0x28
        float PitchMultiplier; // 0x2c
        float StartTime; // 0x30
        bool bAutoDestroy; // 0x34
        char pad_35[0x3];
        UAudioComponent* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnDialogue2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Dialogue = (UDialogueWave*)Dialogue;
    params.Context = (FDialogueContext)Context;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
    return (UAudioComponent*)params.ReturnValue;
}
void UGameplayStatics::SetSubtitlesEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetSubtitlesEnabled"));
    struct Params_SetSubtitlesEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetSubtitlesEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UDecalComponent* UGameplayStatics::SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnDecalAttached"));
    struct Params_SpawnDecalAttached {
        UMaterialInterface* DecalMaterial; // 0x0
        FVector DecalSize; // 0x8
        char pad_14[0x4];
        USceneComponent* AttachToComponent; // 0x18
        FName AttachPointName; // 0x20
        FVector Location; // 0x28
        FRotator Rotation; // 0x34
        EAttachLocation::Type LocationType; // 0x40
        char pad_41[0x3];
        float LifeSpan; // 0x44
        UDecalComponent* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_SpawnDecalAttached params{};
    params.DecalMaterial = (UMaterialInterface*)DecalMaterial;
    params.DecalSize = (FVector)DecalSize;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.LifeSpan = (float)LifeSpan;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDecalComponent*)params.ReturnValue;
}
UDecalComponent* UGameplayStatics::SpawnDecalAtLocation(UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SpawnDecalAtLocation"));
    struct Params_SpawnDecalAtLocation {
        UObject* WorldContextObject; // 0x0
        UMaterialInterface* DecalMaterial; // 0x8
        FVector DecalSize; // 0x10
        FVector Location; // 0x1c
        FRotator Rotation; // 0x28
        float LifeSpan; // 0x34
        UDecalComponent* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnDecalAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DecalMaterial = (UMaterialInterface*)DecalMaterial;
    params.DecalSize = (FVector)DecalSize;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.LifeSpan = (float)LifeSpan;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDecalComponent*)params.ReturnValue;
}
FVector UGameplayStatics::RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.RebaseZeroOriginOntoLocal"));
    struct Params_RebaseZeroOriginOntoLocal {
        UObject* WorldContextObject; // 0x0
        FVector WorldLocation; // 0x8
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_RebaseZeroOriginOntoLocal params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WorldLocation = (FVector)WorldLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UGameplayStatics::SetWorldTimeDilation(UWorld* World, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetWorldTimeDilation"));
    struct Params_SetWorldTimeDilation {
        UWorld* World; // 0x0
        float TimeDilation; // 0x8
    }; // Size: 0xc
    Params_SetWorldTimeDilation params{};
    params.World = (UWorld*)World;
    params.TimeDilation = (float)TimeDilation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
USaveGame* UGameplayStatics::LoadGameFromSlot(FString SlotName, int32_t UserIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.LoadGameFromSlot"));
    struct Params_LoadGameFromSlot {
        FString SlotName; // 0x0
        int32_t UserIndex; // 0x10
        char pad_14[0x4];
        USaveGame* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_LoadGameFromSlot params{};
    params.SlotName = (FString)SlotName;
    params.UserIndex = (int32_t)UserIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveGame*)params.ReturnValue;
}
void UGameplayStatics::SetWorldOriginLocation(UObject* WorldContextObject, FIntVector NewLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetWorldOriginLocation"));
    struct Params_SetWorldOriginLocation {
        UObject* WorldContextObject; // 0x0
        FIntVector NewLocation; // 0x8
    }; // Size: 0x14
    Params_SetWorldOriginLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NewLocation = (FIntVector)NewLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetGlobalTimeDilation"));
    struct Params_SetGlobalTimeDilation {
        UObject* WorldContextObject; // 0x0
        float TimeDilation; // 0x8
    }; // Size: 0xc
    Params_SetGlobalTimeDilation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TimeDilation = (float)TimeDilation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
APlayerCameraManager* UGameplayStatics::GetPlayerCameraManager(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlayerCameraManager"));
    struct Params_GetPlayerCameraManager {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        APlayerCameraManager* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPlayerCameraManager params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APlayerCameraManager*)params.ReturnValue;
}
void UGameplayStatics::SetViewportMouseCaptureMode(UObject* WorldContextObject, EMouseCaptureMode MouseCaptureMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetViewportMouseCaptureMode"));
    struct Params_SetViewportMouseCaptureMode {
        UObject* WorldContextObject; // 0x0
        EMouseCaptureMode MouseCaptureMode; // 0x8
    }; // Size: 0x9
    Params_SetViewportMouseCaptureMode params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.MouseCaptureMode = (EMouseCaptureMode)MouseCaptureMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UGameplayStatics::GetPlatformName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlatformName"));
    struct Params_GetPlatformName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlatformName params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UGameplayStatics::SetSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetSoundMixClassOverride"));
    struct Params_SetSoundMixClassOverride {
        UObject* WorldContextObject; // 0x0
        USoundMix* InSoundMixModifier; // 0x8
        USoundClass* InSoundClass; // 0x10
        float Volume; // 0x18
        float Pitch; // 0x1c
        float FadeInTime; // 0x20
        bool bApplyToChildren; // 0x24
    }; // Size: 0x25
    Params_SetSoundMixClassOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundMixModifier = (USoundMix*)InSoundMixModifier;
    params.InSoundClass = (USoundClass*)InSoundClass;
    params.Volume = (float)Volume;
    params.Pitch = (float)Pitch;
    params.FadeInTime = (float)FadeInTime;
    params.bApplyToChildren = (bool)bApplyToChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
APawn* UGameplayStatics::GetPlayerPawn(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlayerPawn"));
    struct Params_GetPlayerPawn {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        APawn* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPlayerPawn params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
void UGameplayStatics::SetSoundClassDistanceScale(UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetSoundClassDistanceScale"));
    struct Params_SetSoundClassDistanceScale {
        UObject* WorldContextObject; // 0x0
        USoundClass* SoundClass; // 0x8
        float DistanceAttenuationScale; // 0x10
        float TimeSec; // 0x14
    }; // Size: 0x18
    Params_SetSoundClassDistanceScale params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundClass = (USoundClass*)SoundClass;
    params.DistanceAttenuationScale = (float)DistanceAttenuationScale;
    params.TimeSec = (float)TimeSec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UGameplayStatics::HasOption(FString OPTIONS, FString InKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.HasOption"));
    struct Params_HasOption {
        FString OPTIONS; // 0x0
        FString InKey; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_HasOption params{};
    params.OPTIONS = (FString)OPTIONS;
    params.InKey = (FString)InKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameplayStatics::SetPlayerControllerID(APlayerController* Player, int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetPlayerControllerID"));
    struct Params_SetPlayerControllerID {
        APlayerController* Player; // 0x0
        int32_t ControllerId; // 0x8
    }; // Size: 0xc
    Params_SetPlayerControllerID params{};
    params.Player = (APlayerController*)Player;
    params.ControllerId = (int32_t)ControllerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::SetMaxAudioChannelsScaled(UObject* WorldContextObject, float MaxChannelCountScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetMaxAudioChannelsScaled"));
    struct Params_SetMaxAudioChannelsScaled {
        UObject* WorldContextObject; // 0x0
        float MaxChannelCountScale; // 0x8
    }; // Size: 0xc
    Params_SetMaxAudioChannelsScaled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.MaxChannelCountScale = (float)MaxChannelCountScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::SetGlobalListenerFocusParameters(UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetGlobalListenerFocusParameters"));
    struct Params_SetGlobalListenerFocusParameters {
        UObject* WorldContextObject; // 0x0
        float FocusAzimuthScale; // 0x8
        float NonFocusAzimuthScale; // 0xc
        float FocusDistanceScale; // 0x10
        float NonFocusDistanceScale; // 0x14
        float FocusVolumeScale; // 0x18
        float NonFocusVolumeScale; // 0x1c
        float FocusPriorityScale; // 0x20
        float NonFocusPriorityScale; // 0x24
    }; // Size: 0x28
    Params_SetGlobalListenerFocusParameters params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FocusAzimuthScale = (float)FocusAzimuthScale;
    params.NonFocusAzimuthScale = (float)NonFocusAzimuthScale;
    params.FocusDistanceScale = (float)FocusDistanceScale;
    params.NonFocusDistanceScale = (float)NonFocusDistanceScale;
    params.FocusVolumeScale = (float)FocusVolumeScale;
    params.NonFocusVolumeScale = (float)NonFocusVolumeScale;
    params.FocusPriorityScale = (float)FocusPriorityScale;
    params.NonFocusPriorityScale = (float)NonFocusPriorityScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FVector UGameplayStatics::RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.RebaseLocalOriginOntoZero"));
    struct Params_RebaseLocalOriginOntoZero {
        UObject* WorldContextObject; // 0x0
        FVector WorldLocation; // 0x8
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_RebaseLocalOriginOntoZero params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WorldLocation = (FVector)WorldLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UGameplayStatics::SetGamePaused(UObject* WorldContextObject, bool bPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetGamePaused"));
    struct Params_SetGamePaused {
        UObject* WorldContextObject; // 0x0
        bool bPaused; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetGamePaused params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bPaused = (bool)bPaused;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameplayStatics::SetEnableWorldRendering(UObject* WorldContextObject, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetEnableWorldRendering"));
    struct Params_SetEnableWorldRendering {
        UObject* WorldContextObject; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_SetEnableWorldRendering params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UClass* UGameplayStatics::GetObjectClass(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetObjectClass"));
    struct Params_GetObjectClass {
        UObject* Object; // 0x0
        UClass* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetObjectClass params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
void UGameplayStatics::SetForceDisableSplitscreen(UObject* WorldContextObject, bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SetForceDisableSplitscreen"));
    struct Params_SetForceDisableSplitscreen {
        UObject* WorldContextObject; // 0x0
        bool bDisable; // 0x8
    }; // Size: 0x9
    Params_SetForceDisableSplitscreen params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bDisable = (bool)bDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UGameplayStatics::SaveGameToSlot(USaveGame* SaveGameObject, FString SlotName, int32_t UserIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.SaveGameToSlot"));
    struct Params_SaveGameToSlot {
        USaveGame* SaveGameObject; // 0x0
        FString SlotName; // 0x8
        int32_t UserIndex; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SaveGameToSlot params{};
    params.SaveGameObject = (USaveGame*)SaveGameObject;
    params.SlotName = (FString)SlotName;
    params.UserIndex = (int32_t)UserIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameplayStatics::GetAllActorsOfClassWithTag(UObject* WorldContextObject, UClass* ActorClass, FName Tag, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetAllActorsOfClassWithTag"));
    struct Params_GetAllActorsOfClassWithTag {
        UObject* WorldContextObject; // 0x0
        UClass* ActorClass; // 0x8
        FName Tag; // 0x10
        TArray<AActor*> OutActors; // 0x18
    }; // Size: 0x28
    Params_GetAllActorsOfClassWithTag params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorClass = (UClass*)ActorClass;
    params.Tag = (FName)Tag;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
FString UGameplayStatics::GetCurrentLevelName(UObject* WorldContextObject, bool bRemovePrefixString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetCurrentLevelName"));
    struct Params_GetCurrentLevelName {
        UObject* WorldContextObject; // 0x0
        bool bRemovePrefixString; // 0x8
        char pad_9[0x7];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetCurrentLevelName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bRemovePrefixString = (bool)bRemovePrefixString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UGameplayStatics::RemovePlayer(APlayerController* Player, bool bDestroyPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.RemovePlayer"));
    struct Params_RemovePlayer {
        APlayerController* Player; // 0x0
        bool bDestroyPawn; // 0x8
    }; // Size: 0x9
    Params_RemovePlayer params{};
    params.Player = (APlayerController*)Player;
    params.bDestroyPawn = (bool)bDestroyPawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::PushSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PushSoundMixModifier"));
    struct Params_PushSoundMixModifier {
        UObject* WorldContextObject; // 0x0
        USoundMix* InSoundMixModifier; // 0x8
    }; // Size: 0x10
    Params_PushSoundMixModifier params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundMixModifier = (USoundMix*)InSoundMixModifier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::PrimeAllSoundsInSoundClass(USoundClass* InSoundClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PrimeAllSoundsInSoundClass"));
    struct Params_PrimeAllSoundsInSoundClass {
        USoundClass* InSoundClass; // 0x0
    }; // Size: 0x8
    Params_PrimeAllSoundsInSoundClass params{};
    params.InSoundClass = (USoundClass*)InSoundClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::PopSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PopSoundMixModifier"));
    struct Params_PopSoundMixModifier {
        UObject* WorldContextObject; // 0x0
        USoundMix* InSoundMixModifier; // 0x8
    }; // Size: 0x10
    Params_PopSoundMixModifier params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundMixModifier = (USoundMix*)InSoundMixModifier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::OpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString OPTIONS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.OpenLevel"));
    struct Params_OpenLevel {
        UObject* WorldContextObject; // 0x0
        FName LevelName; // 0x8
        bool bAbsolute; // 0x10
        char pad_11[0x7];
        FString OPTIONS; // 0x18
    }; // Size: 0x28
    Params_OpenLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelName = (FName)LevelName;
    params.bAbsolute = (bool)bAbsolute;
    params.OPTIONS = (FString)OPTIONS;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::PlayWorldCameraShake(UObject* WorldContextObject, UClass* Shake, FVector epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PlayWorldCameraShake"));
    struct Params_PlayWorldCameraShake {
        UObject* WorldContextObject; // 0x0
        UClass* Shake; // 0x8
        FVector epicenter; // 0x10
        float InnerRadius; // 0x1c
        float OuterRadius; // 0x20
        float Falloff; // 0x24
        bool bOrientShakeTowardsEpicenter; // 0x28
    }; // Size: 0x29
    Params_PlayWorldCameraShake params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Shake = (UClass*)Shake;
    params.epicenter = (FVector)epicenter;
    params.InnerRadius = (float)InnerRadius;
    params.OuterRadius = (float)OuterRadius;
    params.Falloff = (float)Falloff;
    params.bOrientShakeTowardsEpicenter = (bool)bOrientShakeTowardsEpicenter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::PlaySoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* OwningActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PlaySoundAtLocation"));
    struct Params_PlaySoundAtLocation {
        UObject* WorldContextObject; // 0x0
        USoundBase* Sound; // 0x8
        FVector Location; // 0x10
        FRotator Rotation; // 0x1c
        float VolumeMultiplier; // 0x28
        float PitchMultiplier; // 0x2c
        float StartTime; // 0x30
        char pad_34[0x4];
        USoundAttenuation* AttenuationSettings; // 0x38
        USoundConcurrency* ConcurrencySettings; // 0x40
        AActor* OwningActor; // 0x48
    }; // Size: 0x50
    Params_PlaySoundAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sound = (USoundBase*)Sound;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.AttenuationSettings = (USoundAttenuation*)AttenuationSettings;
    params.ConcurrencySettings = (USoundConcurrency*)ConcurrencySettings;
    params.OwningActor = (AActor*)OwningActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UGameplayStatics::GetRealTimeSeconds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetRealTimeSeconds"));
    struct Params_GetRealTimeSeconds {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRealTimeSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGameplayStatics::PlayDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.PlayDialogue2D"));
    struct Params_PlayDialogue2D {
        UObject* WorldContextObject; // 0x0
        UDialogueWave* Dialogue; // 0x8
        FDialogueContext Context; // 0x10
        float VolumeMultiplier; // 0x28
        float PitchMultiplier; // 0x2c
        float StartTime; // 0x30
    }; // Size: 0x34
    Params_PlayDialogue2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Dialogue = (UDialogueWave*)Dialogue;
    params.Context = (FDialogueContext)Context;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
}
FString UGameplayStatics::ParseOption(FString OPTIONS, FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ParseOption"));
    struct Params_ParseOption {
        FString OPTIONS; // 0x0
        FString Key; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_ParseOption params{};
    params.OPTIONS = (FString)OPTIONS;
    params.Key = (FString)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FHitResult UGameplayStatics::MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32_t HitItem, int32_t ElementIndex, int32_t FaceIndex, FVector TraceStart, FVector TraceEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.MakeHitResult"));
    struct Params_MakeHitResult {
        bool bBlockingHit; // 0x0
        bool bInitialOverlap; // 0x1
        char pad_2[0x2];
        float Time; // 0x4
        float Distance; // 0x8
        FVector Location; // 0xc
        FVector ImpactPoint; // 0x18
        FVector Normal; // 0x24
        FVector ImpactNormal; // 0x30
        char pad_3c[0x4];
        UPhysicalMaterial* PhysMat; // 0x40
        AActor* HitActor; // 0x48
        UPrimitiveComponent* HitComponent; // 0x50
        FName HitBoneName; // 0x58
        int32_t HitItem; // 0x60
        int32_t ElementIndex; // 0x64
        int32_t FaceIndex; // 0x68
        FVector TraceStart; // 0x6c
        FVector TraceEnd; // 0x78
        FHitResult ReturnValue; // 0x84
    }; // Size: 0x10c
    Params_MakeHitResult params{};
    params.bBlockingHit = (bool)bBlockingHit;
    params.bInitialOverlap = (bool)bInitialOverlap;
    params.Time = (float)Time;
    params.Distance = (float)Distance;
    params.Location = (FVector)Location;
    params.ImpactPoint = (FVector)ImpactPoint;
    params.Normal = (FVector)Normal;
    params.ImpactNormal = (FVector)ImpactNormal;
    params.PhysMat = (UPhysicalMaterial*)PhysMat;
    params.HitActor = (AActor*)HitActor;
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.HitBoneName = (FName)HitBoneName;
    params.HitItem = (int32_t)HitItem;
    params.ElementIndex = (int32_t)ElementIndex;
    params.FaceIndex = (int32_t)FaceIndex;
    params.TraceStart = (FVector)TraceStart;
    params.TraceEnd = (FVector)TraceEnd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FHitResult)params.ReturnValue;
}
float UGameplayStatics::GetWorldDeltaSeconds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetWorldDeltaSeconds"));
    struct Params_GetWorldDeltaSeconds {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetWorldDeltaSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGameplayStatics::GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetViewProjectionMatrix"));
    struct Params_GetViewProjectionMatrix {
        FMinimalViewInfo DesiredView; // 0x0
        FMatrix ViewMatrix; // 0x680
        FMatrix ProjectionMatrix; // 0x6c0
        FMatrix ViewProjectionMatrix; // 0x700
    }; // Size: 0x740
    Params_GetViewProjectionMatrix params{};
    params.DesiredView = (FMinimalViewInfo)DesiredView;
    params.ViewMatrix = (FMatrix)ViewMatrix;
    params.ProjectionMatrix = (FMatrix)ProjectionMatrix;
    params.ViewProjectionMatrix = (FMatrix)ViewProjectionMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ViewMatrix = params.ViewMatrix;
    ViewProjectionMatrix = params.ViewProjectionMatrix;
    ProjectionMatrix = params.ProjectionMatrix;
}
void UGameplayStatics::LoadStreamLevelBySoftObjectPtr(UObject* WorldContextObject) {}
FIntVector UGameplayStatics::GetWorldOriginLocation(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetWorldOriginLocation"));
    struct Params_GetWorldOriginLocation {
        UObject* WorldContextObject; // 0x0
        FIntVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetWorldOriginLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntVector)params.ReturnValue;
}
bool UGameplayStatics::DeleteGameInSlot(FString SlotName, int32_t UserIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.DeleteGameInSlot"));
    struct Params_DeleteGameInSlot {
        FString SlotName; // 0x0
        int32_t UserIndex; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_DeleteGameInSlot params{};
    params.SlotName = (FString)SlotName;
    params.UserIndex = (int32_t)UserIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::IsSplitscreenForceDisabled(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.IsSplitscreenForceDisabled"));
    struct Params_IsSplitscreenForceDisabled {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSplitscreenForceDisabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::IsGamePaused(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.IsGamePaused"));
    struct Params_IsGamePaused {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsGamePaused params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UGameplayStatics::GrassOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GrassOverlappingSphereCount"));
    struct Params_GrassOverlappingSphereCount {
        UObject* WorldContextObject; // 0x0
        UStaticMesh* StaticMesh; // 0x8
        FVector CenterPosition; // 0x10
        float Radius; // 0x1c
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_GrassOverlappingSphereCount params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.StaticMesh = (UStaticMesh*)StaticMesh;
    params.CenterPosition = (FVector)CenterPosition;
    params.Radius = (float)Radius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EMouseCaptureMode UGameplayStatics::GetViewportMouseCaptureMode(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetViewportMouseCaptureMode"));
    struct Params_GetViewportMouseCaptureMode {
        UObject* WorldContextObject; // 0x0
        EMouseCaptureMode ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetViewportMouseCaptureMode params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EMouseCaptureMode)params.ReturnValue;
}
float UGameplayStatics::GetUnpausedTimeSeconds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetUnpausedTimeSeconds"));
    struct Params_GetUnpausedTimeSeconds {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetUnpausedTimeSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UGameplayStatics::GetTimeSeconds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetTimeSeconds"));
    struct Params_GetTimeSeconds {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTimeSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UGameplayStatics::GetTexturesYetToStream(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetTexturesYetToStream"));
    struct Params_GetTexturesYetToStream {
        UObject* WorldContextObject; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTexturesYetToStream params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EPhysicalSurface UGameplayStatics::GetSurfaceType(FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetSurfaceType"));
    struct Params_GetSurfaceType {
        FHitResult Hit; // 0x0
        EPhysicalSurface ReturnValue; // 0x88
    }; // Size: 0x89
    Params_GetSurfaceType params{};
    params.Hit = (FHitResult)Hit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Hit = params.Hit;
    return (EPhysicalSurface)params.ReturnValue;
}
ULevelStreaming* UGameplayStatics::GetStreamingLevel(UObject* WorldContextObject, FName PackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetStreamingLevel"));
    struct Params_GetStreamingLevel {
        UObject* WorldContextObject; // 0x0
        FName PackageName; // 0x8
        ULevelStreaming* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetStreamingLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PackageName = (FName)PackageName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevelStreaming*)params.ReturnValue;
}
int32_t UGameplayStatics::GetPlayerControllerID(APlayerController* Player) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlayerControllerID"));
    struct Params_GetPlayerControllerID {
        APlayerController* Player; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlayerControllerID params{};
    params.Player = (APlayerController*)Player;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
APlayerController* UGameplayStatics::GetPlayerControllerFromID(UObject* WorldContextObject, int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlayerControllerFromID"));
    struct Params_GetPlayerControllerFromID {
        UObject* WorldContextObject; // 0x0
        int32_t ControllerId; // 0x8
        char pad_c[0x4];
        APlayerController* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPlayerControllerFromID params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ControllerId = (int32_t)ControllerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
bool UGameplayStatics::DoesSaveGameExist(FString SlotName, int32_t UserIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.DoesSaveGameExist"));
    struct Params_DoesSaveGameExist {
        FString SlotName; // 0x0
        int32_t UserIndex; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_DoesSaveGameExist params{};
    params.SlotName = (FString)SlotName;
    params.UserIndex = (int32_t)UserIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ACharacter* UGameplayStatics::GetPlayerCharacter(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetPlayerCharacter"));
    struct Params_GetPlayerCharacter {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        ACharacter* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPlayerCharacter params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACharacter*)params.ReturnValue;
}
int32_t UGameplayStatics::GetMaxAudioChannelCount(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetMaxAudioChannelCount"));
    struct Params_GetMaxAudioChannelCount {
        UObject* WorldContextObject; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaxAudioChannelCount params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameplayStatics::GetKeyValue(FString Pair, FString& Key, FString& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetKeyValue"));
    struct Params_GetKeyValue {
        FString Pair; // 0x0
        FString Key; // 0x10
        FString Value; // 0x20
    }; // Size: 0x30
    Params_GetKeyValue params{};
    params.Pair = (FString)Pair;
    params.Key = (FString)Key;
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    Value = params.Value;
}
int32_t UGameplayStatics::GetIntOption(FString OPTIONS, FString Key, int32_t DefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetIntOption"));
    struct Params_GetIntOption {
        FString OPTIONS; // 0x0
        FString Key; // 0x10
        int32_t DefaultValue; // 0x20
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_GetIntOption params{};
    params.OPTIONS = (FString)OPTIONS;
    params.Key = (FString)Key;
    params.DefaultValue = (int32_t)DefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UGameplayStatics::GetGlobalTimeDilation(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetGlobalTimeDilation"));
    struct Params_GetGlobalTimeDilation {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetGlobalTimeDilation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AGameStateBase* UGameplayStatics::GetGameState(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetGameState"));
    struct Params_GetGameState {
        UObject* WorldContextObject; // 0x0
        AGameStateBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetGameState params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AGameStateBase*)params.ReturnValue;
}
AGameModeBase* UGameplayStatics::GetGameMode(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetGameMode"));
    struct Params_GetGameMode {
        UObject* WorldContextObject; // 0x0
        AGameModeBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetGameMode params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AGameModeBase*)params.ReturnValue;
}
void UGameplayStatics::ClearSoundMixModifiers(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ClearSoundMixModifiers"));
    struct Params_ClearSoundMixModifiers {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_ClearSoundMixModifiers params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UGameInstance* UGameplayStatics::GetGameInstance(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetGameInstance"));
    struct Params_GetGameInstance {
        UObject* WorldContextObject; // 0x0
        UGameInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetGameInstance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameInstance*)params.ReturnValue;
}
bool UGameplayStatics::GetEnableWorldRendering(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetEnableWorldRendering"));
    struct Params_GetEnableWorldRendering {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetEnableWorldRendering params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UReverbEffect* UGameplayStatics::GetCurrentReverbEffect(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetCurrentReverbEffect"));
    struct Params_GetCurrentReverbEffect {
        UObject* WorldContextObject; // 0x0
        UReverbEffect* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCurrentReverbEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UReverbEffect*)params.ReturnValue;
}
bool UGameplayStatics::GetClosestListenerLocation(UObject* WorldContextObject, FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, FVector& ListenerPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetClosestListenerLocation"));
    struct Params_GetClosestListenerLocation {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        float MaximumRange; // 0x14
        bool bAllowAttenuationOverride; // 0x18
        char pad_19[0x3];
        FVector ListenerPosition; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetClosestListenerLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.MaximumRange = (float)MaximumRange;
    params.bAllowAttenuationOverride = (bool)bAllowAttenuationOverride;
    params.ListenerPosition = (FVector)ListenerPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
    ListenerPosition = params.ListenerPosition;
    return (bool)params.ReturnValue;
}
void UGameplayStatics::GetAllActorsWithTag(UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetAllActorsWithTag"));
    struct Params_GetAllActorsWithTag {
        UObject* WorldContextObject; // 0x0
        FName Tag; // 0x8
        TArray<AActor*> OutActors; // 0x10
    }; // Size: 0x20
    Params_GetAllActorsWithTag params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Tag = (FName)Tag;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void UGameplayStatics::GetAllActorsWithInterface(UObject* WorldContextObject, UClass* Interface, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetAllActorsWithInterface"));
    struct Params_GetAllActorsWithInterface {
        UObject* WorldContextObject; // 0x0
        UClass* Interface; // 0x8
        TArray<AActor*> OutActors; // 0x10
    }; // Size: 0x20
    Params_GetAllActorsWithInterface params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Interface = (UClass*)Interface;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void UGameplayStatics::GetAllActorsOfClass(UObject* WorldContextObject, UClass* ActorClass, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetAllActorsOfClass"));
    struct Params_GetAllActorsOfClass {
        UObject* WorldContextObject; // 0x0
        UClass* ActorClass; // 0x8
        TArray<AActor*> OutActors; // 0x10
    }; // Size: 0x20
    Params_GetAllActorsOfClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorClass = (UClass*)ActorClass;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
AActor* UGameplayStatics::GetActorOfClass(UObject* WorldContextObject, UClass* ActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetActorOfClass"));
    struct Params_GetActorOfClass {
        UObject* WorldContextObject; // 0x0
        UClass* ActorClass; // 0x8
        AActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetActorOfClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorClass = (UClass*)ActorClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UGameplayStatics::GetActorArrayBounds(TArray<AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetActorArrayBounds"));
    struct Params_GetActorArrayBounds {
        TArray<AActor*> Actors; // 0x0
        bool bOnlyCollidingComponents; // 0x10
        char pad_11[0x3];
        FVector Center; // 0x14
        FVector BoxExtent; // 0x20
    }; // Size: 0x2c
    Params_GetActorArrayBounds params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.bOnlyCollidingComponents = (bool)bOnlyCollidingComponents;
    params.Center = (FVector)Center;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BoxExtent = params.BoxExtent;
    Actors = params.Actors;
    Center = params.Center;
}
FVector UGameplayStatics::GetActorArrayAverageLocation(TArray<AActor*>& Actors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetActorArrayAverageLocation"));
    struct Params_GetActorArrayAverageLocation {
        TArray<AActor*> Actors; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_GetActorArrayAverageLocation params{};
    params.Actors = (TArray<AActor*>)Actors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Actors = params.Actors;
    return (FVector)params.ReturnValue;
}
void UGameplayStatics::GetAccurateRealTime(int32_t& Seconds, float& PartialSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.GetAccurateRealTime"));
    struct Params_GetAccurateRealTime {
        int32_t Seconds; // 0x0
        float PartialSeconds; // 0x4
    }; // Size: 0x8
    Params_GetAccurateRealTime params{};
    params.Seconds = (int32_t)Seconds;
    params.PartialSeconds = (float)PartialSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PartialSeconds = params.PartialSeconds;
    Seconds = params.Seconds;
}
void UGameplayStatics::FlushLevelStreaming(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.FlushLevelStreaming"));
    struct Params_FlushLevelStreaming {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_FlushLevelStreaming params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
AActor* UGameplayStatics::FinishSpawningActor(AActor* Actor, FTransform& SpawnTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.FinishSpawningActor"));
    struct Params_FinishSpawningActor {
        AActor* Actor; // 0x0
        char pad_8[0x8];
        FTransform SpawnTransform; // 0x10
        AActor* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_FinishSpawningActor params{};
    params.Actor = (AActor*)Actor;
    params.SpawnTransform = (FTransform)SpawnTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpawnTransform = params.SpawnTransform;
    return (AActor*)params.ReturnValue;
}
AActor* UGameplayStatics::FindNearestActor(FVector Origin, TArray<AActor*>& ActorsToCheck, float& Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.FindNearestActor"));
    struct Params_FindNearestActor {
        FVector Origin; // 0x0
        char pad_c[0x4];
        TArray<AActor*> ActorsToCheck; // 0x10
        float Distance; // 0x20
        char pad_24[0x4];
        AActor* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_FindNearestActor params{};
    params.Origin = (FVector)Origin;
    params.ActorsToCheck = (TArray<AActor*>)ActorsToCheck;
    params.Distance = (float)Distance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Distance = params.Distance;
    ActorsToCheck = params.ActorsToCheck;
    return (AActor*)params.ReturnValue;
}
bool UGameplayStatics::FindCollisionUV(FHitResult& Hit, int32_t UVChannel, FVector2D& UV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.FindCollisionUV"));
    struct Params_FindCollisionUV {
        FHitResult Hit; // 0x0
        int32_t UVChannel; // 0x88
        FVector2D UV; // 0x8c
        bool ReturnValue; // 0x94
    }; // Size: 0x95
    Params_FindCollisionUV params{};
    params.Hit = (FHitResult)Hit;
    params.UVChannel = (int32_t)UVChannel;
    params.UV = (FVector2D)UV;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Hit = params.Hit;
    UV = params.UV;
    return (bool)params.ReturnValue;
}
float UGameplayStatics::ApplyPointDamage(AActor* DamagedActor, float BaseDamage, FVector& HitFromDirection, FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, UClass* DamageTypeClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ApplyPointDamage"));
    struct Params_ApplyPointDamage {
        AActor* DamagedActor; // 0x0
        float BaseDamage; // 0x8
        FVector HitFromDirection; // 0xc
        FHitResult HitInfo; // 0x18
        AController* EventInstigator; // 0xa0
        AActor* DamageCauser; // 0xa8
        UClass* DamageTypeClass; // 0xb0
        float ReturnValue; // 0xb8
    }; // Size: 0xbc
    Params_ApplyPointDamage params{};
    params.DamagedActor = (AActor*)DamagedActor;
    params.BaseDamage = (float)BaseDamage;
    params.HitFromDirection = (FVector)HitFromDirection;
    params.HitInfo = (FHitResult)HitInfo;
    params.EventInstigator = (AController*)EventInstigator;
    params.DamageCauser = (AActor*)DamageCauser;
    params.DamageTypeClass = (UClass*)DamageTypeClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitFromDirection = params.HitFromDirection;
    HitInfo = params.HitInfo;
    return (float)params.ReturnValue;
}
void UGameplayStatics::EnableLiveStreaming(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.EnableLiveStreaming"));
    struct Params_EnableLiveStreaming {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnableLiveStreaming params{};
    params.Enable = (bool)Enable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UGameplayStatics::DeprojectScreenToWorld(APlayerController* Player, FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.DeprojectScreenToWorld"));
    struct Params_DeprojectScreenToWorld {
        APlayerController* Player; // 0x0
        FVector2D ScreenPosition; // 0x8
        FVector WorldPosition; // 0x10
        FVector WorldDirection; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_DeprojectScreenToWorld params{};
    params.Player = (APlayerController*)Player;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.WorldPosition = (FVector)WorldPosition;
    params.WorldDirection = (FVector)WorldDirection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScreenPosition = params.ScreenPosition;
    WorldPosition = params.WorldPosition;
    WorldDirection = params.WorldDirection;
    return (bool)params.ReturnValue;
}
void UGameplayStatics::DeactivateReverbEffect(UObject* WorldContextObject, FName TagName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.DeactivateReverbEffect"));
    struct Params_DeactivateReverbEffect {
        UObject* WorldContextObject; // 0x0
        FName TagName; // 0x8
    }; // Size: 0x10
    Params_DeactivateReverbEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TagName = (FName)TagName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAudioComponent* UGameplayStatics::CreateSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.CreateSound2D"));
    struct Params_CreateSound2D {
        UObject* WorldContextObject; // 0x0
        USoundBase* Sound; // 0x8
        float VolumeMultiplier; // 0x10
        float PitchMultiplier; // 0x14
        float StartTime; // 0x18
        char pad_1c[0x4];
        USoundConcurrency* ConcurrencySettings; // 0x20
        bool bPersistAcrossLevelTransition; // 0x28
        bool bAutoDestroy; // 0x29
        char pad_2a[0x6];
        UAudioComponent* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateSound2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sound = (USoundBase*)Sound;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    params.StartTime = (float)StartTime;
    params.ConcurrencySettings = (USoundConcurrency*)ConcurrencySettings;
    params.bPersistAcrossLevelTransition = (bool)bPersistAcrossLevelTransition;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAudioComponent*)params.ReturnValue;
}
USaveGame* UGameplayStatics::CreateSaveGameObject(UClass* SaveGameClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.CreateSaveGameObject"));
    struct Params_CreateSaveGameObject {
        UClass* SaveGameClass; // 0x0
        USaveGame* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateSaveGameObject params{};
    params.SaveGameClass = (UClass*)SaveGameClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveGame*)params.ReturnValue;
}
APlayerController* UGameplayStatics::CreatePlayer(UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.CreatePlayer"));
    struct Params_CreatePlayer {
        UObject* WorldContextObject; // 0x0
        int32_t ControllerId; // 0x8
        bool bSpawnPlayerController; // 0xc
        char pad_d[0x3];
        APlayerController* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreatePlayer params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ControllerId = (int32_t)ControllerId;
    params.bSpawnPlayerController = (bool)bSpawnPlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
void UGameplayStatics::ClearSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ClearSoundMixClassOverride"));
    struct Params_ClearSoundMixClassOverride {
        UObject* WorldContextObject; // 0x0
        USoundMix* InSoundMixModifier; // 0x8
        USoundClass* InSoundClass; // 0x10
        float FadeOutTime; // 0x18
    }; // Size: 0x1c
    Params_ClearSoundMixClassOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundMixModifier = (USoundMix*)InSoundMixModifier;
    params.InSoundClass = (USoundClass*)InSoundClass;
    params.FadeOutTime = (float)FadeOutTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::CancelAsyncLoading() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.CancelAsyncLoading"));
    struct Params_CancelAsyncLoading {
    }; // Size: 0x0
    Params_CancelAsyncLoading params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::BreakHitResult(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial*& PhysMat, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.BreakHitResult"));
    struct Params_BreakHitResult {
        FHitResult Hit; // 0x0
        bool bBlockingHit; // 0x88
        bool bInitialOverlap; // 0x89
        char pad_8a[0x2];
        float Time; // 0x8c
        float Distance; // 0x90
        FVector Location; // 0x94
        FVector ImpactPoint; // 0xa0
        FVector Normal; // 0xac
        FVector ImpactNormal; // 0xb8
        char pad_c4[0x4];
        UPhysicalMaterial* PhysMat; // 0xc8
        AActor* HitActor; // 0xd0
        UPrimitiveComponent* HitComponent; // 0xd8
        FName HitBoneName; // 0xe0
        int32_t HitItem; // 0xe8
        int32_t ElementIndex; // 0xec
        int32_t FaceIndex; // 0xf0
        FVector TraceStart; // 0xf4
        FVector TraceEnd; // 0x100
    }; // Size: 0x10c
    Params_BreakHitResult params{};
    params.Hit = (FHitResult)Hit;
    params.bBlockingHit = (bool)bBlockingHit;
    params.bInitialOverlap = (bool)bInitialOverlap;
    params.Time = (float)Time;
    params.Distance = (float)Distance;
    params.Location = (FVector)Location;
    params.ImpactPoint = (FVector)ImpactPoint;
    params.Normal = (FVector)Normal;
    params.ImpactNormal = (FVector)ImpactNormal;
    params.PhysMat = (UPhysicalMaterial*)PhysMat;
    params.HitActor = (AActor*)HitActor;
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.HitBoneName = (FName)HitBoneName;
    params.HitItem = (int32_t)HitItem;
    params.ElementIndex = (int32_t)ElementIndex;
    params.FaceIndex = (int32_t)FaceIndex;
    params.TraceStart = (FVector)TraceStart;
    params.TraceEnd = (FVector)TraceEnd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceEnd = params.TraceEnd;
    TraceStart = params.TraceStart;
    Normal = params.Normal;
    Hit = params.Hit;
    Time = params.Time;
    bBlockingHit = params.bBlockingHit;
    FaceIndex = params.FaceIndex;
    bInitialOverlap = params.bInitialOverlap;
    Distance = params.Distance;
    Location = params.Location;
    ImpactPoint = params.ImpactPoint;
    ImpactNormal = params.ImpactNormal;
    PhysMat = params.PhysMat;
    HitActor = params.HitActor;
    ElementIndex = params.ElementIndex;
    HitComponent = params.HitComponent;
    HitBoneName = params.HitBoneName;
    HitItem = params.HitItem;
}
bool UGameplayStatics::BlueprintSuggestProjectileVelocity(UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.BlueprintSuggestProjectileVelocity"));
    struct Params_BlueprintSuggestProjectileVelocity {
        UObject* WorldContextObject; // 0x0
        FVector TossVelocity; // 0x8
        FVector StartLocation; // 0x14
        FVector EndLocation; // 0x20
        float LaunchSpeed; // 0x2c
        float OverrideGravityZ; // 0x30
        ESuggestProjVelocityTraceOption::Type TraceOption; // 0x34
        char pad_35[0x3];
        float CollisionRadius; // 0x38
        bool bFavorHighArc; // 0x3c
        bool bDrawDebug; // 0x3d
        bool ReturnValue; // 0x3e
    }; // Size: 0x3f
    Params_BlueprintSuggestProjectileVelocity params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TossVelocity = (FVector)TossVelocity;
    params.StartLocation = (FVector)StartLocation;
    params.EndLocation = (FVector)EndLocation;
    params.LaunchSpeed = (float)LaunchSpeed;
    params.OverrideGravityZ = (float)OverrideGravityZ;
    params.TraceOption = (ESuggestProjVelocityTraceOption::Type)TraceOption;
    params.CollisionRadius = (float)CollisionRadius;
    params.bFavorHighArc = (bool)bFavorHighArc;
    params.bDrawDebug = (bool)bDrawDebug;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TossVelocity = params.TossVelocity;
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, ECollisionChannel TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel"));
    struct Params_Blueprint_PredictProjectilePath_ByTraceChannel {
        UObject* WorldContextObject; // 0x0
        FHitResult OutHit; // 0x8
        TArray<FVector> OutPathPositions; // 0x90
        FVector OutLastTraceDestination; // 0xa0
        FVector StartPos; // 0xac
        FVector LaunchVelocity; // 0xb8
        bool bTracePath; // 0xc4
        char pad_c5[0x3];
        float ProjectileRadius; // 0xc8
        ECollisionChannel TraceChannel; // 0xcc
        bool bTraceComplex; // 0xcd
        char pad_ce[0x2];
        TArray<AActor*> ActorsToIgnore; // 0xd0
        EDrawDebugTrace::Type DrawDebugType; // 0xe0
        char pad_e1[0x3];
        float DrawDebugTime; // 0xe4
        float SimFrequency; // 0xe8
        float MaxSimTime; // 0xec
        float OverrideGravityZ; // 0xf0
        bool ReturnValue; // 0xf4
    }; // Size: 0xf5
    Params_Blueprint_PredictProjectilePath_ByTraceChannel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OutHit = (FHitResult)OutHit;
    params.OutPathPositions = (TArray<FVector>)OutPathPositions;
    params.OutLastTraceDestination = (FVector)OutLastTraceDestination;
    params.StartPos = (FVector)StartPos;
    params.LaunchVelocity = (FVector)LaunchVelocity;
    params.bTracePath = (bool)bTracePath;
    params.ProjectileRadius = (float)ProjectileRadius;
    params.TraceChannel = (ECollisionChannel)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.DrawDebugTime = (float)DrawDebugTime;
    params.SimFrequency = (float)SimFrequency;
    params.MaxSimTime = (float)MaxSimTime;
    params.OverrideGravityZ = (float)OverrideGravityZ;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPathPositions = params.OutPathPositions;
    OutHit = params.OutHit;
    OutLastTraceDestination = params.OutLastTraceDestination;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType"));
    struct Params_Blueprint_PredictProjectilePath_ByObjectType {
        UObject* WorldContextObject; // 0x0
        FHitResult OutHit; // 0x8
        TArray<FVector> OutPathPositions; // 0x90
        FVector OutLastTraceDestination; // 0xa0
        FVector StartPos; // 0xac
        FVector LaunchVelocity; // 0xb8
        bool bTracePath; // 0xc4
        char pad_c5[0x3];
        float ProjectileRadius; // 0xc8
        char pad_cc[0x4];
        TArray<EObjectTypeQuery> ObjectTypes; // 0xd0
        bool bTraceComplex; // 0xe0
        char pad_e1[0x7];
        TArray<AActor*> ActorsToIgnore; // 0xe8
        EDrawDebugTrace::Type DrawDebugType; // 0xf8
        char pad_f9[0x3];
        float DrawDebugTime; // 0xfc
        float SimFrequency; // 0x100
        float MaxSimTime; // 0x104
        float OverrideGravityZ; // 0x108
        bool ReturnValue; // 0x10c
    }; // Size: 0x10d
    Params_Blueprint_PredictProjectilePath_ByObjectType params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OutHit = (FHitResult)OutHit;
    params.OutPathPositions = (TArray<FVector>)OutPathPositions;
    params.OutLastTraceDestination = (FVector)OutLastTraceDestination;
    params.StartPos = (FVector)StartPos;
    params.LaunchVelocity = (FVector)LaunchVelocity;
    params.bTracePath = (bool)bTracePath;
    params.ProjectileRadius = (float)ProjectileRadius;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.DrawDebugTime = (float)DrawDebugTime;
    params.SimFrequency = (float)SimFrequency;
    params.MaxSimTime = (float)MaxSimTime;
    params.OverrideGravityZ = (float)OverrideGravityZ;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHit = params.OutHit;
    OutPathPositions = params.OutPathPositions;
    OutLastTraceDestination = params.OutLastTraceDestination;
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::Blueprint_PredictProjectilePath_Advanced(UObject* WorldContextObject, FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.Blueprint_PredictProjectilePath_Advanced"));
    struct Params_Blueprint_PredictProjectilePath_Advanced {
        UObject* WorldContextObject; // 0x0
        FPredictProjectilePathParams PredictParams; // 0x8
        FPredictProjectilePathResult PredictResult; // 0x68
        bool ReturnValue; // 0x120
    }; // Size: 0x121
    Params_Blueprint_PredictProjectilePath_Advanced params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PredictParams = (FPredictProjectilePathParams)PredictParams;
    params.PredictResult = (FPredictProjectilePathResult)PredictResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PredictParams = params.PredictParams;
    PredictResult = params.PredictResult;
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::AreAnyListenersWithinRange(UObject* WorldContextObject, FVector& Location, float MaximumRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.AreAnyListenersWithinRange"));
    struct Params_AreAnyListenersWithinRange {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        float MaximumRange; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AreAnyListenersWithinRange params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.MaximumRange = (float)MaximumRange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
    return (bool)params.ReturnValue;
}
AActor* UGameplayStatics::BeginSpawningActorFromClass(UObject* WorldContextObject, UClass* ActorClass, FTransform& SpawnTransform, bool bNoCollisionFail, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.BeginSpawningActorFromClass"));
    struct Params_BeginSpawningActorFromClass {
        UObject* WorldContextObject; // 0x0
        UClass* ActorClass; // 0x8
        FTransform SpawnTransform; // 0x10
        bool bNoCollisionFail; // 0x40
        char pad_41[0x7];
        AActor* Owner; // 0x48
        AActor* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_BeginSpawningActorFromClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorClass = (UClass*)ActorClass;
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.bNoCollisionFail = (bool)bNoCollisionFail;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpawnTransform = params.SpawnTransform;
    return (AActor*)params.ReturnValue;
}
AActor* UGameplayStatics::BeginSpawningActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, FTransform& SpawnTransform, bool bNoCollisionFail) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.BeginSpawningActorFromBlueprint"));
    struct Params_BeginSpawningActorFromBlueprint {
        UObject* WorldContextObject; // 0x0
        UBlueprint* Blueprint; // 0x8
        FTransform SpawnTransform; // 0x10
        bool bNoCollisionFail; // 0x40
        char pad_41[0x7];
        AActor* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_BeginSpawningActorFromBlueprint params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Blueprint = (UBlueprint*)Blueprint;
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.bNoCollisionFail = (bool)bNoCollisionFail;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpawnTransform = params.SpawnTransform;
    return (AActor*)params.ReturnValue;
}
AActor* UGameplayStatics::BeginDeferredActorSpawnFromClass(UObject* WorldContextObject, UClass* ActorClass, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.BeginDeferredActorSpawnFromClass"));
    struct Params_BeginDeferredActorSpawnFromClass {
        UObject* WorldContextObject; // 0x0
        UClass* ActorClass; // 0x8
        FTransform SpawnTransform; // 0x10
        ESpawnActorCollisionHandlingMethod CollisionHandlingOverride; // 0x40
        char pad_41[0x7];
        AActor* Owner; // 0x48
        AActor* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_BeginDeferredActorSpawnFromClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorClass = (UClass*)ActorClass;
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.CollisionHandlingOverride = (ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpawnTransform = params.SpawnTransform;
    return (AActor*)params.ReturnValue;
}
bool UGameplayStatics::AreSubtitlesEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.AreSubtitlesEnabled"));
    struct Params_AreSubtitlesEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreSubtitlesEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::ApplyRadialDamageWithFalloff(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, UClass* DamageTypeClass, TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, ECollisionChannel DamagePreventionChannel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ApplyRadialDamageWithFalloff"));
    struct Params_ApplyRadialDamageWithFalloff {
        UObject* WorldContextObject; // 0x0
        float BaseDamage; // 0x8
        float MinimumDamage; // 0xc
        FVector Origin; // 0x10
        float DamageInnerRadius; // 0x1c
        float DamageOuterRadius; // 0x20
        float DamageFalloff; // 0x24
        UClass* DamageTypeClass; // 0x28
        TArray<AActor*> IgnoreActors; // 0x30
        AActor* DamageCauser; // 0x40
        AController* InstigatedByController; // 0x48
        ECollisionChannel DamagePreventionChannel; // 0x50
        bool ReturnValue; // 0x51
    }; // Size: 0x52
    Params_ApplyRadialDamageWithFalloff params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BaseDamage = (float)BaseDamage;
    params.MinimumDamage = (float)MinimumDamage;
    params.Origin = (FVector)Origin;
    params.DamageInnerRadius = (float)DamageInnerRadius;
    params.DamageOuterRadius = (float)DamageOuterRadius;
    params.DamageFalloff = (float)DamageFalloff;
    params.DamageTypeClass = (UClass*)DamageTypeClass;
    params.IgnoreActors = (TArray<AActor*>)IgnoreActors;
    params.DamageCauser = (AActor*)DamageCauser;
    params.InstigatedByController = (AController*)InstigatedByController;
    params.DamagePreventionChannel = (ECollisionChannel)DamagePreventionChannel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    IgnoreActors = params.IgnoreActors;
    return (bool)params.ReturnValue;
}
bool UGameplayStatics::ApplyRadialDamage(UObject* WorldContextObject, float BaseDamage, FVector& Origin, float DamageRadius, UClass* DamageTypeClass, TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ApplyRadialDamage"));
    struct Params_ApplyRadialDamage {
        UObject* WorldContextObject; // 0x0
        float BaseDamage; // 0x8
        FVector Origin; // 0xc
        float DamageRadius; // 0x18
        char pad_1c[0x4];
        UClass* DamageTypeClass; // 0x20
        TArray<AActor*> IgnoreActors; // 0x28
        AActor* DamageCauser; // 0x38
        AController* InstigatedByController; // 0x40
        bool bDoFullDamage; // 0x48
        ECollisionChannel DamagePreventionChannel; // 0x49
        bool ReturnValue; // 0x4a
    }; // Size: 0x4b
    Params_ApplyRadialDamage params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BaseDamage = (float)BaseDamage;
    params.Origin = (FVector)Origin;
    params.DamageRadius = (float)DamageRadius;
    params.DamageTypeClass = (UClass*)DamageTypeClass;
    params.IgnoreActors = (TArray<AActor*>)IgnoreActors;
    params.DamageCauser = (AActor*)DamageCauser;
    params.InstigatedByController = (AController*)InstigatedByController;
    params.bDoFullDamage = (bool)bDoFullDamage;
    params.DamagePreventionChannel = (ECollisionChannel)DamagePreventionChannel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    IgnoreActors = params.IgnoreActors;
    return (bool)params.ReturnValue;
}
float UGameplayStatics::ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, UClass* DamageTypeClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ApplyDamage"));
    struct Params_ApplyDamage {
        AActor* DamagedActor; // 0x0
        float BaseDamage; // 0x8
        char pad_c[0x4];
        AController* EventInstigator; // 0x10
        AActor* DamageCauser; // 0x18
        UClass* DamageTypeClass; // 0x20
        float ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_ApplyDamage params{};
    params.DamagedActor = (AActor*)DamagedActor;
    params.BaseDamage = (float)BaseDamage;
    params.EventInstigator = (AController*)EventInstigator;
    params.DamageCauser = (AActor*)DamageCauser;
    params.DamageTypeClass = (UClass*)DamageTypeClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGameplayStatics::AnnounceAccessibleString(FString AnnouncementString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.AnnounceAccessibleString"));
    struct Params_AnnounceAccessibleString {
        FString AnnouncementString; // 0x0
    }; // Size: 0x10
    Params_AnnounceAccessibleString params{};
    params.AnnouncementString = (FString)AnnouncementString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameplayStatics::ActivateReverbEffect(UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameplayStatics.ActivateReverbEffect"));
    struct Params_ActivateReverbEffect {
        UObject* WorldContextObject; // 0x0
        UReverbEffect* ReverbEffect; // 0x8
        FName TagName; // 0x10
        float Priority; // 0x18
        float Volume; // 0x1c
        float FadeTime; // 0x20
    }; // Size: 0x24
    Params_ActivateReverbEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ReverbEffect = (UReverbEffect*)ReverbEffect;
    params.TagName = (FName)TagName;
    params.Priority = (float)Priority;
    params.Volume = (float)Volume;
    params.FadeTime = (float)FadeTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}

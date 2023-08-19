#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "ECollisionChannel.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "EMouseCaptureMode.hpp"
#include "EObjectTypeQuery.hpp"
#include "EPSCPoolMethod.hpp"
#include "EPhysicalSurface.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESuggestProjVelocityTraceOption\Type.hpp"
#include "FHitResult.hpp"
#include "FIntVector.hpp"
#include "FLatentActionInfo.hpp"
#include "FMinimalViewInfo.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class USoundClass;
class USoundConcurrency;
class UObject;
class USoundAttenuation;
class USoundBase;
class APlayerController;
class USceneComponent;
class UAudioComponent;
class UClass;
class UPhysicalMaterial;
class UForceFeedbackEffect;
class ULevelStreaming;
class UForceFeedbackAttenuation;
class APlayerCameraManager;
class UForceFeedbackComponent;
class UParticleSystem;
class UParticleSystemComponent;
class ACharacter;
class UDialogueWave;
struct FVector2D;
struct FDialogueContext;
class UMaterialInterface;
class UDecalComponent;
class UWorld;
class USoundMix;
class USaveGame;
class AActor;
class UPrimitiveComponent;
class UStaticMesh;
class UReverbEffect;
struct FMatrix;
class UBlueprint;
class APawn;
class AGameStateBase;
class AGameModeBase;
class UGameInstance;
struct FTransform;
struct FPredictProjectilePathParams;
struct FPredictProjectilePathResult;
class AController;
#pragma pack(push, 1)
class UGameplayStatics : public UBlueprintFunctionLibrary {
public:
    static UGameplayStatics* StaticClass();
    static void UnRetainAllSoundsInSoundClass(USoundClass* InSoundClass);
    static void UnloadStreamLevelBySoftObjectPtr(UObject* WorldContextObject);
    static void UnloadStreamLevel(UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    static bool SuggestProjectileVelocity_CustomArc(UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam);
    static UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    static UAudioComponent* SpawnSoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    static UAudioComponent* SpawnSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    static UObject* SpawnObject(UClass* ObjectClass, UObject* Outer);
    static UForceFeedbackComponent* SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    static UForceFeedbackComponent* SpawnForceFeedbackAtLocation(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    static UParticleSystemComponent* SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    static UParticleSystemComponent* SpawnEmitterAtLocation(UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
    static UAudioComponent* SpawnDialogueAttached(UDialogueWave* Dialogue, FDialogueContext& Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    static UAudioComponent* SpawnDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    static UAudioComponent* SpawnDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
    static UDecalComponent* SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan);
    static UDecalComponent* SpawnDecalAtLocation(UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    static void SetWorldTimeDilation(UWorld* World, float TimeDilation);
    static void SetWorldOriginLocation(UObject* WorldContextObject, FIntVector NewLocation);
    static void SetViewportMouseCaptureMode(UObject* WorldContextObject, EMouseCaptureMode MouseCaptureMode);
    static void SetSubtitlesEnabled(bool bEnabled);
    static void SetSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
    static void SetSoundClassDistanceScale(UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);
    static void SetPlayerControllerID(APlayerController* Player, int32_t ControllerId);
    static void SetMaxAudioChannelsScaled(UObject* WorldContextObject, float MaxChannelCountScale);
    static void SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation);
    static void SetGlobalPitchModulation(UObject* WorldContextObject, float PitchModulation, float TimeSec);
    static void SetGlobalListenerFocusParameters(UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
    static bool SetGamePaused(UObject* WorldContextObject, bool bPaused);
    static void SetForceDisableSplitscreen(UObject* WorldContextObject, bool bDisable);
    static void SetEnableWorldRendering(UObject* WorldContextObject, bool bEnable);
    static void SetBaseSoundMix(UObject* WorldContextObject, USoundMix* InSoundMix);
    static bool SaveGameToSlot(USaveGame* SaveGameObject, FString SlotName, int32_t UserIndex);
    static void RemovePlayer(APlayerController* Player, bool bDestroyPawn);
    static FVector RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation);
    static FVector RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation);
    static void PushSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier);
    static bool ProjectWorldToScreen(APlayerController* Player, FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    static void PrimeSound(USoundBase* InSound);
    static void PrimeAllSoundsInSoundClass(USoundClass* InSoundClass);
    static void PopSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier);
    static void PlayWorldCameraShake(UObject* WorldContextObject, UClass* Shake, FVector epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    static void PlaySoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* OwningActor);
    static void PlaySound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor, bool bIsUISound);
    static void PlayDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    static void PlayDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    static FString ParseOption(FString OPTIONS, FString Key);
    static void OpenLevelBySoftObjectPtr(UObject* WorldContextObject);
    static void OpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString OPTIONS);
    static FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32_t HitItem, int32_t ElementIndex, int32_t FaceIndex, FVector TraceStart, FVector TraceEnd);
    static void LoadStreamLevelBySoftObjectPtr(UObject* WorldContextObject);
    static void LoadStreamLevel(UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    static USaveGame* LoadGameFromSlot(FString SlotName, int32_t UserIndex);
    static bool IsSplitscreenForceDisabled(UObject* WorldContextObject);
    static bool IsGamePaused(UObject* WorldContextObject);
    static bool HasOption(FString OPTIONS, FString InKey);
    static bool HasLaunchOption(FString OptionToCheck);
    static int32_t GrassOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    static FIntVector GetWorldOriginLocation(UObject* WorldContextObject);
    static float GetWorldDeltaSeconds(UObject* WorldContextObject);
    static void GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix);
    static EMouseCaptureMode GetViewportMouseCaptureMode(UObject* WorldContextObject);
    static float GetUnpausedTimeSeconds(UObject* WorldContextObject);
    static float GetTimeSeconds(UObject* WorldContextObject);
    static int32_t GetTexturesYetToStream(UObject* WorldContextObject);
    static EPhysicalSurface GetSurfaceType(FHitResult& Hit);
    static ULevelStreaming* GetStreamingLevel(UObject* WorldContextObject, FName PackageName);
    static float GetRealTimeSeconds(UObject* WorldContextObject);
    static APawn* GetPlayerPawn(UObject* WorldContextObject, int32_t PlayerIndex);
    static int32_t GetPlayerControllerID(APlayerController* Player);
    static APlayerController* GetPlayerControllerFromID(UObject* WorldContextObject, int32_t ControllerId);
    static APlayerController* GetPlayerController(UObject* WorldContextObject, int32_t PlayerIndex);
    static ACharacter* GetPlayerCharacter(UObject* WorldContextObject, int32_t PlayerIndex);
    static APlayerCameraManager* GetPlayerCameraManager(UObject* WorldContextObject, int32_t PlayerIndex);
    static FString GetPlatformName();
    static UClass* GetObjectClass(UObject* Object);
    static int32_t GetMaxAudioChannelCount(UObject* WorldContextObject);
    static void GetKeyValue(FString Pair, FString& Key, FString& Value);
    static int32_t GetIntOption(FString OPTIONS, FString Key, int32_t DefaultValue);
    static float GetGlobalTimeDilation(UObject* WorldContextObject);
    static AGameStateBase* GetGameState(UObject* WorldContextObject);
    static AGameModeBase* GetGameMode(UObject* WorldContextObject);
    static UGameInstance* GetGameInstance(UObject* WorldContextObject);
    static bool GetEnableWorldRendering(UObject* WorldContextObject);
    static UReverbEffect* GetCurrentReverbEffect(UObject* WorldContextObject);
    static FString GetCurrentLevelName(UObject* WorldContextObject, bool bRemovePrefixString);
    static bool GetClosestListenerLocation(UObject* WorldContextObject, FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, FVector& ListenerPosition);
    static float GetAudioTimeSeconds(UObject* WorldContextObject);
    static void GetAllActorsWithTag(UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors);
    static void GetAllActorsWithInterface(UObject* WorldContextObject, UClass* Interface, TArray<AActor*>& OutActors);
    static void GetAllActorsOfClassWithTag(UObject* WorldContextObject, UClass* ActorClass, FName Tag, TArray<AActor*>& OutActors);
    static void GetAllActorsOfClass(UObject* WorldContextObject, UClass* ActorClass, TArray<AActor*>& OutActors);
    static AActor* GetActorOfClass(UObject* WorldContextObject, UClass* ActorClass);
    static void GetActorArrayBounds(TArray<AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent);
    static FVector GetActorArrayAverageLocation(TArray<AActor*>& Actors);
    static void GetAccurateRealTime(int32_t& Seconds, float& PartialSeconds);
    static void FlushLevelStreaming(UObject* WorldContextObject);
    static AActor* FinishSpawningActor(AActor* Actor, FTransform& SpawnTransform);
    static AActor* FindNearestActor(FVector Origin, TArray<AActor*>& ActorsToCheck, float& Distance);
    static bool FindCollisionUV(FHitResult& Hit, int32_t UVChannel, FVector2D& UV);
    static void EnableLiveStreaming(bool Enable);
    static bool DoesSaveGameExist(FString SlotName, int32_t UserIndex);
    static bool DeprojectScreenToWorld(APlayerController* Player, FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    static bool DeleteGameInSlot(FString SlotName, int32_t UserIndex);
    static void DeactivateReverbEffect(UObject* WorldContextObject, FName TagName);
    static UAudioComponent* CreateSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    static USaveGame* CreateSaveGameObject(UClass* SaveGameClass);
    static APlayerController* CreatePlayer(UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController);
    static void ClearSoundMixModifiers(UObject* WorldContextObject);
    static void ClearSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime);
    static void CancelAsyncLoading();
    static void BreakHitResult(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial*& PhysMat, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd);
    static bool BlueprintSuggestProjectileVelocity(UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    static bool Blueprint_PredictProjectilePath_ByTraceChannel(UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, ECollisionChannel TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    static bool Blueprint_PredictProjectilePath_ByObjectType(UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    static bool Blueprint_PredictProjectilePath_Advanced(UObject* WorldContextObject, FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult);
    static AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, UClass* ActorClass, FTransform& SpawnTransform, bool bNoCollisionFail, AActor* Owner);
    static AActor* BeginSpawningActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, FTransform& SpawnTransform, bool bNoCollisionFail);
    static AActor* BeginDeferredActorSpawnFromClass(UObject* WorldContextObject, UClass* ActorClass, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    static bool AreSubtitlesEnabled();
    static bool AreAnyListenersWithinRange(UObject* WorldContextObject, FVector& Location, float MaximumRange);
    static bool ApplyRadialDamageWithFalloff(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, UClass* DamageTypeClass, TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, ECollisionChannel DamagePreventionChannel);
    static bool ApplyRadialDamage(UObject* WorldContextObject, float BaseDamage, FVector& Origin, float DamageRadius, UClass* DamageTypeClass, TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel);
    static float ApplyPointDamage(AActor* DamagedActor, float BaseDamage, FVector& HitFromDirection, FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, UClass* DamageTypeClass);
    static float ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, UClass* DamageTypeClass);
    static void AnnounceAccessibleString(FString AnnouncementString);
    static void ActivateReverbEffect(UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime);
}; // Size: 0x28
#pragma pack(pop)

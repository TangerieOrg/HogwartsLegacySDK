#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLevelSequenceCameraSettings.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "FSoftObjectPath.hpp"
class ULevelSequencePlayer;
class ULevelSequenceBurnInOptions;
class UMovieSceneBindingOverrides;
class UObject;
class ULevelSequenceBurnIn;
class ULevelSequence;
#pragma pack(push, 1)
class ALevelSequenceActor : public AActor {
public:
    char pad_248[0x18];
    FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x260
    char pad_274[0x4];
    ULevelSequencePlayer* SequencePlayer; // 0x278
    FSoftObjectPath LevelSequence; // 0x280
    FLevelSequenceCameraSettings CameraSettings; // 0x298
    char pad_29a[0x6];
    ULevelSequenceBurnInOptions* BurnInOptions; // 0x2a0
    UMovieSceneBindingOverrides* BindingOverrides; // 0x2a8
    uint8_t bAutoPlay : 1; // 0x2b0
    uint8_t bOverrideInstanceData : 1; // 0x2b0
    uint8_t bReplicatePlayback : 1; // 0x2b0
    uint8_t pad_bitfield_2b0_3 : 5;
    char pad_2b1[0x7];
    UObject* DefaultInstanceData; // 0x2b8
    ULevelSequenceBurnIn* BurnInInstance; // 0x2c0
    bool bShowBurnin; // 0x2c8
    char pad_2c9[0x7];
    static ALevelSequenceActor* StaticClass();
    void ShowBurnin();
    void SetSequence(ULevelSequence* InSequence);
    void SetReplicatePlayback(bool ReplicatePlayback);
    void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    void ResetBindings();
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    void RemoveBindingByTag(FName Tag, AActor* Actor);
    void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);
    void OnLevelSequenceLoaded__DelegateSignature();
    ULevelSequence* LoadSequence();
    void HideBurnin();
    ULevelSequencePlayer* GetSequencePlayer();
    ULevelSequence* GetSequence();
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag);
    void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);
    void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);
}; // Size: 0x2d0
#pragma pack(pop)

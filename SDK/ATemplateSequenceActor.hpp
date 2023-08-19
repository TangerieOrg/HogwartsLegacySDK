#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "FSoftObjectPath.hpp"
#include "FTemplateSequenceBindingOverrideData.hpp"
class UTemplateSequencePlayer;
class UTemplateSequence;
#pragma pack(push, 1)
class ATemplateSequenceActor : public AActor {
public:
    char pad_248[0x10];
    FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x258
    char pad_26c[0x4];
    UTemplateSequencePlayer* SequencePlayer; // 0x270
    FSoftObjectPath TemplateSequence; // 0x278
    FTemplateSequenceBindingOverrideData BindingOverride; // 0x290
    char pad_29c[0x4];
    static ATemplateSequenceActor* StaticClass();
    void SetSequence(UTemplateSequence* InSequence);
    void SetBinding(AActor* Actor, bool bOverridesDefault);
    UTemplateSequence* LoadSequence();
    UTemplateSequencePlayer* GetSequencePlayer();
    UTemplateSequence* GetSequence();
}; // Size: 0x2a0
#pragma pack(pop)

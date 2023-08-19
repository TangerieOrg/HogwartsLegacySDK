#pragma once
#include <cstdint>
#include "FMovieSceneRootEvaluationTemplateInstance.hpp"
#include "UObject.hpp"
class UMovieSceneSequence;
#pragma pack(push, 1)
class USequenceCameraShakeSequencePlayer : public UObject {
public:
    char pad_28[0x2a8];
    UObject* BoundObjectOverride; // 0x2d0
    UMovieSceneSequence* Sequence; // 0x2d8
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e0
    char pad_3c8[0x60];
    static USequenceCameraShakeSequencePlayer* StaticClass();
}; // Size: 0x428
#pragma pack(pop)

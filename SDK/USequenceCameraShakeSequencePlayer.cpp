#include "FMovieSceneRootEvaluationTemplateInstance.hpp"
#include "UMovieSceneSequence.hpp"
#include "UObject.hpp"
#include "USequenceCameraShakeSequencePlayer.hpp"
USequenceCameraShakeSequencePlayer* USequenceCameraShakeSequencePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer");
    return (USequenceCameraShakeSequencePlayer*)res;
}

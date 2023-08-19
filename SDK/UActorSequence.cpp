#include "FActorSequenceObjectReferenceMap.hpp"
#include "UActorSequence.hpp"
#include "UMovieScene.hpp"
#include "UMovieSceneSequence.hpp"
UActorSequence* UActorSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorSequence.ActorSequence");
    return (UActorSequence*)res;
}

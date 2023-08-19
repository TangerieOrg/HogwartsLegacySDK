#include "UActorSequencePlayer.hpp"
#include "UMovieSceneSequencePlayer.hpp"
UActorSequencePlayer* UActorSequencePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorSequence.ActorSequencePlayer");
    return (UActorSequencePlayer*)res;
}

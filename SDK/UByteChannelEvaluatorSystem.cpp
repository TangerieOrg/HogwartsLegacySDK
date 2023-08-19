#include "UByteChannelEvaluatorSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UByteChannelEvaluatorSystem* UByteChannelEvaluatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.ByteChannelEvaluatorSystem");
    return (UByteChannelEvaluatorSystem*)res;
}

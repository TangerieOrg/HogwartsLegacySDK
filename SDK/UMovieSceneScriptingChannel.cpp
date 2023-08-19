#include "UMovieSceneScriptingChannel.hpp"
#include "UObject.hpp"
UMovieSceneScriptingChannel* UMovieSceneScriptingChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingChannel");
    return (UMovieSceneScriptingChannel*)res;
}

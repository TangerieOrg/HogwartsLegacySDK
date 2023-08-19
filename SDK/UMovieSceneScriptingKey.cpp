#include "UMovieSceneScriptingKey.hpp"
#include "UObject.hpp"
UMovieSceneScriptingKey* UMovieSceneScriptingKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingKey");
    return (UMovieSceneScriptingKey*)res;
}

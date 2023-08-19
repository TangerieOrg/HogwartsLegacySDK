#include "UMoviePlayerSettings.hpp"
#include "UObject.hpp"
UMoviePlayerSettings* UMoviePlayerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/MoviePlayer.MoviePlayerSettings");
    return (UMoviePlayerSettings*)res;
}

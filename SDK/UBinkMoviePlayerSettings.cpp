#include "EBinkMoviePlayerBinkBufferModes.hpp"
#include "EBinkMoviePlayerBinkSoundTrack.hpp"
#include "EPixelFormat.hpp"
#include "FVector2D.hpp"
#include "UBinkMoviePlayerSettings.hpp"
#include "UObject.hpp"
UBinkMoviePlayerSettings* UBinkMoviePlayerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/BinkMediaPlayer.BinkMoviePlayerSettings");
    return (UBinkMoviePlayerSettings*)res;
}

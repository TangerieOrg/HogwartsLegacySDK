#include "UMovieSceneAudioCaptureProtocolBase.hpp"
#include "UNullAudioCaptureProtocol.hpp"
UNullAudioCaptureProtocol* UNullAudioCaptureProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.NullAudioCaptureProtocol");
    return (UNullAudioCaptureProtocol*)res;
}

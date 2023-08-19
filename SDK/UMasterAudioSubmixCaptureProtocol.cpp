#include "UMasterAudioSubmixCaptureProtocol.hpp"
#include "UMovieSceneAudioCaptureProtocolBase.hpp"
UMasterAudioSubmixCaptureProtocol* UMasterAudioSubmixCaptureProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
    return (UMasterAudioSubmixCaptureProtocol*)res;
}

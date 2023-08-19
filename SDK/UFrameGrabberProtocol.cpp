#include "UFrameGrabberProtocol.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
UFrameGrabberProtocol* UFrameGrabberProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.FrameGrabberProtocol");
    return (UFrameGrabberProtocol*)res;
}

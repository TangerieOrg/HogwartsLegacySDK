#include "UFrameGrabberProtocol.hpp"
#include "UVideoCaptureProtocol.hpp"
UVideoCaptureProtocol* UVideoCaptureProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.VideoCaptureProtocol");
    return (UVideoCaptureProtocol*)res;
}

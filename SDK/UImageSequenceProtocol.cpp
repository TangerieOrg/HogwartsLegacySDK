#include "UFrameGrabberProtocol.hpp"
#include "UImageSequenceProtocol.hpp"
UImageSequenceProtocol* UImageSequenceProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.ImageSequenceProtocol");
    return (UImageSequenceProtocol*)res;
}

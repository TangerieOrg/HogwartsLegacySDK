#include "EHDRCaptureGamut.hpp"
#include "UImageSequenceProtocol.hpp"
#include "UImageSequenceProtocol_EXR.hpp"
UImageSequenceProtocol_EXR* UImageSequenceProtocol_EXR::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR");
    return (UImageSequenceProtocol_EXR*)res;
}

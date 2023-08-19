#include "EHDRCaptureGamut.hpp"
#include "FCompositionGraphCapturePasses.hpp"
#include "FSoftObjectPath.hpp"
#include "UCompositionGraphCaptureProtocol.hpp"
#include "UMaterialInterface.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
UCompositionGraphCaptureProtocol* UCompositionGraphCaptureProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol");
    return (UCompositionGraphCaptureProtocol*)res;
}

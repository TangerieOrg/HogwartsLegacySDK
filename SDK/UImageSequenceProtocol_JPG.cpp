#include "UCompressedImageSequenceProtocol.hpp"
#include "UImageSequenceProtocol_JPG.hpp"
UImageSequenceProtocol_JPG* UImageSequenceProtocol_JPG::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG");
    return (UImageSequenceProtocol_JPG*)res;
}

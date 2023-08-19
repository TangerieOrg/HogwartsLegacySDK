#include "UCompressedImageSequenceProtocol.hpp"
#include "UImageSequenceProtocol_PNG.hpp"
UImageSequenceProtocol_PNG* UImageSequenceProtocol_PNG::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG");
    return (UImageSequenceProtocol_PNG*)res;
}

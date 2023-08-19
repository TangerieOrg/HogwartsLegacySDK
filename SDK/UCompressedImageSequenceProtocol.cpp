#include "UCompressedImageSequenceProtocol.hpp"
#include "UImageSequenceProtocol.hpp"
UCompressedImageSequenceProtocol* UCompressedImageSequenceProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol");
    return (UCompressedImageSequenceProtocol*)res;
}

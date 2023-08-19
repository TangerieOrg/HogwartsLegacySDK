#include "UImageSequenceProtocol.hpp"
#include "UImageSequenceProtocol_BMP.hpp"
UImageSequenceProtocol_BMP* UImageSequenceProtocol_BMP::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP");
    return (UImageSequenceProtocol_BMP*)res;
}

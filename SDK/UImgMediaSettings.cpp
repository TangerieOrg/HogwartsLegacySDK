#include "FFrameRate.hpp"
#include "UImgMediaSettings.hpp"
#include "UObject.hpp"
UImgMediaSettings* UImgMediaSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/ImgMediaFactory.ImgMediaSettings");
    return (UImgMediaSettings*)res;
}

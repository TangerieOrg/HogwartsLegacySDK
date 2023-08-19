#include "AnimationCompressionFormat.hpp"
#include "UAnimBoneCompressionCodec.hpp"
#include "UAnimCompress.hpp"
UAnimCompress* UAnimCompress::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress");
    return (UAnimCompress*)res;
}

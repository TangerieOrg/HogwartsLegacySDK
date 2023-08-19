#include "UAnimBoneCompressionCodec.hpp"
#include "UObject.hpp"
UAnimBoneCompressionCodec* UAnimBoneCompressionCodec::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimBoneCompressionCodec");
    return (UAnimBoneCompressionCodec*)res;
}

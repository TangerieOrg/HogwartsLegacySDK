#include "UAnimBoneCompressionCodec.hpp"
#include "UAnimBoneCompressionSettings.hpp"
#include "UObject.hpp"
UAnimBoneCompressionSettings* UAnimBoneCompressionSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimBoneCompressionSettings");
    return (UAnimBoneCompressionSettings*)res;
}

#include "UAnimBoneCompressionCodec_ACLBase.hpp"
#include "UAnimBoneCompressionCodec_ACLCustom.hpp"
UAnimBoneCompressionCodec_ACLCustom* UAnimBoneCompressionCodec_ACLCustom::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
    return (UAnimBoneCompressionCodec_ACLCustom*)res;
}

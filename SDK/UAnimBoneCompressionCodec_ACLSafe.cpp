#include "UAnimBoneCompressionCodec_ACLBase.hpp"
#include "UAnimBoneCompressionCodec_ACLSafe.hpp"
UAnimBoneCompressionCodec_ACLSafe* UAnimBoneCompressionCodec_ACLSafe::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
    return (UAnimBoneCompressionCodec_ACLSafe*)res;
}

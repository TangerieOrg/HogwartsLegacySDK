#include "UAnimBoneCompressionCodec.hpp"
#include "UAnimBoneCompressionCodec_ACLBase.hpp"
UAnimBoneCompressionCodec_ACLBase* UAnimBoneCompressionCodec_ACLBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase");
    return (UAnimBoneCompressionCodec_ACLBase*)res;
}

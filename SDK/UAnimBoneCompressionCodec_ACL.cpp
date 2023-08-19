#include "UAnimBoneCompressionCodec.hpp"
#include "UAnimBoneCompressionCodec_ACL.hpp"
#include "UAnimBoneCompressionCodec_ACLBase.hpp"
UAnimBoneCompressionCodec_ACL* UAnimBoneCompressionCodec_ACL::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACL");
    return (UAnimBoneCompressionCodec_ACL*)res;
}

#include "UAnimCurveCompressionCodec.hpp"
#include "UAnimCurveCompressionCodec_ACL.hpp"
UAnimCurveCompressionCodec_ACL* UAnimCurveCompressionCodec_ACL::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimCurveCompressionCodec_ACL");
    return (UAnimCurveCompressionCodec_ACL*)res;
}

#pragma once
#include <cstdint>
#include "UAnimBoneCompressionCodec_ACLBase.hpp"
class UAnimBoneCompressionCodec;
#pragma pack(push, 1)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase {
public:
    UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x38
    static UAnimBoneCompressionCodec_ACL* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

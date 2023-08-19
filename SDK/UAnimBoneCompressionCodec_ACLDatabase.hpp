#pragma once
#include <cstdint>
#include "UAnimBoneCompressionCodec_ACLBase.hpp"
class UAnimationCompressionLibraryDatabase;
#pragma pack(push, 1)
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase {
public:
    UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x38
    static UAnimBoneCompressionCodec_ACLDatabase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

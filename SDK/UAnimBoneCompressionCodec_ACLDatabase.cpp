#include "UAnimBoneCompressionCodec_ACLBase.hpp"
#include "UAnimBoneCompressionCodec_ACLDatabase.hpp"
#include "UAnimationCompressionLibraryDatabase.hpp"
UAnimBoneCompressionCodec_ACLDatabase* UAnimBoneCompressionCodec_ACLDatabase::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase");
    return (UAnimBoneCompressionCodec_ACLDatabase*)res;
}

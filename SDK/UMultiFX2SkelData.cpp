#include "UMultiFX2SkelData.hpp"
#include "UObject.hpp"
#include "USkeletalMesh.hpp"
UMultiFX2SkelData* UMultiFX2SkelData::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.MultiFX2SkelData");
    return (UMultiFX2SkelData*)res;
}

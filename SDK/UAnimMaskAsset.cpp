#include "UAnimMaskAsset.hpp"
#include "UObject.hpp"
#include "USkeleton.hpp"
UAnimMaskAsset* UAnimMaskAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimMaskAsset");
    return (UAnimMaskAsset*)res;
}

#include "EPhysicalBodyBlendState.hpp"
#include "FAlphaBlend.hpp"
#include "UObject.hpp"
#include "UPhysicalBodyBlendInfo.hpp"
UPhysicalBodyBlendInfo* UPhysicalBodyBlendInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.PhysicalBodyBlendInfo");
    return (UPhysicalBodyBlendInfo*)res;
}

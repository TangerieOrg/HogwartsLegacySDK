#include "UObject.hpp"
#include "UPhysicalBodyBlendChannel.hpp"
#include "UPhysicalBodyBlendInfo.hpp"
UPhysicalBodyBlendChannel* UPhysicalBodyBlendChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.PhysicalBodyBlendChannel");
    return (UPhysicalBodyBlendChannel*)res;
}

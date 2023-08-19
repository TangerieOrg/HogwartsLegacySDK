#include "UAnimMetaData.hpp"
#include "UBoneMaskBase.hpp"
UBoneMaskBase* UBoneMaskBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BoneMaskBase");
    return (UBoneMaskBase*)res;
}

#include "UAnimMask.hpp"
#include "UInterface.hpp"
UAnimMask* UAnimMask::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimMask");
    return (UAnimMask*)res;
}

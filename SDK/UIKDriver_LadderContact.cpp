#include "FIKDriver_LadderContactControl.hpp"
#include "UIKDriver.hpp"
#include "UIKDriver_LadderContact.hpp"
UIKDriver_LadderContact* UIKDriver_LadderContact::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IKDriver_LadderContact");
    return (UIKDriver_LadderContact*)res;
}

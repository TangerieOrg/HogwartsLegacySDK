#include "ECollisionChannel.hpp"
#include "FIKDriver_LedgeContactFootControl.hpp"
#include "FIKDriver_LedgeContactHandControl.hpp"
#include "FIKDriver_LedgeContactHipsControl.hpp"
#include "UAnimSequence.hpp"
#include "UIKDriver.hpp"
#include "UIKDriver_LedgeContact.hpp"
UIKDriver_LedgeContact* UIKDriver_LedgeContact::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IKDriver_LedgeContact");
    return (UIKDriver_LedgeContact*)res;
}

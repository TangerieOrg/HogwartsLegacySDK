#include "UIKDriver.hpp"
#include "UObject.hpp"
UIKDriver* UIKDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IKDriver");
    return (UIKDriver*)res;
}

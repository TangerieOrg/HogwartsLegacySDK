#include "UIKDriver.hpp"
#include "UIKDriver_DisableControls.hpp"
UIKDriver_DisableControls* UIKDriver_DisableControls::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IKDriver_DisableControls");
    return (UIKDriver_DisableControls*)res;
}

#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Strafe.hpp"
UAblAnimationTagChooser_Strafe* UAblAnimationTagChooser_Strafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Strafe");
    return (UAblAnimationTagChooser_Strafe*)res;
}

#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Idle.hpp"
UAblAnimationTagChooser_Idle* UAblAnimationTagChooser_Idle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Idle");
    return (UAblAnimationTagChooser_Idle*)res;
}

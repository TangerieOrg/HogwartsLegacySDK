#include "ESpeedType\Type.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_GaitSpeed.hpp"
UAblAnimationTagChooser_GaitSpeed* UAblAnimationTagChooser_GaitSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_GaitSpeed");
    return (UAblAnimationTagChooser_GaitSpeed*)res;
}

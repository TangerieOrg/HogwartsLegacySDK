#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Swim.hpp"
UAblAnimationTagChooser_Swim* UAblAnimationTagChooser_Swim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Swim");
    return (UAblAnimationTagChooser_Swim*)res;
}

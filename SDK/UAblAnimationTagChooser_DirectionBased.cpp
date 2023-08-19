#include "EDirectionType\Type.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_DirectionBased.hpp"
UAblAnimationTagChooser_DirectionBased* UAblAnimationTagChooser_DirectionBased::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_DirectionBased");
    return (UAblAnimationTagChooser_DirectionBased*)res;
}

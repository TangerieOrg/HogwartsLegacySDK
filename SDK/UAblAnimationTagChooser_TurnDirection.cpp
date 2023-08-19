#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_TurnDirection.hpp"
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
UAblAnimationTagChooser_TurnDirection* UAblAnimationTagChooser_TurnDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_TurnDirection");
    return (UAblAnimationTagChooser_TurnDirection*)res;
}

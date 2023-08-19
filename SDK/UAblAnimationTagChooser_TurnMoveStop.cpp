#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_TurnMoveStop.hpp"
UAblAnimationTagChooser_TurnMoveStop* UAblAnimationTagChooser_TurnMoveStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_TurnMoveStop");
    return (UAblAnimationTagChooser_TurnMoveStop*)res;
}

#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CrouchTurnMoveStop.hpp"
UAblAnimationTagChooser_CrouchTurnMoveStop* UAblAnimationTagChooser_CrouchTurnMoveStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CrouchTurnMoveStop");
    return (UAblAnimationTagChooser_CrouchTurnMoveStop*)res;
}

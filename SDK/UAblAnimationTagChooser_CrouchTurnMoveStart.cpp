#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CrouchTurnMoveStart.hpp"
UAblAnimationTagChooser_CrouchTurnMoveStart* UAblAnimationTagChooser_CrouchTurnMoveStart::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CrouchTurnMoveStart");
    return (UAblAnimationTagChooser_CrouchTurnMoveStart*)res;
}

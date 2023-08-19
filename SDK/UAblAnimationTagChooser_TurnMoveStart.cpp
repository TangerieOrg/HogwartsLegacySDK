#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_TurnMoveStart.hpp"
UAblAnimationTagChooser_TurnMoveStart* UAblAnimationTagChooser_TurnMoveStart::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_TurnMoveStart");
    return (UAblAnimationTagChooser_TurnMoveStart*)res;
}

#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_StealthTurnMoveStop.hpp"
UAblAnimationTagChooser_StealthTurnMoveStop* UAblAnimationTagChooser_StealthTurnMoveStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_StealthTurnMoveStop");
    return (UAblAnimationTagChooser_StealthTurnMoveStop*)res;
}

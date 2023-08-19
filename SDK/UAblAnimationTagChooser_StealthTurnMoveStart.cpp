#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_StealthTurnMoveStart.hpp"
UAblAnimationTagChooser_StealthTurnMoveStart* UAblAnimationTagChooser_StealthTurnMoveStart::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_StealthTurnMoveStart");
    return (UAblAnimationTagChooser_StealthTurnMoveStart*)res;
}

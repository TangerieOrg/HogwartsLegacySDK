#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_MoveJumpLand.hpp"
UAblAnimationTagChooser_MoveJumpLand* UAblAnimationTagChooser_MoveJumpLand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_MoveJumpLand");
    return (UAblAnimationTagChooser_MoveJumpLand*)res;
}

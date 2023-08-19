#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_MoveJump.hpp"
UAblAnimationTagChooser_MoveJump* UAblAnimationTagChooser_MoveJump::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_MoveJump");
    return (UAblAnimationTagChooser_MoveJump*)res;
}

#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_ClimbLadder.hpp"
UAblAnimationTagChooser_ClimbLadder* UAblAnimationTagChooser_ClimbLadder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_ClimbLadder");
    return (UAblAnimationTagChooser_ClimbLadder*)res;
}

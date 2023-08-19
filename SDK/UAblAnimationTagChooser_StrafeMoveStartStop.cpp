#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_StrafeMoveStartStop.hpp"
UAblAnimationTagChooser_StrafeMoveStartStop* UAblAnimationTagChooser_StrafeMoveStartStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_StrafeMoveStartStop");
    return (UAblAnimationTagChooser_StrafeMoveStartStop*)res;
}

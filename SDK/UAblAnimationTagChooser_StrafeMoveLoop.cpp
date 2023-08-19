#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_StrafeMoveLoop.hpp"
UAblAnimationTagChooser_StrafeMoveLoop* UAblAnimationTagChooser_StrafeMoveLoop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_StrafeMoveLoop");
    return (UAblAnimationTagChooser_StrafeMoveLoop*)res;
}

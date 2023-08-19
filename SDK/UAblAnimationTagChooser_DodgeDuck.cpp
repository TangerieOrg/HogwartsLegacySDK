#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_DodgeDuck.hpp"
UAblAnimationTagChooser_DodgeDuck* UAblAnimationTagChooser_DodgeDuck::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_DodgeDuck");
    return (UAblAnimationTagChooser_DodgeDuck*)res;
}

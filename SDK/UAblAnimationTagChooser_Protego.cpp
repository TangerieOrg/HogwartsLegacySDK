#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Protego.hpp"
UAblAnimationTagChooser_Protego* UAblAnimationTagChooser_Protego::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Protego");
    return (UAblAnimationTagChooser_Protego*)res;
}

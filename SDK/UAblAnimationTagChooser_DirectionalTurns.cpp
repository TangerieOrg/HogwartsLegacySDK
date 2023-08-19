#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_DirectionalTurns.hpp"
UAblAnimationTagChooser_DirectionalTurns* UAblAnimationTagChooser_DirectionalTurns::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_DirectionalTurns");
    return (UAblAnimationTagChooser_DirectionalTurns*)res;
}

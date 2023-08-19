#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_FlipendoFlourish.hpp"
UAblAnimationTagChooser_FlipendoFlourish* UAblAnimationTagChooser_FlipendoFlourish::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_FlipendoFlourish");
    return (UAblAnimationTagChooser_FlipendoFlourish*)res;
}

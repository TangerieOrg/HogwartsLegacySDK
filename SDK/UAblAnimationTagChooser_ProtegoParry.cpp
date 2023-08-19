#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_ProtegoParry.hpp"
UAblAnimationTagChooser_ProtegoParry* UAblAnimationTagChooser_ProtegoParry::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_ProtegoParry");
    return (UAblAnimationTagChooser_ProtegoParry*)res;
}

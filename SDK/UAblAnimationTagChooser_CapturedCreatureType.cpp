#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CapturedCreatureType.hpp"
UAblAnimationTagChooser_CapturedCreatureType* UAblAnimationTagChooser_CapturedCreatureType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CapturedCreatureType");
    return (UAblAnimationTagChooser_CapturedCreatureType*)res;
}

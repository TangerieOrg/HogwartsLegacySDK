#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Pivot.hpp"
UAblAnimationTagChooser_Pivot* UAblAnimationTagChooser_Pivot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Pivot");
    return (UAblAnimationTagChooser_Pivot*)res;
}

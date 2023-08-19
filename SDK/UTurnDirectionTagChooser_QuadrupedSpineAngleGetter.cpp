#include "UTurnDirectionTagChooser_QuadrupedSpineAngleGetter.hpp"
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
UTurnDirectionTagChooser_QuadrupedSpineAngleGetter* UTurnDirectionTagChooser_QuadrupedSpineAngleGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnDirectionTagChooser_QuadrupedSpineAngleGetter");
    return (UTurnDirectionTagChooser_QuadrupedSpineAngleGetter*)res;
}

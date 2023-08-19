#include "UObject.hpp"
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
UTurnDirectionTagChooser_TargetDirectionGetter* UTurnDirectionTagChooser_TargetDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnDirectionTagChooser_TargetDirectionGetter");
    return (UTurnDirectionTagChooser_TargetDirectionGetter*)res;
}

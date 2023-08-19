#include "UTurnDirectionTagChooser_DesiredWorldDirectionGetter.hpp"
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
UTurnDirectionTagChooser_DesiredWorldDirectionGetter* UTurnDirectionTagChooser_DesiredWorldDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnDirectionTagChooser_DesiredWorldDirectionGetter");
    return (UTurnDirectionTagChooser_DesiredWorldDirectionGetter*)res;
}

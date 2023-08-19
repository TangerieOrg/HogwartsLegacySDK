#include "UTurnDirectionTagChooser_DesiredDirectionGetter.hpp"
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
UTurnDirectionTagChooser_DesiredDirectionGetter* UTurnDirectionTagChooser_DesiredDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnDirectionTagChooser_DesiredDirectionGetter");
    return (UTurnDirectionTagChooser_DesiredDirectionGetter*)res;
}

#include "UTurnDirectionTagChooser_BlackboardDirectionGetter.hpp"
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
UTurnDirectionTagChooser_BlackboardDirectionGetter* UTurnDirectionTagChooser_BlackboardDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnDirectionTagChooser_BlackboardDirectionGetter");
    return (UTurnDirectionTagChooser_BlackboardDirectionGetter*)res;
}

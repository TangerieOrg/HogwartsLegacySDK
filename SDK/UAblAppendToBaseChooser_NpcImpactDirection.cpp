#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_NpcImpactDirection.hpp"
UAblAppendToBaseChooser_NpcImpactDirection* UAblAppendToBaseChooser_NpcImpactDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_NpcImpactDirection");
    return (UAblAppendToBaseChooser_NpcImpactDirection*)res;
}

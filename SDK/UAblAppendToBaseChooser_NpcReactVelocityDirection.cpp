#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_NpcReactVelocityDirection.hpp"
UAblAppendToBaseChooser_NpcReactVelocityDirection* UAblAppendToBaseChooser_NpcReactVelocityDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_NpcReactVelocityDirection");
    return (UAblAppendToBaseChooser_NpcReactVelocityDirection*)res;
}

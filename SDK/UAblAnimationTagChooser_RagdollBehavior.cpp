#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_RagdollBehavior.hpp"
UAblAnimationTagChooser_RagdollBehavior* UAblAnimationTagChooser_RagdollBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_RagdollBehavior");
    return (UAblAnimationTagChooser_RagdollBehavior*)res;
}

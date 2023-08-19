#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_PoseMatching.hpp"
UAblAppendToBaseChooser_PoseMatching* UAblAppendToBaseChooser_PoseMatching::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_PoseMatching");
    return (UAblAppendToBaseChooser_PoseMatching*)res;
}

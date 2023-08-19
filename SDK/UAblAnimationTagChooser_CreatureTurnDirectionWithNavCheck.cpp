#include "FTurnDirectionNavMeshCheckSettings.hpp"
#include "UAblAnimationTagChooser_CreatureTurnDirectionWithNavCheck.hpp"
#include "UAblAnimationTagChooser_TurnDirection.hpp"
UAblAnimationTagChooser_CreatureTurnDirectionWithNavCheck* UAblAnimationTagChooser_CreatureTurnDirectionWithNavCheck::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CreatureTurnDirectionWithNavCheck");
    return (UAblAnimationTagChooser_CreatureTurnDirectionWithNavCheck*)res;
}

#include "NPC_TargetAwareStateRateSource.hpp"
#include "UModFilter_EnemyAwareness_Base.hpp"
#include "UModFilter_EnemyAwareness_MatchingMultiAwarenessStates.hpp"
UModFilter_EnemyAwareness_MatchingMultiAwarenessStates* UModFilter_EnemyAwareness_MatchingMultiAwarenessStates::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_EnemyAwareness_MatchingMultiAwarenessStates");
    return (UModFilter_EnemyAwareness_MatchingMultiAwarenessStates*)res;
}

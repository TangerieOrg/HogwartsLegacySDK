#include "UInterface.hpp"
#include "UUtilityScoreProvider.hpp"
UUtilityScoreProvider* UUtilityScoreProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.UtilityScoreProvider");
    return (UUtilityScoreProvider*)res;
}

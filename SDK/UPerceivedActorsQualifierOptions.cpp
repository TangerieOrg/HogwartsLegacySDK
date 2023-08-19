#include "UPerceivedActorsQualifierOptions.hpp"
#include "UQualifierOptions.hpp"
UPerceivedActorsQualifierOptions* UPerceivedActorsQualifierOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.PerceivedActorsQualifierOptions");
    return (UPerceivedActorsQualifierOptions*)res;
}

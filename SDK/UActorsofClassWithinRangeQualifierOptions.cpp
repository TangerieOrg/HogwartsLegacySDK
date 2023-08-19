#include "UActorsofClassWithinRangeQualifierOptions.hpp"
#include "UClass.hpp"
#include "UQualifierOptions.hpp"
UActorsofClassWithinRangeQualifierOptions* UActorsofClassWithinRangeQualifierOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ActorsofClassWithinRangeQualifierOptions");
    return (UActorsofClassWithinRangeQualifierOptions*)res;
}

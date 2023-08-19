#include "UObject.hpp"
#include "UQualifierOptions.hpp"
UQualifierOptions* UQualifierOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.QualifierOptions");
    return (UQualifierOptions*)res;
}

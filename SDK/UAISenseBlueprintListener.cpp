#include "UAISenseBlueprintListener.hpp"
#include "UUserDefinedStruct.hpp"
UAISenseBlueprintListener* UAISenseBlueprintListener::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseBlueprintListener");
    return (UAISenseBlueprintListener*)res;
}

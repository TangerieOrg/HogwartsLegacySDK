#include "FOutfitDefinition.hpp"
#include "UObject.hpp"
#include "UOutfitDefinitionWrapper.hpp"
UOutfitDefinitionWrapper* UOutfitDefinitionWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OutfitDefinitionWrapper");
    return (UOutfitDefinitionWrapper*)res;
}

#include "UDatasmithActorTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
UDatasmithActorTemplate* UDatasmithActorTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithActorTemplate");
    return (UDatasmithActorTemplate*)res;
}

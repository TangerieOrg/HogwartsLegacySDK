#include "UDatasmithObjectTemplate.hpp"
#include "UObject.hpp"
UDatasmithObjectTemplate* UDatasmithObjectTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithObjectTemplate");
    return (UDatasmithObjectTemplate*)res;
}
